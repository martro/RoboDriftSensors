/********************************************************************************
** Form generated from reading UI file 'WindowAddMembers.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADDMEMBERS_H
#define UI_WINDOWADDMEMBERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowAddMembers
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineName;
    QLineEdit *lineSurname;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ButtonAdd;
    QPushButton *ButtonDelete;

    void setupUi(QWidget *WindowAddMembers)
    {
        if (WindowAddMembers->objectName().isEmpty())
            WindowAddMembers->setObjectName(QStringLiteral("WindowAddMembers"));
        WindowAddMembers->resize(431, 362);
        horizontalLayout = new QHBoxLayout(WindowAddMembers);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(WindowAddMembers);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        comboBox = new QComboBox(WindowAddMembers);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(WindowAddMembers);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineName = new QLineEdit(WindowAddMembers);
        lineName->setObjectName(QStringLiteral("lineName"));

        gridLayout->addWidget(lineName, 1, 1, 1, 1);

        lineSurname = new QLineEdit(WindowAddMembers);
        lineSurname->setObjectName(QStringLiteral("lineSurname"));

        gridLayout->addWidget(lineSurname, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ButtonAdd = new QPushButton(WindowAddMembers);
        ButtonAdd->setObjectName(QStringLiteral("ButtonAdd"));

        horizontalLayout_3->addWidget(ButtonAdd);

        ButtonDelete = new QPushButton(WindowAddMembers);
        ButtonDelete->setObjectName(QStringLiteral("ButtonDelete"));

        horizontalLayout_3->addWidget(ButtonDelete);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(WindowAddMembers);

        QMetaObject::connectSlotsByName(WindowAddMembers);
    } // setupUi

    void retranslateUi(QWidget *WindowAddMembers)
    {
        WindowAddMembers->setWindowTitle(QApplication::translate("WindowAddMembers", "Form", 0));
        label->setText(QApplication::translate("WindowAddMembers", "Surname", 0));
        label_2->setText(QApplication::translate("WindowAddMembers", "Name", 0));
        ButtonAdd->setText(QApplication::translate("WindowAddMembers", "Add", 0));
        ButtonDelete->setText(QApplication::translate("WindowAddMembers", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowAddMembers: public Ui_WindowAddMembers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADDMEMBERS_H
