/********************************************************************************
** Form generated from reading UI file 'windowaddleader.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADDLEADER_H
#define UI_WINDOWADDLEADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowAddLeader
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLineEdit *linePhone;
    QLineEdit *lineEmail;
    QLineEdit *lineOrganization;
    QLineEdit *lineCity;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineName;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *lineSurname;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WindowAddLeader)
    {
        if (WindowAddLeader->objectName().isEmpty())
            WindowAddLeader->setObjectName(QStringLiteral("WindowAddLeader"));
        WindowAddLeader->resize(347, 358);
        horizontalLayout = new QHBoxLayout(WindowAddLeader);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        linePhone = new QLineEdit(WindowAddLeader);
        linePhone->setObjectName(QStringLiteral("linePhone"));

        gridLayout->addWidget(linePhone, 2, 1, 1, 1);

        lineEmail = new QLineEdit(WindowAddLeader);
        lineEmail->setObjectName(QStringLiteral("lineEmail"));

        gridLayout->addWidget(lineEmail, 3, 1, 1, 1);

        lineOrganization = new QLineEdit(WindowAddLeader);
        lineOrganization->setObjectName(QStringLiteral("lineOrganization"));

        gridLayout->addWidget(lineOrganization, 4, 1, 1, 1);

        lineCity = new QLineEdit(WindowAddLeader);
        lineCity->setObjectName(QStringLiteral("lineCity"));

        gridLayout->addWidget(lineCity, 5, 1, 1, 1);

        label_2 = new QLabel(WindowAddLeader);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(WindowAddLeader);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(WindowAddLeader);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(WindowAddLeader);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineName = new QLineEdit(WindowAddLeader);
        lineName->setObjectName(QStringLiteral("lineName"));

        gridLayout->addWidget(lineName, 0, 1, 1, 1);

        label_4 = new QLabel(WindowAddLeader);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(WindowAddLeader);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineSurname = new QLineEdit(WindowAddLeader);
        lineSurname->setObjectName(QStringLiteral("lineSurname"));

        gridLayout->addWidget(lineSurname, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 5);

        horizontalLayout->addLayout(gridLayout);


        retranslateUi(WindowAddLeader);

        QMetaObject::connectSlotsByName(WindowAddLeader);
    } // setupUi

    void retranslateUi(QWidget *WindowAddLeader)
    {
        WindowAddLeader->setWindowTitle(QApplication::translate("WindowAddLeader", "Form", 0));
        label_2->setText(QApplication::translate("WindowAddLeader", "Surname", 0));
        label_5->setText(QApplication::translate("WindowAddLeader", "Organization", 0));
        label_3->setText(QApplication::translate("WindowAddLeader", "Phone", 0));
        label->setText(QApplication::translate("WindowAddLeader", "Name", 0));
        label_4->setText(QApplication::translate("WindowAddLeader", "Email", 0));
        label_6->setText(QApplication::translate("WindowAddLeader", "City", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowAddLeader: public Ui_WindowAddLeader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADDLEADER_H
