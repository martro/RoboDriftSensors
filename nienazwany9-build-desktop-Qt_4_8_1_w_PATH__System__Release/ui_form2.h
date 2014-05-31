/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created: Sat May 31 16:20:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName(QString::fromUtf8("Form2"));
        Form2->resize(400, 300);
        horizontalLayout = new QHBoxLayout(Form2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(Form2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QApplication::translate("Form2", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
