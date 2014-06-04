/********************************************************************************
** Form generated from reading UI file 'windoweditteam.ui'
**
** Created: Wed Jun 4 14:15:18 2014
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
#include <QtGui/QGridLayout>
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
    QGridLayout *gridLayout;
    QLineEdit *lineTeamNameEdit;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *NameBad;
    QLabel *NameOK;

    void setupUi(QWidget *WindowEditTeam)
    {
        if (WindowEditTeam->objectName().isEmpty())
            WindowEditTeam->setObjectName(QString::fromUtf8("WindowEditTeam"));
        WindowEditTeam->resize(400, 302);
        horizontalLayout = new QHBoxLayout(WindowEditTeam);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineTeamNameEdit = new QLineEdit(WindowEditTeam);
        lineTeamNameEdit->setObjectName(QString::fromUtf8("lineTeamNameEdit"));

        gridLayout->addWidget(lineTeamNameEdit, 0, 3, 1, 1);

        label = new QLabel(WindowEditTeam);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 3, 1, 1);

        NameBad = new QLabel(WindowEditTeam);
        NameBad->setObjectName(QString::fromUtf8("NameBad"));
        NameBad->setMaximumSize(QSize(20, 20));
        NameBad->setPixmap(QPixmap(QString::fromUtf8(":/images/images/text_bad.png")));
        NameBad->setScaledContents(true);

        gridLayout->addWidget(NameBad, 0, 5, 1, 1);

        NameOK = new QLabel(WindowEditTeam);
        NameOK->setObjectName(QString::fromUtf8("NameOK"));
        NameOK->setMaximumSize(QSize(20, 20));
        NameOK->setPixmap(QPixmap(QString::fromUtf8(":/images/images/text_ok.png")));
        NameOK->setScaledContents(true);

        gridLayout->addWidget(NameOK, 0, 4, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(WindowEditTeam);

        QMetaObject::connectSlotsByName(WindowEditTeam);
    } // setupUi

    void retranslateUi(QWidget *WindowEditTeam)
    {
        WindowEditTeam->setWindowTitle(QApplication::translate("WindowEditTeam", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WindowEditTeam", "Team name", 0, QApplication::UnicodeUTF8));
        NameBad->setText(QString());
        NameOK->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowEditTeam: public Ui_WindowEditTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWEDITTEAM_H
