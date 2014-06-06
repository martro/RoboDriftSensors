/********************************************************************************
** Form generated from reading UI file 'windowrace.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWRACE_H
#define UI_WINDOWRACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRace
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WindowRace)
    {
        if (WindowRace->objectName().isEmpty())
            WindowRace->setObjectName(QStringLiteral("WindowRace"));
        WindowRace->resize(689, 387);
        centralWidget = new QWidget(WindowRace);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        WindowRace->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WindowRace);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 689, 25));
        WindowRace->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WindowRace);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WindowRace->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WindowRace);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WindowRace->setStatusBar(statusBar);

        retranslateUi(WindowRace);

        QMetaObject::connectSlotsByName(WindowRace);
    } // setupUi

    void retranslateUi(QMainWindow *WindowRace)
    {
        WindowRace->setWindowTitle(QApplication::translate("WindowRace", "WindowRace", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowRace: public Ui_WindowRace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACE_H
