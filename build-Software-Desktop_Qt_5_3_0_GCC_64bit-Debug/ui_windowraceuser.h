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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRaceUser
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *Sensor1;
    QLabel *Sensor2;
    QLabel *Sensor3;
    QLabel *Sensor4;
    QLabel *Sensor5;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTeamName;
    QLabel *labelCarName;
    QLabel *labelCategory;
    QHBoxLayout *Lights;
    QLabel *labelCurrentTime;

    void setupUi(QWidget *WindowRaceUser)
    {
        if (WindowRaceUser->objectName().isEmpty())
            WindowRaceUser->setObjectName(QStringLiteral("WindowRaceUser"));
        WindowRaceUser->resize(547, 385);
        verticalLayout_3 = new QVBoxLayout(WindowRaceUser);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(WindowRaceUser);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/track.jpeg")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Sensor1 = new QLabel(WindowRaceUser);
        Sensor1->setObjectName(QStringLiteral("Sensor1"));

        verticalLayout->addWidget(Sensor1);

        Sensor2 = new QLabel(WindowRaceUser);
        Sensor2->setObjectName(QStringLiteral("Sensor2"));

        verticalLayout->addWidget(Sensor2);

        Sensor3 = new QLabel(WindowRaceUser);
        Sensor3->setObjectName(QStringLiteral("Sensor3"));

        verticalLayout->addWidget(Sensor3);

        Sensor4 = new QLabel(WindowRaceUser);
        Sensor4->setObjectName(QStringLiteral("Sensor4"));

        verticalLayout->addWidget(Sensor4);

        Sensor5 = new QLabel(WindowRaceUser);
        Sensor5->setObjectName(QStringLiteral("Sensor5"));

        verticalLayout->addWidget(Sensor5);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelTeamName = new QLabel(WindowRaceUser);
        labelTeamName->setObjectName(QStringLiteral("labelTeamName"));

        verticalLayout_2->addWidget(labelTeamName);

        labelCarName = new QLabel(WindowRaceUser);
        labelCarName->setObjectName(QStringLiteral("labelCarName"));

        verticalLayout_2->addWidget(labelCarName);

        labelCategory = new QLabel(WindowRaceUser);
        labelCategory->setObjectName(QStringLiteral("labelCategory"));

        verticalLayout_2->addWidget(labelCategory);


        horizontalLayout_2->addLayout(verticalLayout_2);

        Lights = new QHBoxLayout();
        Lights->setObjectName(QStringLiteral("Lights"));
        labelCurrentTime = new QLabel(WindowRaceUser);
        labelCurrentTime->setObjectName(QStringLiteral("labelCurrentTime"));

        Lights->addWidget(labelCurrentTime);


        horizontalLayout_2->addLayout(Lights);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(WindowRaceUser);

        QMetaObject::connectSlotsByName(WindowRaceUser);
    } // setupUi

    void retranslateUi(QWidget *WindowRaceUser)
    {
        WindowRaceUser->setWindowTitle(QApplication::translate("WindowRaceUser", "User Window", 0));
        label->setText(QString());
        Sensor1->setText(QApplication::translate("WindowRaceUser", "Czas1", 0));
        Sensor2->setText(QApplication::translate("WindowRaceUser", "Czas2", 0));
        Sensor3->setText(QApplication::translate("WindowRaceUser", "Czas3", 0));
        Sensor4->setText(QApplication::translate("WindowRaceUser", "Czas4", 0));
        Sensor5->setText(QApplication::translate("WindowRaceUser", "Czas5", 0));
        labelTeamName->setText(QApplication::translate("WindowRaceUser", "TeamName", 0));
        labelCarName->setText(QApplication::translate("WindowRaceUser", "CarName", 0));
        labelCategory->setText(QApplication::translate("WindowRaceUser", "Category", 0));
        labelCurrentTime->setText(QApplication::translate("WindowRaceUser", "CurrentTime", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowRaceUser: public Ui_WindowRaceUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACEUSER_H
