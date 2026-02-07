#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QWidget>
#include <QFileDialog>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QVideoWidget>
#include <QPainter>

namespace Ui {
class MyPlayer;
}

class MyPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit MyPlayer(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent* e)override;
    QMediaPlayer *player=nullptr;
    QAudioOutput *audio=nullptr;
    QVideoWidget *video=nullptr;
    ~MyPlayer();
private:
    QString path=":/play.png";
    Ui::MyPlayer *ui;
    QString myFromTime(qint64 ms);
private slots:
    void on_pauseBtn_clicked();//自动连接
    void on_llBtn_clicked();
    void on_lBtn_clicked();
    void on_rrBtn_clicked();
    void on_rBtn_clicked();
};

#endif // MYPLAYER_H
