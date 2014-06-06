/********************************************************************************
** Form generated from reading UI file 'windowusart.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWUSART_H
#define UI_WINDOWUSART_H

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

class Ui_WindowUSART
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *data;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WindowUSART)
    {
        if (WindowUSART->objectName().isEmpty())
            WindowUSART->setObjectName(QStringLiteral("WindowUSART"));
        WindowUSART->resize(400, 300);
        centralWidget = new QWidget(WindowUSART);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 40, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 40, 99, 27));
        data = new QLabel(centralWidget);
        data->setObjectName(QStringLiteral("data"));
        data->setGeometry(QRect(30, 120, 231, 17));
        WindowUSART->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WindowUSART);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        WindowUSART->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WindowUSART);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WindowUSART->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WindowUSART);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WindowUSART->setStatusBar(statusBar);

        retranslateUi(WindowUSART);

        QMetaObject::connectSlotsByName(WindowUSART);
    } // setupUi

    void retranslateUi(QMainWindow *WindowUSART)
    {
        WindowUSART->setWindowTitle(QApplication::translate("WindowUSART", "WindowUSART", 0));
        pushButton->setText(QApplication::translate("WindowUSART", "a", 0));
        pushButton_2->setText(QApplication::translate("WindowUSART", "b", 0));
        data->setText(QApplication::translate("WindowUSART", "Data", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowUSART: public Ui_WindowUSART {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWUSART_H
