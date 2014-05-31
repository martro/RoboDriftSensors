/********************************************************************************
** Form generated from reading UI file 'WindowAdmin.ui'
**
** Created: Sat May 31 16:58:36 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADMIN_H
#define UI_WINDOWADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
    QWidget *widget;
    QVBoxLayout *verticalLayoutButtons;
    QPushButton *ButtonNewRace;
    QPushButton *ButtonAddEditTeam;
    QPushButton *ButtonStats;
    QSpacerItem *verticalSpacer;
    QGridLayout *CurrentWindow;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WindowAdmin)
    {
        if (WindowAdmin->objectName().isEmpty())
            WindowAdmin->setObjectName(QString::fromUtf8("WindowAdmin"));
        WindowAdmin->resize(635, 388);
        actionExit = new QAction(WindowAdmin);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAuthors = new QAction(WindowAdmin);
        actionAuthors->setObjectName(QString::fromUtf8("actionAuthors"));
        actionQT = new QAction(WindowAdmin);
        actionQT->setObjectName(QString::fromUtf8("actionQT"));
        centralWidget = new QWidget(WindowAdmin);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayoutMenu = new QVBoxLayout();
        verticalLayoutMenu->setSpacing(6);
        verticalLayoutMenu->setObjectName(QString::fromUtf8("verticalLayoutMenu"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayoutMenu->addWidget(widget);

        verticalLayoutButtons = new QVBoxLayout();
        verticalLayoutButtons->setSpacing(6);
        verticalLayoutButtons->setObjectName(QString::fromUtf8("verticalLayoutButtons"));
        ButtonNewRace = new QPushButton(centralWidget);
        ButtonNewRace->setObjectName(QString::fromUtf8("ButtonNewRace"));

        verticalLayoutButtons->addWidget(ButtonNewRace);

        ButtonAddEditTeam = new QPushButton(centralWidget);
        ButtonAddEditTeam->setObjectName(QString::fromUtf8("ButtonAddEditTeam"));

        verticalLayoutButtons->addWidget(ButtonAddEditTeam);

        ButtonStats = new QPushButton(centralWidget);
        ButtonStats->setObjectName(QString::fromUtf8("ButtonStats"));

        verticalLayoutButtons->addWidget(ButtonStats);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutButtons->addItem(verticalSpacer);


        verticalLayoutMenu->addLayout(verticalLayoutButtons);

        verticalLayoutMenu->setStretch(0, 1);
        verticalLayoutMenu->setStretch(1, 3);

        horizontalLayout_2->addLayout(verticalLayoutMenu);

        CurrentWindow = new QGridLayout();
        CurrentWindow->setSpacing(6);
        CurrentWindow->setObjectName(QString::fromUtf8("CurrentWindow"));

        horizontalLayout_2->addLayout(CurrentWindow);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        WindowAdmin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WindowAdmin);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 635, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        WindowAdmin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WindowAdmin);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        WindowAdmin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WindowAdmin);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
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
        WindowAdmin->setWindowTitle(QApplication::translate("WindowAdmin", "WindowAdmin", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("WindowAdmin", "Exit", 0, QApplication::UnicodeUTF8));
        actionAuthors->setText(QApplication::translate("WindowAdmin", "Authors", 0, QApplication::UnicodeUTF8));
        actionQT->setText(QApplication::translate("WindowAdmin", "QT", 0, QApplication::UnicodeUTF8));
        ButtonNewRace->setText(QApplication::translate("WindowAdmin", "New Race", 0, QApplication::UnicodeUTF8));
        ButtonAddEditTeam->setText(QApplication::translate("WindowAdmin", "Add/Edit Team", 0, QApplication::UnicodeUTF8));
        ButtonStats->setText(QApplication::translate("WindowAdmin", "Stats", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("WindowAdmin", "File", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("WindowAdmin", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowAdmin: public Ui_WindowAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADMIN_H
