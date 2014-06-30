/********************************************************************************
** Form generated from reading UI file 'WindowStats.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSTATS_H
#define UI_WINDOWSTATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowStats
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *ButtonGeneratePDF;
    QPushButton *ButtonShowStats;

    void setupUi(QWidget *WindowStats)
    {
        if (WindowStats->objectName().isEmpty())
            WindowStats->setObjectName(QStringLiteral("WindowStats"));
        WindowStats->resize(400, 300);
        verticalLayout = new QVBoxLayout(WindowStats);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ButtonGeneratePDF = new QPushButton(WindowStats);
        ButtonGeneratePDF->setObjectName(QStringLiteral("ButtonGeneratePDF"));

        verticalLayout->addWidget(ButtonGeneratePDF);

        ButtonShowStats = new QPushButton(WindowStats);
        ButtonShowStats->setObjectName(QStringLiteral("ButtonShowStats"));

        verticalLayout->addWidget(ButtonShowStats);


        retranslateUi(WindowStats);

        QMetaObject::connectSlotsByName(WindowStats);
    } // setupUi

    void retranslateUi(QWidget *WindowStats)
    {
        WindowStats->setWindowTitle(QApplication::translate("WindowStats", "Form", 0));
        ButtonGeneratePDF->setText(QApplication::translate("WindowStats", "Generate PDF!", 0));
        ButtonShowStats->setText(QApplication::translate("WindowStats", "Show Stats", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowStats: public Ui_WindowStats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSTATS_H
