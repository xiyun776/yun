#include "weather.h"
#include "ui_weather.h"

static const QString apiKey  = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
static const QString apiHost = "xxxxxxxxxxxxxxxxxxxxxxapi.com";
//https://dev.qweather.com/docs/api/weather/weather-daily-forecast/
//和风天气api使用说明网址,"3d"请求到的预报是今天加上后面2天

Weather::Weather(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Weather)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);//真正地关闭窗口
    setWindowTitle("天气");
    setFixedSize(width(),height());
    setWindowIcon(QIcon(":/weather.png"));

    //退出按钮
    connect(ui->exitBtn,&QPushButton::clicked,[&]{
        parentWidget()->show();
        close();
    });

    ui->comboBox->addItem("开封",101180801);
    ui->comboBox->addItem("新乡",101180301);
    ui->comboBox->addItem("郑州",101180101);
    connect(ui->comboBox,&QComboBox::currentIndexChanged,this,&Weather::city_change);

    //新建网络请求管理器
    weatherManager=new QNetworkAccessManager(this);
    connect(weatherManager,&QNetworkAccessManager::finished,this,&Weather::weather_finish);
    // 使用 API KEY 方式鉴权：
    // GET: https://<api_host>/v7/weather/7d?location=<city>
    // Header: X-QW-Api-Key: <api_key>
    QNetworkRequest req(QUrl(QStringLiteral("https://%1/v7/weather/7d?location=%2").arg(apiHost).arg(city)));
    req.setRawHeader("X-QW-Api-Key", apiKey.toUtf8());
    weatherManager->get(req);
}

void Weather::city_change(int idx)
{
    city=ui->comboBox->itemData(idx).toString();
    qDebug()<<QStringLiteral("请求城市%1的天气数据").arg(ui->comboBox->itemText(idx));

    QNetworkRequest req(QUrl(QStringLiteral("https://%1/v7/weather/7d?location=%2").arg(apiHost).arg(city)));
    req.setRawHeader("X-QW-Api-Key", apiKey.toUtf8());
    weatherManager->get(req);
}

void Weather::weather_finish(QNetworkReply *reply)
{
    if (reply->error() != QNetworkReply::NoError)
    {
        qDebug() << "网络错误:" << reply->error() << reply->errorString();
        qDebug() << "raw header:" << reply->rawHeaderList();
        qDebug() << "body:" << reply->readAll();
        reply->deleteLater();
        return;
    }

    QByteArray data = reply->readAll();
    qDebug() << "天气请求成功";
    
    // 解析JSON数据
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isObject())
    {
        qDebug() << "JSON解析失败";
        reply->deleteLater();
        return;
    }
    
    QJsonObject obj = doc.object();
    // 获取daily数组
    QJsonArray dailyArray = obj["daily"].toArray();
    
    // 设置5个天气widget
    QVector<MyWeatherWidget*> widgets =
    {
        ui->widgetToday,
        ui->widgetFuture1,
        ui->widgetFuture2,
        ui->widgetFuture3,
        ui->widgetFuture4
    };
    
    for (int i = 0; i < widgets.size(); ++i)
    {
        QJsonObject dayObj = dailyArray[i].toObject();
        
        // 获取日期并计算星期几
        QDate date = QDate::fromString(dayObj["fxDate"].toString(), "yyyy-MM-dd");
        if(!i)ui->labelTime->setText(QString("更新时间:%1").arg(dayObj["fxDate"].toString()));
        int dayOfWeek = date.dayOfWeek() % 7; // Qt的dayOfWeek: 1-7 (周一到周日)，转换为0-6
        
        // 获取温度
        int tempMax = dayObj["tempMax"].toString().toInt();
        int tempMin = dayObj["tempMin"].toString().toInt();
        
        // 获取风向和风力,天气状况
        QString windDir = dayObj["windDirDay"].toString();
        QString windLevel = dayObj["windScaleDay"].toString();
        QString textDay = dayObj["textDay"].toString();
        // 根据图标代码获取图标路径
        QString iconPath = getWeatherIconPath(dayObj["iconDay"].toString());
        // 设置widget数据
        widgets[i]->set(dayOfWeek, tempMin, tempMax, windDir, windLevel,textDay,iconPath);
        
        qDebug() << QString("第%1天: %2, 温度:%3-%4, 风向:%5, 风力:%6, 图标:%7")
                    .arg(i+1).arg(textDay).arg(tempMin).arg(tempMax)
                    .arg(windDir).arg(windLevel).arg(iconPath);
    }
    
    reply->deleteLater();
}

Weather::~Weather()
{
    delete ui;
}

QString Weather::getWeatherIconPath(const QString &iconCode)
{
    // 和风天气图标代码对应关系
    // 100: 晴 -> sunny.png
    // 101-103: 多云 -> cloud.png
    // 104: 阴 -> cloudy_sun.png
    // 150-153: 晴转多云/阴 -> cloudy_sun.png
    // 300-399: 雨 -> clouds_storm.png
    // 400-499: 雪 -> clouds_storm.png
    // 500-515: 雾霾等 -> cloudy_sun.png
    
    int code = iconCode.toInt();
    
    if (code == 100) {
        // 晴
        return ":/sunny.png";
    }
    else if (code >= 101 && code <= 103) {
        // 多云
        return ":/cloud.png";
    }
    else if (code == 104 || (code >= 150 && code <= 153)) {
        // 阴天
        return ":/cloudy_sun.png";
    }
    else if ((code >= 300 && code <= 399) || (code >= 400 && code <= 499)) {
        // 雨雪天气
        return ":/clouds_storm.png";
    }
    else if (code >= 500 && code <= 515) {
        // 雾霾等
        return ":/cloudy_sun.png";
    }
    else {
        // 默认
        return ":/cloud.png";
    }
}
