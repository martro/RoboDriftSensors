/********************************************************************************
** Form generated from reading UI file 'WindowAddMembers.ui'
**
** Created: Fri Jun 6 13:18:04 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADDMEMBERS_H
#define UI_WINDOWADDMEMBERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

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
            WindowAddMembers->setObjectName(QString::fromUtf8("WindowAddMembers"));
        WindowAddMembers->resize(431, 362);
        horizontalLayout = new QHBoxLayout(WindowAddMembers);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WindowAddMembers);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        comboBox = new QComboBox(WindowAddMembers);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(WindowAddMembers);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineName = new QLineEdit(WindowAddMembers);
        lineName->setObjectName(QString::fromUtf8("lineName"));

        gridLayout->addWidget(lineName, 1, 1, 1, 1);

        lineSurname = new QLineEdit(WindowAddMembers);
        lineSurname->setObjectName(QString::fromUtf8("lineSurname"));

        gridLayout->addWidget(lineSurname, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ButtonAdd = new QPushButton(WindowAddMembers);
        ButtonAdd->setObjectName(QString::fromUtf8("ButtonAdd"));

        horizontalLayout_3->addWidget(ButtonAdd);

        ButtonDelete = new QPushButton(WindowAddMembers);
        ButtonDelete->setObjectName(QString::fromUtf8("ButtonDelete"));

        horizontalLayout_3->addWidget(ButtonDelete);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(WindowAddMembers);

        QMetaObject::connectSlotsByName(WindowAddMembers);
    } // setupUi

    void retranslateUi(QWidget *WindowAddMembers)
    {
        WindowAddMembers->setWindowTitle(QApplication::translate("WindowAddMembers", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WindowAddMembers", "Surname", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WindowAddMembers", "Name", 0, QApplication::UnicodeUTF8));
        ButtonAdd->setText(QApplication::translate("WindowAddMembers", "Add", 0, QApplication::UnicodeUTF8));
        ButtonDelete->setText(QApplication::translate("WindowAddMembers", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowAddMembers: public Ui_WindowAddMembers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADDMEMBERS_H
