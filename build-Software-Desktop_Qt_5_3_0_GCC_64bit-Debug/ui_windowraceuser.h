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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRaceUser
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLCDNumber *CurrentPosition;
    QVBoxLayout *verticalLayout;
    QLabel *Sensor1;
    QLabel *Sensor2;
    QLabel *Sensor3;
    QLabel *Sensor4;
    QLabel *Sensor5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *labelCategory;
    QLabel *label_3;
    QLabel *labelTeamName;
    QLabel *label_4;
    QLabel *labelCarName;
    QHBoxLayout *Lights;
    QLabel *labelCurrentTime;

    void setupUi(QWidget *WindowRaceUser)
    {
        if (WindowRaceUser->objectName().isEmpty())
            WindowRaceUser->setObjectName(QStringLiteral("WindowRaceUser"));
        WindowRaceUser->resize(695, 385);
        gridLayout = new QGridLayout(WindowRaceUser);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_5 = new QLabel(WindowRaceUser);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        CurrentPosition = new QLCDNumber(WindowRaceUser);
        CurrentPosition->setObjectName(QStringLiteral("CurrentPosition"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Condensed"));
        font.setPointSize(72);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        CurrentPosition->setFont(font);
        CurrentPosition->setFrameShape(QFrame::Box);
        CurrentPosition->setDigitCount(2);

        verticalLayout_4->addWidget(CurrentPosition);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 10);

        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);

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


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        label = new QLabel(WindowRaceUser);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/track.jpeg")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(WindowRaceUser);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        labelCategory = new QLabel(WindowRaceUser);
        labelCategory->setObjectName(QStringLiteral("labelCategory"));
        QFont font1;
        font1.setPointSize(32);
        labelCategory->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelCategory);

        label_3 = new QLabel(WindowRaceUser);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        labelTeamName = new QLabel(WindowRaceUser);
        labelTeamName->setObjectName(QStringLiteral("labelTeamName"));
        labelTeamName->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, labelTeamName);

        label_4 = new QLabel(WindowRaceUser);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        labelCarName = new QLabel(WindowRaceUser);
        labelCarName->setObjectName(QStringLiteral("labelCarName"));
        labelCarName->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelCarName);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        Lights = new QHBoxLayout();
        Lights->setObjectName(QStringLiteral("Lights"));
        labelCurrentTime = new QLabel(WindowRaceUser);
        labelCurrentTime->setObjectName(QStringLiteral("labelCurrentTime"));
        QFont font2;
        font2.setPointSize(72);
        labelCurrentTime->setFont(font2);

        Lights->addWidget(labelCurrentTime);


        horizontalLayout_2->addLayout(Lights);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 3);


        retranslateUi(WindowRaceUser);

        QMetaObject::connectSlotsByName(WindowRaceUser);
    } // setupUi

    void retranslateUi(QWidget *WindowRaceUser)
    {
        WindowRaceUser->setWindowTitle(QApplication::translate("WindowRaceUser", "User Window", 0));
        label_5->setText(QApplication::translate("WindowRaceUser", "Current Position:", 0));
        Sensor1->setText(QApplication::translate("WindowRaceUser", "Czas1", 0));
        Sensor2->setText(QApplication::translate("WindowRaceUser", "Czas2", 0));
        Sensor3->setText(QApplication::translate("WindowRaceUser", "Czas3", 0));
        Sensor4->setText(QApplication::translate("WindowRaceUser", "Czas4", 0));
        Sensor5->setText(QApplication::translate("WindowRaceUser", "Czas5", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("WindowRaceUser", "Category:", 0));
        labelCategory->setText(QString());
        label_3->setText(QApplication::translate("WindowRaceUser", "Team name:", 0));
        labelTeamName->setText(QString());
        label_4->setText(QApplication::translate("WindowRaceUser", "Car name:", 0));
        labelCarName->setText(QString());
        labelCurrentTime->setText(QApplication::translate("WindowRaceUser", "CurrentTime", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowRaceUser: public Ui_WindowRaceUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACEUSER_H
