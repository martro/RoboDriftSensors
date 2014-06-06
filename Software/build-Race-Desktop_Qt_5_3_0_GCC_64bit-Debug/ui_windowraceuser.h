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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRaceUser
{
public:
    QLabel *track;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
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
        track->setGeometry(QRect(30, 130, 331, 141));
        track->setPixmap(QPixmap(QString::fromUtf8(":/images/track.gif")));
        track->setScaledContents(true);
        horizontalLayoutWidget = new QWidget(WindowRaceUser);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(150, 80, 160, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Sensor1 = new QLabel(horizontalLayoutWidget);
        Sensor1->setObjectName(QStringLiteral("Sensor1"));

        horizontalLayout->addWidget(Sensor1);

        Sensor2 = new QLabel(horizontalLayoutWidget);
        Sensor2->setObjectName(QStringLiteral("Sensor2"));

        horizontalLayout->addWidget(Sensor2);

        Sensor3 = new QLabel(horizontalLayoutWidget);
        Sensor3->setObjectName(QStringLiteral("Sensor3"));

        horizontalLayout->addWidget(Sensor3);

        Sensor4 = new QLabel(horizontalLayoutWidget);
        Sensor4->setObjectName(QStringLiteral("Sensor4"));

        horizontalLayout->addWidget(Sensor4);

        Sensor5 = new QLabel(horizontalLayoutWidget);
        Sensor5->setObjectName(QStringLiteral("Sensor5"));

        horizontalLayout->addWidget(Sensor5);


        retranslateUi(WindowRaceUser);

        QMetaObject::connectSlotsByName(WindowRaceUser);
    } // setupUi

    void retranslateUi(QWidget *WindowRaceUser)
    {
        WindowRaceUser->setWindowTitle(QApplication::translate("WindowRaceUser", "User Window", 0));
        track->setText(QString());
        Sensor1->setText(QString());
        Sensor2->setText(QString());
        Sensor3->setText(QString());
        Sensor4->setText(QString());
        Sensor5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowRaceUser: public Ui_WindowRaceUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACEUSER_H
