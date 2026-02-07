#ifndef MYWEATHERWIDGET_H
#define MYWEATHERWIDGET_H

#include <QWidget>

namespace Ui {
class MyWeatherWidget;
}

class MyWeatherWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWeatherWidget(QWidget *parent = nullptr);
    void set(int day,int mitem,int mxtem,
    const QString &dir,const QString &level,const QString &weather,const QString &icon);
    const QString week[7] = {"星期日","星期一","星期二","星期三","星期四","星期五","星期六"};
    ~MyWeatherWidget();
private:
    Ui::MyWeatherWidget *ui;    
};

#endif // MYWEATHERWIDGET_H
