#-------------------------------------------------
#
# Project created by QtCreator 2015-10-23T20:45:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainwindow_client.cpp \
    mainwindow_developer.cpp

HEADERS  += mainwindow.h \
    mainwindow_manager.h \
    mainwindow_client.h \
    mainwindow_developer.h

FORMS    += mainwindow.ui \
    mainwindow_manager.ui \
    mainwindow_client.ui \
    mainwindow_developer.ui
