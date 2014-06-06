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
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonRace;
    QPushButton *buttonRaceSettings;
    QPushButton *buttonConnection;
    QSpacerItem *verticalSpacer;
    QGridLayout *CurrentWindow;
    QLabel *image;

    void setupUi(QWidget *WindowRaceMain)
    {
        if (WindowRaceMain->objectName().isEmpty())
            WindowRaceMain->setObjectName(QStringLiteral("WindowRaceMain"));
        WindowRaceMain->resize(400, 300);
        horizontalLayout = new QHBoxLayout(WindowRaceMain);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonRace = new QPushButton(WindowRaceMain);
        buttonRace->setObjectName(QStringLiteral("buttonRace"));

        verticalLayout->addWidget(buttonRace);

        buttonRaceSettings = new QPushButton(WindowRaceMain);
        buttonRaceSettings->setObjectName(QStringLiteral("buttonRaceSettings"));

        verticalLayout->addWidget(buttonRaceSettings);

        buttonConnection = new QPushButton(WindowRaceMain);
        buttonConnection->setObjectName(QStringLiteral("buttonConnection"));

        verticalLayout->addWidget(buttonConnection);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        CurrentWindow = new QGridLayout();
        CurrentWindow->setObjectName(QStringLiteral("CurrentWindow"));
        image = new QLabel(WindowRaceMain);
        image->setObjectName(QStringLiteral("image"));
        image->setPixmap(QPixmap(QString::fromUtf8(":/images/images/kabanos.jpeg")));

        CurrentWindow->addWidget(image, 0, 0, 1, 1);


        horizontalLayout->addLayout(CurrentWindow);


        retranslateUi(WindowRaceMain);

        QMetaObject::connectSlotsByName(WindowRaceMain);
    } // setupUi

    void retranslateUi(QWidget *WindowRaceMain)
    {
        WindowRaceMain->setWindowTitle(QApplication::translate("WindowRaceMain", "Form", 0));
        buttonRace->setText(QApplication::translate("WindowRaceMain", "Race", 0));
        buttonRaceSettings->setText(QApplication::translate("WindowRaceMain", "Race Settings", 0));
        buttonConnection->setText(QApplication::translate("WindowRaceMain", "Connection", 0));
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowRaceMain: public Ui_WindowRaceMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACEMAIN_H
