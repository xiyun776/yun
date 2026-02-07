#ifndef VIDEO_H
#define VIDEO_H

#include <QMainWindow>
#include <QKeyEvent>

namespace Ui {
class Video;
}

class Video : public QMainWindow
{
    Q_OBJECT

public:
    explicit Video(QWidget *parent = nullptr);
    bool eventFilter(QObject *obj,QEvent *e)override;//事件过滤器
    ~Video();

private:
    Ui::Video *ui;
};

#endif // VIDEO_H
