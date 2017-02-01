#-------------------------------------------------
#
# Project created by QtCreator 2017-02-01T11:08:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = raceTime
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    party.cpp \
    racer.cpp \
    listracers.cpp \
    formracer.cpp

HEADERS  += mainwindow.h \
    party.h \
    racer.h \
    listracers.h \
    formracer.h

FORMS    += mainwindow.ui \
    listracers.ui \
    formracer.ui
