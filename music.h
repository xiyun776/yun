#ifndef MUSIC_H
#define MUSIC_H

#include <QMainWindow>

namespace Ui {
class Music;
}

class Music : public QMainWindow
{
    Q_OBJECT

public:
    explicit Music(QWidget *parent = nullptr);
    ~Music();

private:
    Ui::Music *ui;
};

#endif // MUSIC_H
