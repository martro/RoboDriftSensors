#-------------------------------------------------
#
# Project created by QtCreator 2014-06-06T14:50:14
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Race
TEMPLATE = app


SOURCES += main.cpp\
        windowrace.cpp \
    measurement.cpp \
    windowraceuser.cpp \
    windowusart.cpp \
    windowusermain.cpp

HEADERS  += windowrace.h \
    measurement.h \
    windowraceuser.h \
    windowusart.h \
    windowusermain.h

FORMS    += windowrace.ui \
    windowraceuser.ui \
    windowusart.ui \
    windowusermain.ui

RESOURCES += \
    Images.qrc

SUBDIRS += \
    ../../RDSystemPC/SensorsGUI/SensorsGUI.pro
