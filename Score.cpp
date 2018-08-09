#include "Score.h"
#include <QFont>
Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    score=0;
    //draw the score
    setPlainText(QString("Score : "+ QString::number(score)));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}

void Score::incrase()
{
    score++;
    setPlainText(QString("Score : "+ QString::number(score)));

}

int Score::getScore()
{
    return score;
}
