#include "enemy.h"

#include <QGraphicsScene>
#include <QTimer>
#include <stdlib.h>
#include "game.h"
#include <QDebug>
extern Game *game;
Enemy::Enemy() : QObject(),QGraphicsPixmapItem()
{
    int random_number= rand() % 700;
    //set random pos
    setPos(random_number,0);

    //drew rect
    setPixmap(QPixmap(":/images/enemy.png"));
    setTransformOriginPoint(50,50);
    setRotation(180);


    //connect
    QTimer *timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void Enemy::move()
{
    setPos(x(),y() + 5);
    if(y() +1 > 800 )
    {
        game->helth->decrase();
        scene()->removeItem(this);
        delete this;



    }
}


