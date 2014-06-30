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
    QTextBrowser *TimeRD;
    QTextBrowser *StatsRD;
    QTextBrowser *StatsMO;
    QTextBrowser *StatsRC;
    QTextBrowser *TimeRC;
    QTextBrowser *TimeMO;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *WindowUserStats)
    {
        if (WindowUserStats->objectName().isEmpty())
            WindowUserStats->setObjectName(QStringLiteral("WindowUserStats"));
        WindowUserStats->resize(400, 300);
        WindowUserStats->setAutoFillBackground(true);
        gridLayout = new QGridLayout(WindowUserStats);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        TimeRD = new QTextBrowser(WindowUserStats);
        TimeRD->setObjectName(QStringLiteral("TimeRD"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        TimeRD->setFont(font);

        gridLayout->addWidget(TimeRD, 1, 1, 1, 1);

        StatsRD = new QTextBrowser(WindowUserStats);
        StatsRD->setObjectName(QStringLiteral("StatsRD"));
        StatsRD->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        StatsRD->setFont(font1);
        StatsRD->setAutoFillBackground(true);
        StatsRD->setLineWidth(1);
        StatsRD->setMidLineWidth(0);
        StatsRD->setLineWrapColumnOrWidth(0);

        gridLayout->addWidget(StatsRD, 1, 0, 1, 1);

        StatsMO = new QTextBrowser(WindowUserStats);
        StatsMO->setObjectName(QStringLiteral("StatsMO"));
        StatsMO->setFont(font);

        gridLayout->addWidget(StatsMO, 1, 4, 1, 1);

        StatsRC = new QTextBrowser(WindowUserStats);
        StatsRC->setObjectName(QStringLiteral("StatsRC"));
        StatsRC->setFont(font);

        gridLayout->addWidget(StatsRC, 1, 2, 1, 1);

        TimeRC = new QTextBrowser(WindowUserStats);
        TimeRC->setObjectName(QStringLiteral("TimeRC"));
        TimeRC->setFont(font);

        gridLayout->addWidget(TimeRC, 1, 3, 1, 1);

        TimeMO = new QTextBrowser(WindowUserStats);
        TimeMO->setObjectName(QStringLiteral("TimeMO"));
        TimeMO->setFont(font);

        gridLayout->addWidget(TimeMO, 1, 5, 1, 1);

        label_3 = new QLabel(WindowUserStats);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 4, 1, 2);

        label = new QLabel(WindowUserStats);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font2);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(WindowUserStats);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 2);


        retranslateUi(WindowUserStats);

        QMetaObject::connectSlotsByName(WindowUserStats);
    } // setupUi

    void retranslateUi(QWidget *WindowUserStats)
    {
        WindowUserStats->setWindowTitle(QApplication::translate("WindowUserStats", "Form", 0));
        label_3->setText(QApplication::translate("WindowUserStats", "Mobile Open", 0));
        label->setText(QApplication::translate("WindowUserStats", "RoboDrift", 0));
        label_2->setText(QApplication::translate("WindowUserStats", "RC", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowUserStats: public Ui_WindowUserStats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWUSERSTATS_H
