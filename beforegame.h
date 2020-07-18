#ifndef BEFOREGAME_H
#define BEFOREGAME_H

#include <QPushButton>
#include <QWidget>
#include <QParallelAnimationGroup>
#include"gamewindow.h"


namespace Ui {
class BeforeGame;
}

class BeforeGame : public QWidget
{
    Q_OBJECT

public:
    explicit BeforeGame(QWidget *parent = 0);
    ~BeforeGame();
    QPushButton btn1;//按钮


    GameWindow w2;//
public slots:
    void jumpslot();

private:
    Ui::BeforeGame *ui;

};

#endif // BEFOREGAME_H
