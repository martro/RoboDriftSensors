/********************************************************************************
** Form generated from reading UI file 'windowadmin.ui'
**
** Created: Wed May 28 14:35:54 2014
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
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowAdmin
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
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
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 98, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 60, 98, 27));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(200, 20, 171, 131));
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
        pushButton->setText(QApplication::translate("WindowAdmin", "New race", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("WindowAdmin", "Add team", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowAdmin: public Ui_WindowAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADMIN_H
