#include "myweatherwidget.h"
#include "ui_myweatherwidget.h"

MyWeatherWidget::MyWeatherWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWeatherWidget)
{
    ui->setupUi(this);
}

void MyWeatherWidget::set(int day,int mitem,int mxtem,
const QString &dir,const QString &level,const QString &weather,const QString &icon)
{
    ui->labelDay->setText(week[day]);
    ui->labelDir->setText(QString("风向:%1").arg(dir));
    ui->labelLevel->setText(QString("风力:%1级").arg(level));
    ui->labelTem->setText(QString("温度:%1-%2℃").arg(mitem).arg(mxtem));
    ui->labelWeather->setText(QString("天气:%1").arg(weather));
    // 如果提供了图标路径，则设置图标
    if (!icon.isEmpty())
        ui->labelIcon->setPixmap(QPixmap(icon));
}

MyWeatherWidget::~MyWeatherWidget()
{
    delete ui;
}
