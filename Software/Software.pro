#-------------------------------------------------
#
# Project created by QtCreator 2014-05-31T14:29:36
#
#-------------------------------------------------

QT       += core gui

TARGET = Software
TEMPLATE = app


SOURCES += main.cpp\
        WindowAdmin.cpp \
    windowaddteam.cpp \
    team.cpp \
    windowaddleader.cpp \
    windoweditteam.cpp \
    windownewrace.cpp \
    WindowAddMembers.cpp

HEADERS  += WindowAdmin.h \
    windowaddteam.h \
    team.h \
    windowaddleader.h \
    windoweditteam.h \
    windownewrace.h \
    WindowAddMembers.h

FORMS    += WindowAdmin.ui \
    windowaddteam.ui \
    windowaddleader.ui \
    windoweditteam.ui \
    windownewrace.ui \
    WindowAddMembers.ui

RESOURCES += \
    resources.qrc
