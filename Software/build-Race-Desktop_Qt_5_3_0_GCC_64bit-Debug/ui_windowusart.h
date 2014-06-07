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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowUSART
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
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
        WindowUSART->resize(429, 138);
        centralWidget = new QWidget(WindowUSART);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        data = new QLabel(centralWidget);
        data->setObjectName(QStringLiteral("data"));

        horizontalLayout->addWidget(data);


        verticalLayout->addLayout(horizontalLayout);

        WindowUSART->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WindowUSART);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 429, 25));
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
        radioButton->setText(QApplication::translate("WindowUSART", "Connection ON/OFF", 0));
        pushButton->setText(QApplication::translate("WindowUSART", "LED OFF", 0));
        pushButton_2->setText(QApplication::translate("WindowUSART", "LED ON", 0));
        data->setText(QApplication::translate("WindowUSART", "Data", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowUSART: public Ui_WindowUSART {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWUSART_H
