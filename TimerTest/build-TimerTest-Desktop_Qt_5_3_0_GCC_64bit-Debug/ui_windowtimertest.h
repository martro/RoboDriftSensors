/********************************************************************************
** Form generated from reading UI file 'windowtimertest.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWTIMERTEST_H
#define UI_WINDOWTIMERTEST_H

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

class Ui_WindowTimerTest
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WindowTimerTest)
    {
        if (WindowTimerTest->objectName().isEmpty())
            WindowTimerTest->setObjectName(QStringLiteral("WindowTimerTest"));
        WindowTimerTest->resize(400, 300);
        menuBar = new QMenuBar(WindowTimerTest);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        WindowTimerTest->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WindowTimerTest);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WindowTimerTest->addToolBar(mainToolBar);
        centralWidget = new QWidget(WindowTimerTest);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        WindowTimerTest->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WindowTimerTest);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WindowTimerTest->setStatusBar(statusBar);

        retranslateUi(WindowTimerTest);

        QMetaObject::connectSlotsByName(WindowTimerTest);
    } // setupUi

    void retranslateUi(QMainWindow *WindowTimerTest)
    {
        WindowTimerTest->setWindowTitle(QApplication::translate("WindowTimerTest", "WindowTimerTest", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowTimerTest: public Ui_WindowTimerTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWTIMERTEST_H
