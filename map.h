#ifndef MAP_H
#define MAP_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>
#include <QUrl>
#include <QDesktopServices>
#include <QPainter>

namespace Ui {
class Map;
}

class Map : public QMainWindow
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = nullptr);
    ~Map();

private slots:
    void on_navigate_clicked();
    void onGeocodeReplyFinished(QNetworkReply *reply);
    void paintEvent(QPaintEvent* e)override;

private:
    Ui::Map *ui;

    QNetworkAccessManager *geocodeManager;
    QString startLngLat;//起点经纬度 经度,纬度
    QString endLngLat;//终点经纬度 如:121.1998,31.2396
    QString startPoint,endPoint;

    void geocodeAddress(const QString &address);
    void openMapInBrowser();
};

#endif // MAP_H
