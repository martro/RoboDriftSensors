/********************************************************************************
** Form generated from reading UI file 'windowaddteam.ui'
**
** Created: Sat May 31 15:10:52 2014
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
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
    QPushButton *ButtonAddLeader;
    QPushButton *ButtonAddMembers;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;

    void setupUi(QWidget *WindowAddTeam)
    {
        if (WindowAddTeam->objectName().isEmpty())
            WindowAddTeam->setObjectName(QString::fromUtf8("WindowAddTeam"));
        WindowAddTeam->resize(501, 339);
        horizontalLayout_2 = new QHBoxLayout(WindowAddTeam);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ButtonAddLeader = new QPushButton(WindowAddTeam);
        ButtonAddLeader->setObjectName(QString::fromUtf8("ButtonAddLeader"));

        verticalLayout->addWidget(ButtonAddLeader);

        ButtonAddMembers = new QPushButton(WindowAddTeam);
        ButtonAddMembers->setObjectName(QString::fromUtf8("ButtonAddMembers"));

        verticalLayout->addWidget(ButtonAddMembers);

        pushButton = new QPushButton(WindowAddTeam);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox = new QComboBox(WindowAddTeam);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_2->addWidget(comboBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(WindowAddTeam);

        QMetaObject::connectSlotsByName(WindowAddTeam);
    } // setupUi

    void retranslateUi(QWidget *WindowAddTeam)
    {
        WindowAddTeam->setWindowTitle(QApplication::translate("WindowAddTeam", "Form", 0, QApplication::UnicodeUTF8));
        ButtonAddLeader->setText(QApplication::translate("WindowAddTeam", "Add Leader", 0, QApplication::UnicodeUTF8));
        ButtonAddMembers->setText(QApplication::translate("WindowAddTeam", "Add Members", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("WindowAddTeam", "Add Cars", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowAddTeam: public Ui_WindowAddTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADDTEAM_H
