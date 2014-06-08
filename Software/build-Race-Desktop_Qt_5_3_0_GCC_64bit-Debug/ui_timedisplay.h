/********************************************************************************
** Form generated from reading UI file 'timedisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEDISPLAY_H
#define UI_TIMEDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeDisplay
{
public:
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLabel *label;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLabel *label_2;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_7;

    void setupUi(QWidget *TimeDisplay)
    {
        if (TimeDisplay->objectName().isEmpty())
            TimeDisplay->setObjectName(QStringLiteral("TimeDisplay"));
        TimeDisplay->resize(453, 64);
        horizontalLayout = new QHBoxLayout(TimeDisplay);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lcdNumber = new QLCDNumber(TimeDisplay);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setFrameShadow(QFrame::Plain);
        lcdNumber->setLineWidth(0);
        lcdNumber->setDigitCount(1);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("intValue", QVariant(-1));

        horizontalLayout->addWidget(lcdNumber);

        lcdNumber_2 = new QLCDNumber(TimeDisplay);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setFrameShadow(QFrame::Plain);
        lcdNumber_2->setLineWidth(0);
        lcdNumber_2->setDigitCount(1);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber_2);

        label = new QLabel(TimeDisplay);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label);

        lcdNumber_3 = new QLCDNumber(TimeDisplay);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setFrameShadow(QFrame::Plain);
        lcdNumber_3->setLineWidth(0);
        lcdNumber_3->setDigitCount(1);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber_3);

        lcdNumber_4 = new QLCDNumber(TimeDisplay);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setFrameShadow(QFrame::Plain);
        lcdNumber_4->setLineWidth(0);
        lcdNumber_4->setDigitCount(1);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber_4);

        label_2 = new QLabel(TimeDisplay);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label_2);

        lcdNumber_5 = new QLCDNumber(TimeDisplay);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setFrameShadow(QFrame::Plain);
        lcdNumber_5->setLineWidth(0);
        lcdNumber_5->setSmallDecimalPoint(true);
        lcdNumber_5->setDigitCount(1);
        lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_5->setProperty("value", QVariant(-1));

        horizontalLayout->addWidget(lcdNumber_5);

        lcdNumber_6 = new QLCDNumber(TimeDisplay);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        lcdNumber_6->setFrameShadow(QFrame::Plain);
        lcdNumber_6->setLineWidth(0);
        lcdNumber_6->setDigitCount(1);
        lcdNumber_6->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber_6);

        lcdNumber_7 = new QLCDNumber(TimeDisplay);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        lcdNumber_7->setFrameShadow(QFrame::Plain);
        lcdNumber_7->setLineWidth(0);
        lcdNumber_7->setDigitCount(1);
        lcdNumber_7->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber_7);


        retranslateUi(TimeDisplay);

        QMetaObject::connectSlotsByName(TimeDisplay);
    } // setupUi

    void retranslateUi(QWidget *TimeDisplay)
    {
        TimeDisplay->setWindowTitle(QApplication::translate("TimeDisplay", "Form", 0));
        label->setText(QApplication::translate("TimeDisplay", ".", 0));
        label_2->setText(QApplication::translate("TimeDisplay", ".", 0));
    } // retranslateUi

};

namespace Ui {
    class TimeDisplay: public Ui_TimeDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEDISPLAY_H
