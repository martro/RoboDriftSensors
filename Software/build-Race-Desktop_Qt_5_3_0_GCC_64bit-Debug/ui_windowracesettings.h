/********************************************************************************
** Form generated from reading UI file 'windowracesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWRACESETTINGS_H
#define UI_WINDOWRACESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRaceSettings
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QWidget *WindowRaceSettings)
    {
        if (WindowRaceSettings->objectName().isEmpty())
            WindowRaceSettings->setObjectName(QStringLiteral("WindowRaceSettings"));
        WindowRaceSettings->resize(400, 300);
        horizontalLayout = new QHBoxLayout(WindowRaceSettings);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(WindowRaceSettings);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        retranslateUi(WindowRaceSettings);

        QMetaObject::connectSlotsByName(WindowRaceSettings);
    } // setupUi

    void retranslateUi(QWidget *WindowRaceSettings)
    {
        WindowRaceSettings->setWindowTitle(QApplication::translate("WindowRaceSettings", "Form", 0));
        label->setText(QApplication::translate("WindowRaceSettings", "window race settings ", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowRaceSettings: public Ui_WindowRaceSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACESETTINGS_H
