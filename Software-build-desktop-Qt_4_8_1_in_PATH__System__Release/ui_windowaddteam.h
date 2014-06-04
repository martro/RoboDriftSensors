/********************************************************************************
** Form generated from reading UI file 'windowaddteam.ui'
**
** Created: Wed Jun 4 23:06:03 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADDTEAM_H
#define UI_WINDOWADDTEAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
    QPushButton *ButtonCancel;
    QGridLayout *CurrentWindow;

    void setupUi(QWidget *WindowAddTeam)
    {
        if (WindowAddTeam->objectName().isEmpty())
            WindowAddTeam->setObjectName(QString::fromUtf8("WindowAddTeam"));
        WindowAddTeam->resize(501, 339);
        horizontalLayout_2 = new QHBoxLayout(WindowAddTeam);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(WindowAddTeam);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(WindowAddTeam);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setDuplicatesEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        verticalLayout->addLayout(formLayout);

        ButtonAddLeader = new QPushButton(WindowAddTeam);
        ButtonAddLeader->setObjectName(QString::fromUtf8("ButtonAddLeader"));

        verticalLayout->addWidget(ButtonAddLeader);

        ButtonAddMembers = new QPushButton(WindowAddTeam);
        ButtonAddMembers->setObjectName(QString::fromUtf8("ButtonAddMembers"));

        verticalLayout->addWidget(ButtonAddMembers);

        ButtonAddCars = new QPushButton(WindowAddTeam);
        ButtonAddCars->setObjectName(QString::fromUtf8("ButtonAddCars"));

        verticalLayout->addWidget(ButtonAddCars);

        ButtonEditTeam = new QPushButton(WindowAddTeam);
        ButtonEditTeam->setObjectName(QString::fromUtf8("ButtonEditTeam"));

        verticalLayout->addWidget(ButtonEditTeam);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ButtonSave = new QPushButton(WindowAddTeam);
        ButtonSave->setObjectName(QString::fromUtf8("ButtonSave"));

        horizontalLayout->addWidget(ButtonSave);

        ButtonCancel = new QPushButton(WindowAddTeam);
        ButtonCancel->setObjectName(QString::fromUtf8("ButtonCancel"));

        horizontalLayout->addWidget(ButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        CurrentWindow = new QGridLayout();
        CurrentWindow->setObjectName(QString::fromUtf8("CurrentWindow"));

        horizontalLayout_2->addLayout(CurrentWindow);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        retranslateUi(WindowAddTeam);

        QMetaObject::connectSlotsByName(WindowAddTeam);
    } // setupUi

    void retranslateUi(QWidget *WindowAddTeam)
    {
        WindowAddTeam->setWindowTitle(QApplication::translate("WindowAddTeam", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WindowAddTeam", "Choose team:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("WindowAddTeam", "New team", 0, QApplication::UnicodeUTF8)
        );
        ButtonAddLeader->setText(QApplication::translate("WindowAddTeam", "Add/Edit Leader", 0, QApplication::UnicodeUTF8));
        ButtonAddMembers->setText(QApplication::translate("WindowAddTeam", "Add/Edit Members", 0, QApplication::UnicodeUTF8));
        ButtonAddCars->setText(QApplication::translate("WindowAddTeam", "Add/Edit Cars", 0, QApplication::UnicodeUTF8));
        ButtonEditTeam->setText(QApplication::translate("WindowAddTeam", "Add/Edit Team Name", 0, QApplication::UnicodeUTF8));
        ButtonSave->setText(QApplication::translate("WindowAddTeam", "Save", 0, QApplication::UnicodeUTF8));
        ButtonCancel->setText(QApplication::translate("WindowAddTeam", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowAddTeam: public Ui_WindowAddTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADDTEAM_H
