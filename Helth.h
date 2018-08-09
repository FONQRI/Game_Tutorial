#ifndef HELTH_H
#define HELTH_H

#include <QGraphicsTextItem>

class Helth:public QGraphicsTextItem
{
public:
    Helth(QGraphicsItem *parent=0);
    void decrase();
    int getHelth();
private:
    int helth;
};


#endif // HELTH_H
