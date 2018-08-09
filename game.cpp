#include "game.h"

#include <QBrush>
#include <QImage>
#include <QMediaContent>
#include <QMediaPlayer>
#include <QUrl>

Game::Game(QWidget* parent)
{

    //create a QGraphicsscene
	scene = new QGraphicsScene();
    setBackgroundBrush(QBrush(QImage(":/images/bg.png")));

    //create Player
	player = new Player();

    //set player size and geometry
    player->setPixmap(QPixmap(":/images/Player.png"));

    //set rect focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    //add player to scene
    scene->addItem(player);

    // create score
	score = new Score();
    scene->addItem(score);

    //create helth
	helth = new Helth();
    scene->addItem(helth);
	helth->setPos(helth->x(), helth->y() + 25);

    //create a QGraphicsview
    setScene(scene);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //show QGraphicsthis

	this->setFixedSize(800, 600);
	scene->setSceneRect(0, 0, 800, 600);

	player->setPos(this->width() / 2, this->height() - 100);
    //spawn enemise
	QTimer* timer = new QTimer();

	QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
    timer->start(2000);

    //add background music
	QMediaPlayer* music = new QMediaPlayer();
	music->setMedia(QMediaContent(QUrl("qrc:/Sounds/Reza Sadeghi - Darde Eshgh.mp3")));
	music->setVolume(100);
	music->play();
}
