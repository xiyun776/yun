#ifndef WEATHER_H
#define WEATHER_H

#include <QMainWindow>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QUrlQuery>
#include <QDate>

namespace Ui {
class Weather;
}

class Weather : public QMainWindow
{
    Q_OBJECT

public:
    explicit Weather(QWidget *parent = nullptr);
    ~Weather();

private:
    Ui::Weather *ui;
    QNetworkAccessManager *weatherManager=nullptr;
    // 和风天气 location 参数，使用城市ID，而不是中文名
    // 开封市:101180801  新乡市:101180301  郑州市:101180101
    QString city = "101180801";
private slots:
    void weather_finish(QNetworkReply *reply);
    void city_change(int idx);
    
private:
    QString getWeatherIconPath(const QString &iconCode);
};

#endif // WEATHER_H
