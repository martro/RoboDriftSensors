/********************************************************************************
** Form generated from reading UI file 'lamp.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAMP_H
#define UI_LAMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lamp
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *Lamp1;
    QLabel *Lamp2;
    QLabel *Lamp3;
    QLabel *Lamp4;

    void setupUi(QWidget *Lamp)
    {
        if (Lamp->objectName().isEmpty())
            Lamp->setObjectName(QStringLiteral("Lamp"));
        Lamp->resize(252, 966);
        horizontalLayout = new QHBoxLayout(Lamp);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Lamp1 = new QLabel(Lamp);
        Lamp1->setObjectName(QStringLiteral("Lamp1"));
        Lamp1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/gray.jpg")));
        Lamp1->setScaledContents(true);

        verticalLayout->addWidget(Lamp1);

        Lamp2 = new QLabel(Lamp);
        Lamp2->setObjectName(QStringLiteral("Lamp2"));
        Lamp2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/gray.jpg")));
        Lamp2->setScaledContents(true);

        verticalLayout->addWidget(Lamp2);

        Lamp3 = new QLabel(Lamp);
        Lamp3->setObjectName(QStringLiteral("Lamp3"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Lamp3->sizePolicy().hasHeightForWidth());
        Lamp3->setSizePolicy(sizePolicy);
        Lamp3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/gray.jpg")));
        Lamp3->setScaledContents(true);

        verticalLayout->addWidget(Lamp3);

        Lamp4 = new QLabel(Lamp);
        Lamp4->setObjectName(QStringLiteral("Lamp4"));
        Lamp4->setPixmap(QPixmap(QString::fromUtf8(":/images/images/gray.jpg")));
        Lamp4->setScaledContents(true);

        verticalLayout->addWidget(Lamp4);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Lamp);

        QMetaObject::connectSlotsByName(Lamp);
    } // setupUi

    void retranslateUi(QWidget *Lamp)
    {
        Lamp->setWindowTitle(QApplication::translate("Lamp", "Form", 0));
        Lamp1->setText(QString());
        Lamp2->setText(QString());
        Lamp3->setText(QString());
        Lamp4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Lamp: public Ui_Lamp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAMP_H
