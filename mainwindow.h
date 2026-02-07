#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "weather.h"
#include "map.h"
#include "video.h"
#include "music.h"
#include <QLabel>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent *e)override;
private:
    Ui::MainWindow *ui;
    Weather *weather=nullptr;
    Map *map=nullptr;
    Video *video=nullptr;
    Music *music=nullptr;
};
#endif // MAINWINDOW_H
