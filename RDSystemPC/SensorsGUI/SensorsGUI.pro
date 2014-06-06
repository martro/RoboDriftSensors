
#-------------------------------------------------
#
# Project created by QtCreator 2014-06-04T23:05:52
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SensorsGUI
TEMPLATE = app


SOURCES += main.cpp\
        windowusart.cpp \
    timer.cpp

HEADERS  += windowusart.h \
    timer.h

FORMS    += windowusart.ui \
    timer.ui
