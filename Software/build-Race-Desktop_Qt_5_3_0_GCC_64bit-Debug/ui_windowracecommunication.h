/********************************************************************************
** Form generated from reading UI file 'windowracecommunication.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWRACECOMMUNICATION_H
#define UI_WINDOWRACECOMMUNICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRaceCommunication
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QWidget *WindowRaceCommunication)
    {
        if (WindowRaceCommunication->objectName().isEmpty())
            WindowRaceCommunication->setObjectName(QStringLiteral("WindowRaceCommunication"));
        WindowRaceCommunication->resize(400, 300);
        horizontalLayout = new QHBoxLayout(WindowRaceCommunication);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(WindowRaceCommunication);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        retranslateUi(WindowRaceCommunication);

        QMetaObject::connectSlotsByName(WindowRaceCommunication);
    } // setupUi

    void retranslateUi(QWidget *WindowRaceCommunication)
    {
        WindowRaceCommunication->setWindowTitle(QApplication::translate("WindowRaceCommunication", "Form", 0));
        label->setText(QApplication::translate("WindowRaceCommunication", "Communication", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowRaceCommunication: public Ui_WindowRaceCommunication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACECOMMUNICATION_H
