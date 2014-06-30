#-------------------------------------------------
#
# Project created by QtCreator 2014-05-31T14:29:36
#
#-------------------------------------------------

QT       += core gui serialport multimedia printsupport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = Software
TEMPLATE = app


SOURCES += main.cpp\
        WindowAdmin.cpp \
    windowaddteam.cpp \
    team.cpp \
    windowaddleader.cpp \
    windoweditteam.cpp \
    WindowAddMembers.cpp \
    WindowAddCar.cpp \
    pugixml.cpp \
    Race/lamp.cpp \
    Race/windowrace.cpp \
    Race/windowracemain.cpp \
    Race/windowracesettings.cpp \
    Race/windowraceuser.cpp \
    Race/windowusart.cpp \
    Race/windowusermain.cpp \
    results.cpp \
    WindowStats.cpp \
    Race/DataToWindowRaceUser.cpp \
    Race/WindowUserStats.cpp

HEADERS  += WindowAdmin.h \
    windowaddteam.h \
    team.h \
    windowaddleader.h \
    windoweditteam.h \
    WindowAddMembers.h \
    WindowAddCar.h \
    pugiconfig.hpp \
    pugixml.hpp \
    Race/lamp.h \
    Race/windowrace.h \
    Race/windowracemain.h \
    Race/windowracesettings.h \
    Race/windowraceuser.h \
    Race/windowusart.h \
    Race/windowusermain.h \
    results.h \
    WindowStats.h \
    Race/DataToWindowRaceUser.h \
    Race/WindowUserStats.h

FORMS    += WindowAdmin.ui \
    windowaddteam.ui \
    windowaddleader.ui \
    windoweditteam.ui \
    WindowAddMembers.ui \
    WindowAddCar.ui \
    Race/lamp.ui \
    Race/windowrace.ui \
    Race/windowracemain.ui \
    Race/windowracesettings.ui \
    Race/windowraceuser.ui \
    Race/windowusart.ui \
    Race/windowusermain.ui \
    WindowStats.ui \
    Race/WindowUserStats.ui

RESOURCES += \
    resources.qrc \
    Race/Images.qrc
