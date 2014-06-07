/********************************************************************************
** Form generated from reading UI file 'windowaddteam.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADDTEAM_H
#define UI_WINDOWADDTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowAddTeam
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *ButtonAddLeader;
    QPushButton *ButtonAddMembers;
    QPushButton *ButtonAddCars;
    QPushButton *ButtonEditTeam;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonSave;
    QPushButton *ButtonDelete;
    QGridLayout *CurrentWindow;

    void setupUi(QWidget *WindowAddTeam)
    {
        if (WindowAddTeam->objectName().isEmpty())
            WindowAddTeam->setObjectName(QStringLiteral("WindowAddTeam"));
        WindowAddTeam->resize(501, 339);
        horizontalLayout_2 = new QHBoxLayout(WindowAddTeam);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(WindowAddTeam);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(WindowAddTeam);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setDuplicatesEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        verticalLayout->addLayout(formLayout);

        ButtonAddLeader = new QPushButton(WindowAddTeam);
        ButtonAddLeader->setObjectName(QStringLiteral("ButtonAddLeader"));

        verticalLayout->addWidget(ButtonAddLeader);

        ButtonAddMembers = new QPushButton(WindowAddTeam);
        ButtonAddMembers->setObjectName(QStringLiteral("ButtonAddMembers"));

        verticalLayout->addWidget(ButtonAddMembers);

        ButtonAddCars = new QPushButton(WindowAddTeam);
        ButtonAddCars->setObjectName(QStringLiteral("ButtonAddCars"));

        verticalLayout->addWidget(ButtonAddCars);

        ButtonEditTeam = new QPushButton(WindowAddTeam);
        ButtonEditTeam->setObjectName(QStringLiteral("ButtonEditTeam"));

        verticalLayout->addWidget(ButtonEditTeam);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ButtonSave = new QPushButton(WindowAddTeam);
        ButtonSave->setObjectName(QStringLiteral("ButtonSave"));

        horizontalLayout->addWidget(ButtonSave);

        ButtonDelete = new QPushButton(WindowAddTeam);
        ButtonDelete->setObjectName(QStringLiteral("ButtonDelete"));

        horizontalLayout->addWidget(ButtonDelete);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        CurrentWindow = new QGridLayout();
        CurrentWindow->setObjectName(QStringLiteral("CurrentWindow"));

        horizontalLayout_2->addLayout(CurrentWindow);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        retranslateUi(WindowAddTeam);

        QMetaObject::connectSlotsByName(WindowAddTeam);
    } // setupUi

    void retranslateUi(QWidget *WindowAddTeam)
    {
        WindowAddTeam->setWindowTitle(QApplication::translate("WindowAddTeam", "Form", 0));
        label->setText(QApplication::translate("WindowAddTeam", "Choose team:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("WindowAddTeam", "New team", 0)
        );
        ButtonAddLeader->setText(QApplication::translate("WindowAddTeam", "Add/Edit Leader", 0));
        ButtonAddMembers->setText(QApplication::translate("WindowAddTeam", "Add/Edit Members", 0));
        ButtonAddCars->setText(QApplication::translate("WindowAddTeam", "Add/Edit Cars", 0));
        ButtonEditTeam->setText(QApplication::translate("WindowAddTeam", "Add/Edit Team Name", 0));
        ButtonSave->setText(QApplication::translate("WindowAddTeam", "Save", 0));
        ButtonDelete->setText(QApplication::translate("WindowAddTeam", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowAddTeam: public Ui_WindowAddTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADDTEAM_H
