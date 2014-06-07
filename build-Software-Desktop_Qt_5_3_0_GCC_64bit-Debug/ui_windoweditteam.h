/********************************************************************************
** Form generated from reading UI file 'windoweditteam.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWEDITTEAM_H
#define UI_WINDOWEDITTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

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
            WindowEditTeam->setObjectName(QStringLiteral("WindowEditTeam"));
        WindowEditTeam->resize(400, 302);
        horizontalLayout = new QHBoxLayout(WindowEditTeam);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineTeamNameEdit = new QLineEdit(WindowEditTeam);
        lineTeamNameEdit->setObjectName(QStringLiteral("lineTeamNameEdit"));

        gridLayout->addWidget(lineTeamNameEdit, 0, 3, 1, 1);

        label = new QLabel(WindowEditTeam);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 3, 1, 1);

        NameBad = new QLabel(WindowEditTeam);
        NameBad->setObjectName(QStringLiteral("NameBad"));
        NameBad->setMaximumSize(QSize(20, 20));
        NameBad->setPixmap(QPixmap(QString::fromUtf8(":/images/images/text_bad.png")));
        NameBad->setScaledContents(true);

        gridLayout->addWidget(NameBad, 0, 5, 1, 1);

        NameOK = new QLabel(WindowEditTeam);
        NameOK->setObjectName(QStringLiteral("NameOK"));
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
        WindowEditTeam->setWindowTitle(QApplication::translate("WindowEditTeam", "Form", 0));
        label->setText(QApplication::translate("WindowEditTeam", "Team name", 0));
        NameBad->setText(QString());
        NameOK->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowEditTeam: public Ui_WindowEditTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWEDITTEAM_H
