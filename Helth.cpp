#include "Helth.h"
#include <QFont>

Helth::Helth(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    helth= 3;
    //draw the Helth
    setPlainText(QString("Helth : "+ QString::number(helth)));// Helth : 3

    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}

void Helth::decrase()
{
    helth--;
    setPlainText(QString("Helth : "+ QString::number(helth)));// Helth : 2

}

int Helth::getHelth()
{
    return helth;
}
