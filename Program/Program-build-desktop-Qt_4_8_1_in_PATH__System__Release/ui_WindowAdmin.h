/********************************************************************************
** Form generated from reading UI file 'WindowAdmin.ui'
**
** Created: Wed May 28 22:38:05 2014
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
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowAdmin
{
public:
    QWidget *centralWidget;
    QPushButton *ButtonAddTeam;
    QPushButton *ButtonNewRace;
    QPushButton *ButtonStats;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WindowAdmin)
    {
        if (WindowAdmin->objectName().isEmpty())
            WindowAdmin->setObjectName(QString::fromUtf8("WindowAdmin"));
        WindowAdmin->resize(400, 300);
        centralWidget = new QWidget(WindowAdmin);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ButtonAddTeam = new QPushButton(centralWidget);
        ButtonAddTeam->setObjectName(QString::fromUtf8("ButtonAddTeam"));
        ButtonAddTeam->setGeometry(QRect(10, 60, 98, 27));
        ButtonNewRace = new QPushButton(centralWidget);
        ButtonNewRace->setObjectName(QString::fromUtf8("ButtonNewRace"));
        ButtonNewRace->setGeometry(QRect(10, 110, 98, 27));
        ButtonStats = new QPushButton(centralWidget);
        ButtonStats->setObjectName(QString::fromUtf8("ButtonStats"));
        ButtonStats->setGeometry(QRect(10, 160, 98, 27));
        WindowAdmin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WindowAdmin);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        WindowAdmin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WindowAdmin);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        WindowAdmin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WindowAdmin);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        WindowAdmin->setStatusBar(statusBar);

        retranslateUi(WindowAdmin);

        QMetaObject::connectSlotsByName(WindowAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *WindowAdmin)
    {
        WindowAdmin->setWindowTitle(QApplication::translate("WindowAdmin", "WindowAdmin", 0, QApplication::UnicodeUTF8));
        ButtonAddTeam->setText(QApplication::translate("WindowAdmin", "Add Team", 0, QApplication::UnicodeUTF8));
        ButtonNewRace->setText(QApplication::translate("WindowAdmin", "New Race", 0, QApplication::UnicodeUTF8));
        ButtonStats->setText(QApplication::translate("WindowAdmin", "Stats", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowAdmin: public Ui_WindowAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADMIN_H
