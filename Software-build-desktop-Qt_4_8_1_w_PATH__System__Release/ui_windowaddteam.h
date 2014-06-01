/********************************************************************************
** Form generated from reading UI file 'windowaddteam.ui'
**
** Created: Sun Jun 1 12:07:30 2014
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
#include <QtGui/QGraphicsView>
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
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *ButtonAddLeader;
    QPushButton *ButtonAddMembers;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QGridLayout *CurrentWindow;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *WindowAddTeam)
    {
        if (WindowAddTeam->objectName().isEmpty())
            WindowAddTeam->setObjectName(QString::fromUtf8("WindowAddTeam"));
        WindowAddTeam->resize(501, 339);
        horizontalLayout_2 = new QHBoxLayout(WindowAddTeam);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(WindowAddTeam);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        comboBox = new QComboBox(WindowAddTeam);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

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

        CurrentWindow = new QGridLayout();
        CurrentWindow->setObjectName(QString::fromUtf8("CurrentWindow"));
        graphicsView = new QGraphicsView(WindowAddTeam);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        CurrentWindow->addWidget(graphicsView, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(CurrentWindow);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        retranslateUi(WindowAddTeam);

        QMetaObject::connectSlotsByName(WindowAddTeam);
    } // setupUi

    void retranslateUi(QWidget *WindowAddTeam)
    {
        WindowAddTeam->setWindowTitle(QApplication::translate("WindowAddTeam", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WindowAddTeam", "Choose team:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QString()
        );
        ButtonAddLeader->setText(QApplication::translate("WindowAddTeam", "Add/Edit Leader", 0, QApplication::UnicodeUTF8));
        ButtonAddMembers->setText(QApplication::translate("WindowAddTeam", "Add Members", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("WindowAddTeam", "Add Cars", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowAddTeam: public Ui_WindowAddTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADDTEAM_H
