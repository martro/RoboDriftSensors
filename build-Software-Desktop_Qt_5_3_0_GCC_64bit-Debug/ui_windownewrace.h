/********************************************************************************
** Form generated from reading UI file 'windownewrace.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWNEWRACE_H
#define UI_WINDOWNEWRACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowNewRace
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QWidget *WindowNewRace)
    {
        if (WindowNewRace->objectName().isEmpty())
            WindowNewRace->setObjectName(QStringLiteral("WindowNewRace"));
        WindowNewRace->resize(400, 300);
        textBrowser = new QTextBrowser(WindowNewRace);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 50, 256, 192));

        retranslateUi(WindowNewRace);

        QMetaObject::connectSlotsByName(WindowNewRace);
    } // setupUi

    void retranslateUi(QWidget *WindowNewRace)
    {
        WindowNewRace->setWindowTitle(QApplication::translate("WindowNewRace", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowNewRace: public Ui_WindowNewRace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWNEWRACE_H
