/********************************************************************************
** Form generated from reading UI file 'WindowUserStats.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWUSERSTATS_H
#define UI_WINDOWUSERSTATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowUserStats
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *StatsMO;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QTextBrowser *StatsRD;
    QTextBrowser *StatsRC;

    void setupUi(QWidget *WindowUserStats)
    {
        if (WindowUserStats->objectName().isEmpty())
            WindowUserStats->setObjectName(QStringLiteral("WindowUserStats"));
        WindowUserStats->resize(400, 300);
        gridLayout = new QGridLayout(WindowUserStats);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        StatsMO = new QTextBrowser(WindowUserStats);
        StatsMO->setObjectName(QStringLiteral("StatsMO"));

        gridLayout->addWidget(StatsMO, 1, 2, 1, 1);

        label = new QLabel(WindowUserStats);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(WindowUserStats);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_2 = new QLabel(WindowUserStats);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        StatsRD = new QTextBrowser(WindowUserStats);
        StatsRD->setObjectName(QStringLiteral("StatsRD"));

        gridLayout->addWidget(StatsRD, 1, 0, 1, 1);

        StatsRC = new QTextBrowser(WindowUserStats);
        StatsRC->setObjectName(QStringLiteral("StatsRC"));

        gridLayout->addWidget(StatsRC, 1, 1, 1, 1);


        retranslateUi(WindowUserStats);

        QMetaObject::connectSlotsByName(WindowUserStats);
    } // setupUi

    void retranslateUi(QWidget *WindowUserStats)
    {
        WindowUserStats->setWindowTitle(QApplication::translate("WindowUserStats", "Form", 0));
        label->setText(QApplication::translate("WindowUserStats", "RoboDrift", 0));
        label_3->setText(QApplication::translate("WindowUserStats", "Mobile Open", 0));
        label_2->setText(QApplication::translate("WindowUserStats", "RC", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowUserStats: public Ui_WindowUserStats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWUSERSTATS_H
