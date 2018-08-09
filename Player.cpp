#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QDebug>
#include "bullet.h"
#include "enemy.h"
Player::Player()
{
//    shoot=new QMediaPlayer();
//    shoot->setMedia(QUrl("qrc:/Sounds/shoot.mp3"));

}

void Player::keyPressEvent(QKeyEvent *event)
{



    //moving rect acording to pressed key for Left ,Right ,Up and Down

    switch (event->key()) {
    case Qt::Key_Left:
        if(pos().x() > 0 )
            setPos(x() -10 , y());

        break;
    case Qt::Key_Right:
        if(pos().x() + 100 < 800 )
            setPos(x() +10 , y());
        break;
    case Qt::Key_Space:
        Bullet *bullet=new Bullet(0);
        bullet->setPos(x() + 40,y());
        scene()->addItem(bullet);
        //play sound of shoot



//        if(shoot->state() == QMediaPlayer::PlayingState)
//        {
//            shoot->setPosition(0);
//        }else if(shoot->state() == QMediaPlayer::StoppedState)
//        {
//            shoot->play();
//        }

        break;

    }

}

void Player::spawn()
{
    //create an enemy

    Enemy *enemy=new Enemy();
    scene()->addItem(enemy);

}
