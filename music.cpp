#include "music.h"
#include "ui_music.h"

Music::Music(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Music)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);//真正地关闭窗口
    setWindowTitle("音乐");
    setFixedSize(width(),height());
    setWindowIcon(QIcon(":/music.png"));

    //退出按钮
    connect(ui->exitBtn,&QPushButton::clicked,[&]{
        parentWidget()->show();
        close();
    });
}

Music::~Music()
{
    delete ui;
}
