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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowStats
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonGeneratePDF;

    void setupUi(QWidget *WindowStats)
    {
        if (WindowStats->objectName().isEmpty())
            WindowStats->setObjectName(QStringLiteral("WindowStats"));
        WindowStats->resize(400, 300);
        horizontalLayout = new QHBoxLayout(WindowStats);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ButtonGeneratePDF = new QPushButton(WindowStats);
        ButtonGeneratePDF->setObjectName(QStringLiteral("ButtonGeneratePDF"));

        horizontalLayout->addWidget(ButtonGeneratePDF);


        retranslateUi(WindowStats);

        QMetaObject::connectSlotsByName(WindowStats);
    } // setupUi

    void retranslateUi(QWidget *WindowStats)
    {
        WindowStats->setWindowTitle(QApplication::translate("WindowStats", "Form", 0));
        ButtonGeneratePDF->setText(QApplication::translate("WindowStats", "Generate PDF!", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowStats: public Ui_WindowStats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSTATS_H
