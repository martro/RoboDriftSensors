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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
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
    QLabel *label;
    QLabel *time;
    QLCDNumber *lcdNumber;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Start;
    QPushButton *Stop;
    QPushButton *pushButton;
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
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 90, 101, 17));
        time = new QLabel(centralWidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(160, 90, 67, 17));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(250, 70, 101, 131));
        lcdNumber->setDigitCount(1);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 0, 269, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Start = new QPushButton(horizontalLayoutWidget);
        Start->setObjectName(QStringLiteral("Start"));

        horizontalLayout->addWidget(Start);

        Stop = new QPushButton(horizontalLayoutWidget);
        Stop->setObjectName(QStringLiteral("Stop"));

        horizontalLayout->addWidget(Stop);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

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
        label->setText(QApplication::translate("WindowTimerTest", "Time elapsed:", 0));
        time->setText(QString());
        Start->setText(QApplication::translate("WindowTimerTest", "Start", 0));
        Stop->setText(QApplication::translate("WindowTimerTest", "Stop", 0));
        pushButton->setText(QApplication::translate("WindowTimerTest", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowTimerTest: public Ui_WindowTimerTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWTIMERTEST_H
