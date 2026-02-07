#include "video.h"
#include "ui_video.h"

Video::Video(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Video)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);//真正地关闭窗口
    setWindowTitle("视频");
    setFixedSize(width(),height());
    setWindowIcon(QIcon(":/video.png"));
    ui->widget->video->installEventFilter(this);//video安装事件过滤器

    //退出按钮
    connect(ui->exitBtn,&QPushButton::clicked,[&]{
        parentWidget()->show();
        close();
    });

    //全屏按钮
    connect(ui->upBtn,&QPushButton::clicked,[&](){
        ui->widget->video->setFullScreen(true);
    });
}

//事件过滤器,esc键退出全屏
bool Video::eventFilter(QObject *obj,QEvent *e)
{
    if(obj==ui->widget->video&&e->type()==QEvent::KeyPress)
    {
        QKeyEvent *event=static_cast<QKeyEvent*>(e);
        if(event&&event->key()==Qt::Key_Escape)
        {
            ui->widget->video->setFullScreen(false);
            return true;
        }
    }
    return QMainWindow::eventFilter(obj,e);
}

Video::~Video()
{
    delete ui;
}
