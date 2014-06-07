/********************************************************************************
** Form generated from reading UI file 'WindowAdmin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADMIN_H
#define UI_WINDOWADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowAdmin
{
public:
    QAction *actionExit;
    QAction *actionAuthors;
    QAction *actionQT;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayoutMenu;
    QVBoxLayout *verticalLayoutButtons;
    QLabel *LogoRD;
    QPushButton *ButtonNewRace;
    QPushButton *ButtonAddEditTeam;
    QPushButton *ButtonStats;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser;
    QGridLayout *CurrentWindow;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WindowAdmin)
    {
        if (WindowAdmin->objectName().isEmpty())
            WindowAdmin->setObjectName(QStringLiteral("WindowAdmin"));
        WindowAdmin->resize(635, 388);
        actionExit = new QAction(WindowAdmin);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAuthors = new QAction(WindowAdmin);
        actionAuthors->setObjectName(QStringLiteral("actionAuthors"));
        actionQT = new QAction(WindowAdmin);
        actionQT->setObjectName(QStringLiteral("actionQT"));
        centralWidget = new QWidget(WindowAdmin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayoutMenu = new QVBoxLayout();
        verticalLayoutMenu->setSpacing(6);
        verticalLayoutMenu->setObjectName(QStringLiteral("verticalLayoutMenu"));
        verticalLayoutButtons = new QVBoxLayout();
        verticalLayoutButtons->setSpacing(6);
        verticalLayoutButtons->setObjectName(QStringLiteral("verticalLayoutButtons"));
        LogoRD = new QLabel(centralWidget);
        LogoRD->setObjectName(QStringLiteral("LogoRD"));
        LogoRD->setPixmap(QPixmap(QString::fromUtf8(":/images/images/RD_logo-e1392478122173.png")));
        LogoRD->setScaledContents(true);

        verticalLayoutButtons->addWidget(LogoRD);

        ButtonNewRace = new QPushButton(centralWidget);
        ButtonNewRace->setObjectName(QStringLiteral("ButtonNewRace"));

        verticalLayoutButtons->addWidget(ButtonNewRace);

        ButtonAddEditTeam = new QPushButton(centralWidget);
        ButtonAddEditTeam->setObjectName(QStringLiteral("ButtonAddEditTeam"));

        verticalLayoutButtons->addWidget(ButtonAddEditTeam);

        ButtonStats = new QPushButton(centralWidget);
        ButtonStats->setObjectName(QStringLiteral("ButtonStats"));

        verticalLayoutButtons->addWidget(ButtonStats);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutButtons->addItem(verticalSpacer);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayoutButtons->addWidget(textBrowser);


        verticalLayoutMenu->addLayout(verticalLayoutButtons);


        horizontalLayout_2->addLayout(verticalLayoutMenu);

        CurrentWindow = new QGridLayout();
        CurrentWindow->setSpacing(6);
        CurrentWindow->setObjectName(QStringLiteral("CurrentWindow"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/mainLogo.jpg")));
        label->setScaledContents(true);

        CurrentWindow->addWidget(label, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(CurrentWindow);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);
        WindowAdmin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WindowAdmin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 635, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        WindowAdmin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WindowAdmin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WindowAdmin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WindowAdmin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WindowAdmin->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionAuthors);
        menuAbout->addAction(actionQT);

        retranslateUi(WindowAdmin);

        QMetaObject::connectSlotsByName(WindowAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *WindowAdmin)
    {
        WindowAdmin->setWindowTitle(QApplication::translate("WindowAdmin", "WindowAdmin", 0));
        actionExit->setText(QApplication::translate("WindowAdmin", "Exit", 0));
        actionAuthors->setText(QApplication::translate("WindowAdmin", "Authors", 0));
        actionQT->setText(QApplication::translate("WindowAdmin", "QT", 0));
        LogoRD->setText(QString());
        ButtonNewRace->setText(QApplication::translate("WindowAdmin", "New Race", 0));
        ButtonAddEditTeam->setText(QApplication::translate("WindowAdmin", "Add/Edit Team", 0));
        ButtonStats->setText(QApplication::translate("WindowAdmin", "Stats", 0));
        label->setText(QString());
        menuFile->setTitle(QApplication::translate("WindowAdmin", "File", 0));
        menuAbout->setTitle(QApplication::translate("WindowAdmin", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowAdmin: public Ui_WindowAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADMIN_H
