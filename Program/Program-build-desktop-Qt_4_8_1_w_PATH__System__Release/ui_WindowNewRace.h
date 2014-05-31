/********************************************************************************
** Form generated from reading UI file 'WindowNewRace.ui'
**
** Created: Sat May 31 00:01:22 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWNEWRACE_H
#define UI_WINDOWNEWRACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WindowNewRace
{
public:
    QPushButton *ButtonStartRace;
    QPushButton *ButtonStopRace;
    QPushButton *ButtonCancel;
    QPushButton *ButtonSaveResults;
    QComboBox *ButtonModeSelect;
    QComboBox *ButtonTeamSelect;
    QComboBox *ButtonCarSelect;
    QComboBox *ButtonCategorySelect;

    void setupUi(QFrame *WindowNewRace)
    {
        if (WindowNewRace->objectName().isEmpty())
            WindowNewRace->setObjectName(QString::fromUtf8("WindowNewRace"));
        WindowNewRace->resize(400, 300);
        WindowNewRace->setFrameShape(QFrame::StyledPanel);
        WindowNewRace->setFrameShadow(QFrame::Raised);
        ButtonStartRace = new QPushButton(WindowNewRace);
        ButtonStartRace->setObjectName(QString::fromUtf8("ButtonStartRace"));
        ButtonStartRace->setGeometry(QRect(10, 190, 98, 27));
        ButtonStopRace = new QPushButton(WindowNewRace);
        ButtonStopRace->setObjectName(QString::fromUtf8("ButtonStopRace"));
        ButtonStopRace->setGeometry(QRect(10, 240, 98, 27));
        ButtonCancel = new QPushButton(WindowNewRace);
        ButtonCancel->setObjectName(QString::fromUtf8("ButtonCancel"));
        ButtonCancel->setGeometry(QRect(140, 220, 98, 27));
        ButtonSaveResults = new QPushButton(WindowNewRace);
        ButtonSaveResults->setObjectName(QString::fromUtf8("ButtonSaveResults"));
        ButtonSaveResults->setGeometry(QRect(250, 220, 98, 27));
        ButtonModeSelect = new QComboBox(WindowNewRace);
        ButtonModeSelect->setObjectName(QString::fromUtf8("ButtonModeSelect"));
        ButtonModeSelect->setGeometry(QRect(20, 20, 78, 27));
        ButtonTeamSelect = new QComboBox(WindowNewRace);
        ButtonTeamSelect->setObjectName(QString::fromUtf8("ButtonTeamSelect"));
        ButtonTeamSelect->setGeometry(QRect(20, 60, 78, 27));
        ButtonCarSelect = new QComboBox(WindowNewRace);
        ButtonCarSelect->setObjectName(QString::fromUtf8("ButtonCarSelect"));
        ButtonCarSelect->setGeometry(QRect(140, 50, 78, 27));
        ButtonCategorySelect = new QComboBox(WindowNewRace);
        ButtonCategorySelect->setObjectName(QString::fromUtf8("ButtonCategorySelect"));
        ButtonCategorySelect->setGeometry(QRect(230, 50, 78, 27));

        retranslateUi(WindowNewRace);

        QMetaObject::connectSlotsByName(WindowNewRace);
    } // setupUi

    void retranslateUi(QFrame *WindowNewRace)
    {
        WindowNewRace->setWindowTitle(QApplication::translate("WindowNewRace", "WindowNewRace", 0, QApplication::UnicodeUTF8));
        ButtonStartRace->setText(QApplication::translate("WindowNewRace", "Start Race", 0, QApplication::UnicodeUTF8));
        ButtonStopRace->setText(QApplication::translate("WindowNewRace", "Stop race", 0, QApplication::UnicodeUTF8));
        ButtonCancel->setText(QApplication::translate("WindowNewRace", "Cancel", 0, QApplication::UnicodeUTF8));
        ButtonSaveResults->setText(QApplication::translate("WindowNewRace", "Save results", 0, QApplication::UnicodeUTF8));
        ButtonModeSelect->clear();
        ButtonModeSelect->insertItems(0, QStringList()
         << QApplication::translate("WindowNewRace", "Mode", 0, QApplication::UnicodeUTF8)
        );
        ButtonTeamSelect->clear();
        ButtonTeamSelect->insertItems(0, QStringList()
         << QApplication::translate("WindowNewRace", "Team", 0, QApplication::UnicodeUTF8)
        );
        ButtonCarSelect->clear();
        ButtonCarSelect->insertItems(0, QStringList()
         << QApplication::translate("WindowNewRace", "Car", 0, QApplication::UnicodeUTF8)
        );
        ButtonCategorySelect->clear();
        ButtonCategorySelect->insertItems(0, QStringList()
         << QApplication::translate("WindowNewRace", "Category", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class WindowNewRace: public Ui_WindowNewRace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWNEWRACE_H
