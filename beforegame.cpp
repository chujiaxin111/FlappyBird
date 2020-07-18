#include "beforegame.h"
#include "ui_beforegame.h"
#include <QGraphicsView>
#include <QSequentialAnimationGroup>
#include <QPropertyAnimation>
#include <QPushButton>
#include <QWidget>
#include <QCursor>
BeforeGame::BeforeGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BeforeGame)
{
    ui->setupUi(this);
    ui->label->setScaledContents(true);
    this->resize(ui->label->width(),ui->label->height());
    this->setWindowTitle("加油吧，小鸟");


    btn1.setParent(this);
    btn1.setText("push here to continue...");
    btn1.move(250,400);

    btn1.setCursor(Qt::PointingHandCursor);//鼠标为手指形状


   btn1.setStyleSheet("background-color:transparent;font-size:25px;color:rgb(19,72,87)");
   btn1.font();

    connect(&btn1,SIGNAL(pressed()),this,SLOT(jumpslot()));



}

BeforeGame::~BeforeGame()
{
    delete ui;
}

void BeforeGame::jumpslot()//跳转到子窗口
{
    w2.show();
    this->hide();

}





