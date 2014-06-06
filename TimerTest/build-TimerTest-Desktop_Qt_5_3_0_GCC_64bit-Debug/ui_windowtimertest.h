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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowTimerTest
{
public:
    QWidget *centralWidget;
    QPushButton *Start;
    QPushButton *Stop;
    QLabel *label;
    QLabel *time;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WindowTimerTest)
    {
        if (WindowTimerTest->objectName().isEmpty())
            WindowTimerTest->setObjectName(QStringLiteral("WindowTimerTest"));
        WindowTimerTest->resize(400, 300);
        centralWidget = new QWidget(WindowTimerTest);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Start = new QPushButton(centralWidget);
        Start->setObjectName(QStringLiteral("Start"));
        Start->setGeometry(QRect(40, 20, 99, 27));
        Stop = new QPushButton(centralWidget);
        Stop->setObjectName(QStringLiteral("Stop"));
        Stop->setGeometry(QRect(170, 20, 99, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 90, 101, 17));
        time = new QLabel(centralWidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(160, 90, 67, 17));
        WindowTimerTest->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WindowTimerTest);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        WindowTimerTest->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WindowTimerTest);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WindowTimerTest->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WindowTimerTest);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WindowTimerTest->setStatusBar(statusBar);

        retranslateUi(WindowTimerTest);

        QMetaObject::connectSlotsByName(WindowTimerTest);
    } // setupUi

    void retranslateUi(QMainWindow *WindowTimerTest)
    {
        WindowTimerTest->setWindowTitle(QApplication::translate("WindowTimerTest", "WindowTimerTest", 0));
        Start->setText(QApplication::translate("WindowTimerTest", "Start", 0));
        Stop->setText(QApplication::translate("WindowTimerTest", "Stop", 0));
        label->setText(QApplication::translate("WindowTimerTest", "Time elapsed:", 0));
        time->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowTimerTest: public Ui_WindowTimerTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWTIMERTEST_H
