/********************************************************************************
** Form generated from reading UI file 'windownewrace.ui'
**
** Created: Mon Jun 2 12:44:36 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWNEWRACE_H
#define UI_WINDOWNEWRACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowNewRace
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QWidget *WindowNewRace)
    {
        if (WindowNewRace->objectName().isEmpty())
            WindowNewRace->setObjectName(QString::fromUtf8("WindowNewRace"));
        WindowNewRace->resize(400, 300);
        textBrowser = new QTextBrowser(WindowNewRace);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 50, 256, 192));

        retranslateUi(WindowNewRace);

        QMetaObject::connectSlotsByName(WindowNewRace);
    } // setupUi

    void retranslateUi(QWidget *WindowNewRace)
    {
        WindowNewRace->setWindowTitle(QApplication::translate("WindowNewRace", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowNewRace: public Ui_WindowNewRace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWNEWRACE_H
