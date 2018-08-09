#include "bullet.h"
#include "enemy.h"
#include "game.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QList>
#include <QTimer>
#include <typeinfo>
extern Game *game;

Bullet::Bullet(QGraphicsItem *parrent) : QObject(), QGraphicsPixmapItem(parrent)
{
	// drew grapics
    setPixmap(QPixmap(":/images/bullet.png"));

	// connect
	QTimer *timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
	// creat explosion sound
	//    explosion=new QMediaPlayer();
	//    explosion->setMedia(QUrl("qrc:/Sounds/explosion.mp3"));
}

void Bullet::move()
{
	// if bullet collides with enemy , destroy both
	QList<QGraphicsItem *> colliding_item = collidingItems();
	for (int i = 0, n = colliding_item.size(); i < n; i++) {

		if (typeid(*(colliding_item[i])) == typeid(Enemy)) {
			// incease score
			game->score->incrase();
			// remove both
			scene()->removeItem(colliding_item[i]);
			scene()->removeItem(this);
			// plaing sound of explosion
			//            if(explosion->state() ==
			//            QMediaPlayer::PlayingState)
			//            {
			//                explosion->setPosition(0);
			//            }
			//            else if (explosion->state() ==
			//            QMediaPlayer::StoppedState)
			//            {
			//                explosion->play();
			//            }
			// delete both
			delete colliding_item[i];
			delete this;
			return;
		}
	}
	// move bullite up
	setPos(x(), y() - 10);
	//    if(y() + rect().height() < 0)
	//    {

	//        scene()->removeItem(this);
	//        delete this;

	//    }
}
