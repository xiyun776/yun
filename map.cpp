#include "map.h"
#include "ui_map.h"

static const QString apiKey="xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
//https://lbs.amap.com/api/webservice/guide/api/georegeo
//api使用说明网址,使用了高德地图api地理编码,获得输入地点的经纬度

Map::Map(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Map)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    setWindowTitle("地图");
    setFixedSize(width(),height());
    setWindowIcon(QIcon(":/map.png"));

    // 初始化网络管理器
    geocodeManager = new QNetworkAccessManager(this);
    connect(geocodeManager, &QNetworkAccessManager::finished,this, &Map::onGeocodeReplyFinished);

    // 退出按钮
    connect(ui->exitBtn,&QPushButton::clicked,[&]{
        parentWidget()->show();
        close();
    });
}

Map::~Map()
{
    delete ui;
}

void Map::on_navigate_clicked()
{
    startPoint = ui->startLineEdit->text().trimmed();//获得原始地址,去除首尾空白字符
    endPoint = ui->endLineEdit->text().trimmed();

    if (startPoint.isEmpty() || endPoint.isEmpty())
    {
        QMessageBox::warning(this,"提示","  请输入起点和终点!   ");
        return;
    }

    startLngLat.clear();
    endLngLat.clear();
    geocodeAddress(startPoint);//请求起点经纬度
}


void Map::geocodeAddress(const QString &address)
{
    QString url = QString("https://restapi.amap.com/v3/geocode/geo?address=%1&key=%2")
                      .arg(address).arg(apiKey);//(地理编码)
    geocodeManager->get(QNetworkRequest(QUrl(url)));
}

void Map::onGeocodeReplyFinished(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray data = reply->readAll();
        QJsonObject obj=QJsonDocument::fromJson(data).object();
        
        if (obj["status"].toString() == "1")
        {
            QJsonArray geocodes = obj["geocodes"].toArray();
            if (!geocodes.isEmpty())
            {
                QString location = geocodes[0].toObject()["location"].toString();
                
                if (startLngLat.isEmpty())
                {
                    startLngLat = location;
                    geocodeAddress(endPoint);//请求终点经纬度
                }
                else
                {
                    endLngLat = location;
                    openMapInBrowser();//打开高德网页版
                }
            }
        }
        else qDebug()<<QString("地址编码失败: %1").arg(obj["info"].toString());
    }
    else qDebug()<<QString("网络错误: %1").arg(reply->errorString());
    
    reply->deleteLater();
}

void Map::openMapInBrowser()
{
    if (startLngLat.isEmpty() || endLngLat.isEmpty())return;
    
    int ret = QMessageBox::information(this, "成功", 
                                       "地址解析成功！\n\n点击确定在浏览器中查看导航路线",
                                       QMessageBox::Ok | QMessageBox::Cancel);
    
    if (ret == QMessageBox::Ok)
    {
        QString amapWebUrl =
        QString("https://www.amap.com/dir?from[name]=%1&from[lnglat]=%2&to[name]=%3&to[lnglat]=%4&type=car&policy=1")
        .arg(startPoint).arg(startLngLat)// /dir弹出导航页面
        .arg(endPoint).arg(endLngLat);   // 之后自动填充起点终点
        
        QDesktopServices::openUrl(QUrl(amapWebUrl));
    }
}

void Map::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    p.drawPixmap(0,0,width(),height(),QPixmap(":/myplayer_bg.jpg"));
    p.end();
}
