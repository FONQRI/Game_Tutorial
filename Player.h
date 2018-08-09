#ifndef PLAYER_H
#define PLAYER_H
#include "QGraphicsItem"
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QMediaPlayer>


class Player: public QObject ,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void spawn();
private:
    QMediaPlayer *shoot;
};

#endif // PLAYER_H
