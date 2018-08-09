#ifndef GAME_H
#define GAME_H

#include<QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>


#include "enemy.h"
#include "Score.h"
#include "Helth.h"


#include"Player.h"

class Game:public QGraphicsView
{
public:
    Game(QWidget * parent=0);
    QGraphicsScene *scene;
    Player *player;
    Score *score;
    Helth *helth;
    int place[3]={5};
};

#endif // GAME_H
