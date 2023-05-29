#-------------------------------------------------
#
# Project created by QtCreator 2023-05-27T21:26:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test01
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pageone.cpp \
    pagetwo.cpp \
    pagethird.cpp

HEADERS  += mainwindow.h \
    pageone.h \
    pagetwo.h \
    userdefined.h \
    pagethird.h

FORMS    += mainwindow.ui \
    pageone.ui \
    pagetwo.ui \
    pagethird.ui
