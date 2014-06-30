/********************************************************************************
** Form generated from reading UI file 'windowracemain.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWRACEMAIN_H
#define UI_WINDOWRACEMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRaceMain
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonRace;
    QPushButton *buttonRaceSettings;
    QPushButton *ButtoStats;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *CurrentWindow;
    QLabel *image;
    QGridLayout *Communication;

    void setupUi(QWidget *WindowRaceMain)
    {
        if (WindowRaceMain->objectName().isEmpty())
            WindowRaceMain->setObjectName(QStringLiteral("WindowRaceMain"));
        WindowRaceMain->resize(581, 414);
        verticalLayout_3 = new QVBoxLayout(WindowRaceMain);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonRace = new QPushButton(WindowRaceMain);
        buttonRace->setObjectName(QStringLiteral("buttonRace"));

        verticalLayout->addWidget(buttonRace);

        buttonRaceSettings = new QPushButton(WindowRaceMain);
        buttonRaceSettings->setObjectName(QStringLiteral("buttonRaceSettings"));

        verticalLayout->addWidget(buttonRaceSettings);

        ButtoStats = new QPushButton(WindowRaceMain);
        ButtoStats->setObjectName(QStringLiteral("ButtoStats"));

        verticalLayout->addWidget(ButtoStats);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        CurrentWindow = new QGridLayout();
        CurrentWindow->setObjectName(QStringLiteral("CurrentWindow"));
        image = new QLabel(WindowRaceMain);
        image->setObjectName(QStringLiteral("image"));
        image->setPixmap(QPixmap(QString::fromUtf8(":/images/images/kabanos.jpeg")));

        CurrentWindow->addWidget(image, 0, 0, 1, 1);


        verticalLayout_2->addLayout(CurrentWindow);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        Communication = new QGridLayout();
        Communication->setObjectName(QStringLiteral("Communication"));

        verticalLayout_3->addLayout(Communication);

        verticalLayout_3->setStretch(0, 5);
        verticalLayout_3->setStretch(1, 1);

        retranslateUi(WindowRaceMain);

        QMetaObject::connectSlotsByName(WindowRaceMain);
    } // setupUi

    void retranslateUi(QWidget *WindowRaceMain)
    {
        WindowRaceMain->setWindowTitle(QApplication::translate("WindowRaceMain", "Form", 0));
        buttonRace->setText(QApplication::translate("WindowRaceMain", "Race", 0));
        buttonRaceSettings->setText(QApplication::translate("WindowRaceMain", "Race Settings", 0));
        ButtoStats->setText(QApplication::translate("WindowRaceMain", "Stats", 0));
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowRaceMain: public Ui_WindowRaceMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACEMAIN_H
