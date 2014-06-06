/********************************************************************************
** Form generated from reading UI file 'windowraceuser.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWRACEUSER_H
#define UI_WINDOWRACEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRaceUser
{
public:
    QLabel *track;
    QLabel *Sensor1;
    QLabel *Sensor2;
    QLabel *Sensor3;
    QLabel *Sensor4;
    QLabel *Sensor5;

    void setupUi(QWidget *WindowRaceUser)
    {
        if (WindowRaceUser->objectName().isEmpty())
            WindowRaceUser->setObjectName(QStringLiteral("WindowRaceUser"));
        WindowRaceUser->resize(400, 300);
        track = new QLabel(WindowRaceUser);
        track->setObjectName(QStringLiteral("track"));
        track->setGeometry(QRect(20, 30, 331, 201));
        track->setPixmap(QPixmap(QString::fromUtf8(":/images/track.gif")));
        track->setScaledContents(true);
        Sensor1 = new QLabel(WindowRaceUser);
        Sensor1->setObjectName(QStringLiteral("Sensor1"));
        Sensor1->setGeometry(QRect(170, 90, 27, 29));
        Sensor2 = new QLabel(WindowRaceUser);
        Sensor2->setObjectName(QStringLiteral("Sensor2"));
        Sensor2->setGeometry(QRect(60, 80, 35, 29));
        Sensor3 = new QLabel(WindowRaceUser);
        Sensor3->setObjectName(QStringLiteral("Sensor3"));
        Sensor3->setGeometry(QRect(80, 170, 31, 29));
        Sensor4 = new QLabel(WindowRaceUser);
        Sensor4->setObjectName(QStringLiteral("Sensor4"));
        Sensor4->setGeometry(QRect(220, 160, 31, 29));
        Sensor5 = new QLabel(WindowRaceUser);
        Sensor5->setObjectName(QStringLiteral("Sensor5"));
        Sensor5->setGeometry(QRect(270, 120, 31, 29));

        retranslateUi(WindowRaceUser);

        QMetaObject::connectSlotsByName(WindowRaceUser);
    } // setupUi

    void retranslateUi(QWidget *WindowRaceUser)
    {
        WindowRaceUser->setWindowTitle(QApplication::translate("WindowRaceUser", "User Window", 0));
        track->setText(QString());
        Sensor1->setText(QApplication::translate("WindowRaceUser", "1", 0));
        Sensor2->setText(QApplication::translate("WindowRaceUser", "2", 0));
        Sensor3->setText(QApplication::translate("WindowRaceUser", "3", 0));
        Sensor4->setText(QApplication::translate("WindowRaceUser", "4", 0));
        Sensor5->setText(QApplication::translate("WindowRaceUser", "5", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowRaceUser: public Ui_WindowRaceUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACEUSER_H
