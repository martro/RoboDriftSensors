/********************************************************************************
** Form generated from reading UI file 'WindowRace.ui'
**
** Created: Sat May 31 00:01:22 2014
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
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_WindowRace
{
public:
    QLCDNumber *lcdNumber;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QGroupBox *groupBox;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;

    void setupUi(QFrame *WindowRace)
    {
        if (WindowRace->objectName().isEmpty())
            WindowRace->setObjectName(QString::fromUtf8("WindowRace"));
        WindowRace->resize(400, 300);
        WindowRace->setFrameShape(QFrame::StyledPanel);
        WindowRace->setFrameShadow(QFrame::Raised);
        lcdNumber = new QLCDNumber(WindowRace);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(110, 30, 64, 23));
        textBrowser = new QTextBrowser(WindowRace);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(230, 20, 151, 231));
        textBrowser_2 = new QTextBrowser(WindowRace);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(20, 20, 81, 41));
        groupBox = new QGroupBox(WindowRace);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 100, 120, 151));
        lcdNumber_2 = new QLCDNumber(groupBox);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(10, 30, 64, 23));
        lcdNumber_3 = new QLCDNumber(groupBox);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(10, 60, 64, 23));
        lcdNumber_4 = new QLCDNumber(groupBox);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(10, 100, 64, 23));

        retranslateUi(WindowRace);

        QMetaObject::connectSlotsByName(WindowRace);
    } // setupUi

    void retranslateUi(QFrame *WindowRace)
    {
        WindowRace->setWindowTitle(QApplication::translate("WindowRace", "WindowRace", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("WindowRace", "TimeLaps", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowRace: public Ui_WindowRace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACE_H
