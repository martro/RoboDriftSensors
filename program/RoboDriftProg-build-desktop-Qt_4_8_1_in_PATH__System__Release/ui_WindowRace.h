/********************************************************************************
** Form generated from reading UI file 'WindowRace.ui'
**
** Created: Wed May 28 13:57:58 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWRACE_H
#define UI_WINDOWRACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRace
{
public:
    QPushButton *pushButton;
    QToolButton *toolButton;

    void setupUi(QWidget *WindowRace)
    {
        if (WindowRace->objectName().isEmpty())
            WindowRace->setObjectName(QString::fromUtf8("WindowRace"));
        WindowRace->resize(584, 373);
        pushButton = new QPushButton(WindowRace);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 170, 98, 27));
        toolButton = new QToolButton(WindowRace);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(60, 170, 23, 25));

        retranslateUi(WindowRace);

        QMetaObject::connectSlotsByName(WindowRace);
    } // setupUi

    void retranslateUi(QWidget *WindowRace)
    {
        WindowRace->setWindowTitle(QApplication::translate("WindowRace", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("WindowRace", "PushButton", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("WindowRace", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowRace: public Ui_WindowRace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACE_H
