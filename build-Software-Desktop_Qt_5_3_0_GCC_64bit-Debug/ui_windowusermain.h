/********************************************************************************
** Form generated from reading UI file 'windowusermain.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWUSERMAIN_H
#define UI_WINDOWUSERMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowUserMain
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *logo;
    QGridLayout *CentralWindow;
    QLabel *label;

    void setupUi(QWidget *WindowUserMain)
    {
        if (WindowUserMain->objectName().isEmpty())
            WindowUserMain->setObjectName(QStringLiteral("WindowUserMain"));
        WindowUserMain->resize(655, 385);
        verticalLayout = new QVBoxLayout(WindowUserMain);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        logo = new QLabel(WindowUserMain);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/RD_logo-e1392478122173.png")));
        logo->setScaledContents(true);

        verticalLayout->addWidget(logo);

        CentralWindow = new QGridLayout();
        CentralWindow->setObjectName(QStringLiteral("CentralWindow"));
        label = new QLabel(WindowUserMain);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/kabanos.jpeg")));
        label->setScaledContents(true);

        CentralWindow->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(CentralWindow);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        retranslateUi(WindowUserMain);

        QMetaObject::connectSlotsByName(WindowUserMain);
    } // setupUi

    void retranslateUi(QWidget *WindowUserMain)
    {
        WindowUserMain->setWindowTitle(QApplication::translate("WindowUserMain", "User Main WIndow", 0));
        logo->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowUserMain: public Ui_WindowUserMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWUSERMAIN_H
