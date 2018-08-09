#ifndef BULLET_H
#define BULLET_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QMediaPlayer>

class Bullet: public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bullet(QGraphicsItem *parrent);
public slots:
    void move();
private:
    QMediaPlayer *explosion;
};

#endif // BULLET_H
