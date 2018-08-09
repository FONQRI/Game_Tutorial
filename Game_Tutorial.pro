#-------------------------------------------------
#
# Project created by QtCreator 2016-05-30T10:54:57
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Game_Tutorial
TEMPLATE = app


SOURCES += main.cpp \
    bullet.cpp \
    enemy.cpp \
    game.cpp \
    Player.cpp \
    Score.cpp \
    Helth.cpp

HEADERS  += \
    bullet.h \
    enemy.h \
    game.h \
    Player.h \
    Score.h \
    Helth.h

FORMS    +=

RESOURCES += \
    res.qrc
