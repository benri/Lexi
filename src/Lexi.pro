#-------------------------------------------------
#
# Project created by QtCreator 2015-03-14T14:24:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Lexi
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    list.cpp \
    glyph.cpp \
    Common/list.cpp \
    Common/point.cpp

HEADERS  += mainwindow.h \
    list.h \
    glyph.h \
    Common/list.h \
    Common/point.h

FORMS    += mainwindow.ui
