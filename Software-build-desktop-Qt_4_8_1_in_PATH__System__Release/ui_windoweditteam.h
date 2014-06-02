/********************************************************************************
** Form generated from reading UI file 'windoweditteam.ui'
**
** Created: Mon Jun 2 16:55:02 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWEDITTEAM_H
#define UI_WINDOWEDITTEAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowEditTeam
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineTeamNameEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *WindowEditTeam)
    {
        if (WindowEditTeam->objectName().isEmpty())
            WindowEditTeam->setObjectName(QString::fromUtf8("WindowEditTeam"));
        WindowEditTeam->resize(400, 302);
        horizontalLayout = new QHBoxLayout(WindowEditTeam);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(WindowEditTeam);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineTeamNameEdit = new QLineEdit(WindowEditTeam);
        lineTeamNameEdit->setObjectName(QString::fromUtf8("lineTeamNameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineTeamNameEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::LabelRole, verticalSpacer_2);


        horizontalLayout->addLayout(formLayout);


        retranslateUi(WindowEditTeam);

        QMetaObject::connectSlotsByName(WindowEditTeam);
    } // setupUi

    void retranslateUi(QWidget *WindowEditTeam)
    {
        WindowEditTeam->setWindowTitle(QApplication::translate("WindowEditTeam", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WindowEditTeam", "Team name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowEditTeam: public Ui_WindowEditTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWEDITTEAM_H
