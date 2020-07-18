#include "gamewindow.h"
#include "beforegame.h"
#include <QApplication>
#include <QTime>
#include<QDialog>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //设置时间为随机种子用于产生随机数
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));

    BeforeGame w;
    w.show();
    //GameWindow w;
    //w.show();
    return a.exec();
}
