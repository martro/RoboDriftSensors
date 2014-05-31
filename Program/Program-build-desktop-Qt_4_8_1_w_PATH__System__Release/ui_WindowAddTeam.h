/********************************************************************************
** Form generated from reading UI file 'WindowAddTeam.ui'
**
** Created: Sat May 31 00:01:22 2014
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
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowAddTeam
{
public:
    QLineEdit *lineTeamName;
    QLineEdit *lineLeaderPhone;
    QLineEdit *lineLeaderSurname;
    QLineEdit *lineLeaderName;
    QLineEdit *lineLeaderEmail;
    QLineEdit *lineMember1Name;
    QLineEdit *lineMember1Surname;
    QLineEdit *lineMember2Name;
    QLineEdit *lineMember3Name;
    QLineEdit *lineMember4Name;
    QLineEdit *lineMember2Surname;
    QLineEdit *lineMember3Surname;
    QLineEdit *lineMember4Surname;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_7;
    QLineEdit *lineCar1Name;
    QLineEdit *lineCar2Name;
    QPushButton *ButtonSave;
    QPushButton *ButtonCancel;

    void setupUi(QFrame *WindowAddTeam)
    {
        if (WindowAddTeam->objectName().isEmpty())
            WindowAddTeam->setObjectName(QString::fromUtf8("WindowAddTeam"));
        WindowAddTeam->resize(492, 445);
        WindowAddTeam->setFrameShape(QFrame::StyledPanel);
        WindowAddTeam->setFrameShadow(QFrame::Raised);
        lineTeamName = new QLineEdit(WindowAddTeam);
        lineTeamName->setObjectName(QString::fromUtf8("lineTeamName"));
        lineTeamName->setGeometry(QRect(180, 40, 113, 27));
        lineLeaderPhone = new QLineEdit(WindowAddTeam);
        lineLeaderPhone->setObjectName(QString::fromUtf8("lineLeaderPhone"));
        lineLeaderPhone->setGeometry(QRect(370, 90, 113, 27));
        lineLeaderSurname = new QLineEdit(WindowAddTeam);
        lineLeaderSurname->setObjectName(QString::fromUtf8("lineLeaderSurname"));
        lineLeaderSurname->setGeometry(QRect(130, 90, 113, 27));
        lineLeaderName = new QLineEdit(WindowAddTeam);
        lineLeaderName->setObjectName(QString::fromUtf8("lineLeaderName"));
        lineLeaderName->setGeometry(QRect(10, 90, 113, 27));
        lineLeaderEmail = new QLineEdit(WindowAddTeam);
        lineLeaderEmail->setObjectName(QString::fromUtf8("lineLeaderEmail"));
        lineLeaderEmail->setGeometry(QRect(250, 90, 113, 27));
        lineMember1Name = new QLineEdit(WindowAddTeam);
        lineMember1Name->setObjectName(QString::fromUtf8("lineMember1Name"));
        lineMember1Name->setGeometry(QRect(10, 160, 113, 27));
        lineMember1Surname = new QLineEdit(WindowAddTeam);
        lineMember1Surname->setObjectName(QString::fromUtf8("lineMember1Surname"));
        lineMember1Surname->setGeometry(QRect(10, 200, 113, 27));
        lineMember2Name = new QLineEdit(WindowAddTeam);
        lineMember2Name->setObjectName(QString::fromUtf8("lineMember2Name"));
        lineMember2Name->setGeometry(QRect(130, 160, 113, 27));
        lineMember3Name = new QLineEdit(WindowAddTeam);
        lineMember3Name->setObjectName(QString::fromUtf8("lineMember3Name"));
        lineMember3Name->setGeometry(QRect(250, 160, 113, 27));
        lineMember4Name = new QLineEdit(WindowAddTeam);
        lineMember4Name->setObjectName(QString::fromUtf8("lineMember4Name"));
        lineMember4Name->setGeometry(QRect(370, 160, 113, 27));
        lineMember2Surname = new QLineEdit(WindowAddTeam);
        lineMember2Surname->setObjectName(QString::fromUtf8("lineMember2Surname"));
        lineMember2Surname->setGeometry(QRect(130, 200, 113, 27));
        lineMember3Surname = new QLineEdit(WindowAddTeam);
        lineMember3Surname->setObjectName(QString::fromUtf8("lineMember3Surname"));
        lineMember3Surname->setGeometry(QRect(250, 200, 113, 27));
        lineMember4Surname = new QLineEdit(WindowAddTeam);
        lineMember4Surname->setObjectName(QString::fromUtf8("lineMember4Surname"));
        lineMember4Surname->setGeometry(QRect(370, 200, 113, 27));
        groupBox = new QGroupBox(WindowAddTeam);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(280, 270, 181, 121));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(gridLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 0, 1, 1, 1);

        checkBox_3 = new QCheckBox(gridLayoutWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 1, 1, 1, 1);

        checkBox_2 = new QCheckBox(gridLayoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 0, 0, 1, 1);

        checkBox_6 = new QCheckBox(gridLayoutWidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        gridLayout->addWidget(checkBox_6, 1, 0, 1, 1);

        checkBox_4 = new QCheckBox(gridLayoutWidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout->addWidget(checkBox_4, 0, 2, 1, 1);

        checkBox_7 = new QCheckBox(gridLayoutWidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        gridLayout->addWidget(checkBox_7, 1, 2, 1, 1);

        lineCar1Name = new QLineEdit(WindowAddTeam);
        lineCar1Name->setObjectName(QString::fromUtf8("lineCar1Name"));
        lineCar1Name->setGeometry(QRect(120, 290, 113, 27));
        lineCar2Name = new QLineEdit(WindowAddTeam);
        lineCar2Name->setObjectName(QString::fromUtf8("lineCar2Name"));
        lineCar2Name->setGeometry(QRect(120, 340, 113, 27));
        ButtonSave = new QPushButton(WindowAddTeam);
        ButtonSave->setObjectName(QString::fromUtf8("ButtonSave"));
        ButtonSave->setGeometry(QRect(130, 390, 98, 27));
        ButtonCancel = new QPushButton(WindowAddTeam);
        ButtonCancel->setObjectName(QString::fromUtf8("ButtonCancel"));
        ButtonCancel->setGeometry(QRect(260, 390, 98, 27));

        retranslateUi(WindowAddTeam);

        QMetaObject::connectSlotsByName(WindowAddTeam);
    } // setupUi

    void retranslateUi(QFrame *WindowAddTeam)
    {
        WindowAddTeam->setWindowTitle(QApplication::translate("WindowAddTeam", "WindowAddTeam", 0, QApplication::UnicodeUTF8));
        lineTeamName->setText(QApplication::translate("WindowAddTeam", "Team Name", 0, QApplication::UnicodeUTF8));
        lineLeaderPhone->setText(QApplication::translate("WindowAddTeam", "Leader Phone", 0, QApplication::UnicodeUTF8));
        lineLeaderSurname->setText(QApplication::translate("WindowAddTeam", "Leader Surname", 0, QApplication::UnicodeUTF8));
        lineLeaderName->setText(QApplication::translate("WindowAddTeam", "Leader Name", 0, QApplication::UnicodeUTF8));
        lineLeaderEmail->setText(QApplication::translate("WindowAddTeam", "Leader E-mail", 0, QApplication::UnicodeUTF8));
        lineMember1Name->setText(QApplication::translate("WindowAddTeam", "Member1 Name", 0, QApplication::UnicodeUTF8));
        lineMember1Surname->setText(QApplication::translate("WindowAddTeam", "Member1 Surname", 0, QApplication::UnicodeUTF8));
        lineMember2Name->setText(QApplication::translate("WindowAddTeam", "Member2 Name", 0, QApplication::UnicodeUTF8));
        lineMember3Name->setText(QApplication::translate("WindowAddTeam", "Member3 Name", 0, QApplication::UnicodeUTF8));
        lineMember4Name->setText(QApplication::translate("WindowAddTeam", "Member4 Name", 0, QApplication::UnicodeUTF8));
        lineMember2Surname->setText(QApplication::translate("WindowAddTeam", "Member2 Surname", 0, QApplication::UnicodeUTF8));
        lineMember3Surname->setText(QApplication::translate("WindowAddTeam", "Member3 Surname", 0, QApplication::UnicodeUTF8));
        lineMember4Surname->setText(QApplication::translate("WindowAddTeam", "Member4 Surname", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("WindowAddTeam", "Categories", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QString());
        checkBox_3->setText(QString());
        checkBox_2->setText(QString());
        checkBox_6->setText(QString());
        checkBox_4->setText(QString());
        checkBox_7->setText(QString());
        lineCar1Name->setText(QApplication::translate("WindowAddTeam", "Car1Name", 0, QApplication::UnicodeUTF8));
        lineCar2Name->setText(QApplication::translate("WindowAddTeam", "Car2Name", 0, QApplication::UnicodeUTF8));
        ButtonSave->setText(QApplication::translate("WindowAddTeam", "Save", 0, QApplication::UnicodeUTF8));
        ButtonCancel->setText(QApplication::translate("WindowAddTeam", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowAddTeam: public Ui_WindowAddTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADDTEAM_H
