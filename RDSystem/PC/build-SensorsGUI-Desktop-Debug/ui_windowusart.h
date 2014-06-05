/********************************************************************************
** Form generated from reading UI file 'windowusart.ui'
**
** Created: Thu Jun 5 12:45:04 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWUSART_H
#define UI_WINDOWUSART_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowUSART
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WindowUSART)
    {
        if (WindowUSART->objectName().isEmpty())
            WindowUSART->setObjectName(QString::fromUtf8("WindowUSART"));
        WindowUSART->resize(400, 300);
        centralWidget = new QWidget(WindowUSART);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 40, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 40, 99, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 80, 67, 17));
        WindowUSART->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WindowUSART);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        WindowUSART->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WindowUSART);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        WindowUSART->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WindowUSART);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        WindowUSART->setStatusBar(statusBar);

        retranslateUi(WindowUSART);

        QMetaObject::connectSlotsByName(WindowUSART);
    } // setupUi

    void retranslateUi(QMainWindow *WindowUSART)
    {
        WindowUSART->setWindowTitle(QApplication::translate("WindowUSART", "WindowUSART", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("WindowUSART", "a", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("WindowUSART", "b", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WindowUSART", "Received", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowUSART: public Ui_WindowUSART {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWUSART_H
