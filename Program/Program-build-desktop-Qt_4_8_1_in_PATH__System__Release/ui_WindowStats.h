/********************************************************************************
** Form generated from reading UI file 'WindowStats.ui'
**
** Created: Fri May 30 11:28:09 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSTATS_H
#define UI_WINDOWSTATS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_WindowStats
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QLabel *label;

    void setupUi(QFrame *WindowStats)
    {
        if (WindowStats->objectName().isEmpty())
            WindowStats->setObjectName(QString::fromUtf8("WindowStats"));
        WindowStats->resize(400, 300);
        WindowStats->setWindowOpacity(1);
        WindowStats->setFrameShape(QFrame::StyledPanel);
        WindowStats->setFrameShadow(QFrame::Raised);
        WindowStats->setMidLineWidth(0);
        textBrowser = new QTextBrowser(WindowStats);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 30, 111, 251));
        textBrowser_2 = new QTextBrowser(WindowStats);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(140, 30, 111, 251));
        textBrowser_3 = new QTextBrowser(WindowStats);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(260, 30, 111, 251));
        label = new QLabel(WindowStats);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 0, 81, 31));

        retranslateUi(WindowStats);

        QMetaObject::connectSlotsByName(WindowStats);
    } // setupUi

    void retranslateUi(QFrame *WindowStats)
    {
        WindowStats->setWindowTitle(QApplication::translate("WindowStats", "WindowStats", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WindowStats", "Stats", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowStats: public Ui_WindowStats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSTATS_H
