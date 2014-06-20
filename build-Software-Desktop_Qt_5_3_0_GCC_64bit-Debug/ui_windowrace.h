/********************************************************************************
** Form generated from reading UI file 'windowrace.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWRACE_H
#define UI_WINDOWRACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRace
{
public:
    QWidget *centralWidget;
    QFormLayout *formLayout;
    QGridLayout *gridLayout;
    QComboBox *comboBoxCategory;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBoxID;
    QLabel *label_4;
    QLabel *labelTeamCarName;
    QLCDNumber *numberOfLaps;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBest;
    QTextBrowser *textCurrent;
    QTextBrowser *textDifference;
    QTextBrowser *textWhichBetter;
    QPushButton *buttonClear;
    QPushButton *buttonStart;
    QPushButton *buttonSave;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WindowRace)
    {
        if (WindowRace->objectName().isEmpty())
            WindowRace->setObjectName(QStringLiteral("WindowRace"));
        WindowRace->resize(689, 387);
        centralWidget = new QWidget(WindowRace);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        formLayout = new QFormLayout(centralWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBoxCategory = new QComboBox(centralWidget);
        comboBoxCategory->setObjectName(QStringLiteral("comboBoxCategory"));

        gridLayout->addWidget(comboBoxCategory, 1, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        comboBoxID = new QComboBox(centralWidget);
        comboBoxID->setObjectName(QStringLiteral("comboBoxID"));

        gridLayout->addWidget(comboBoxID, 1, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        labelTeamCarName = new QLabel(centralWidget);
        labelTeamCarName->setObjectName(QStringLiteral("labelTeamCarName"));

        gridLayout->addWidget(labelTeamCarName, 1, 2, 1, 1);

        numberOfLaps = new QLCDNumber(centralWidget);
        numberOfLaps->setObjectName(QStringLiteral("numberOfLaps"));

        gridLayout->addWidget(numberOfLaps, 1, 3, 1, 1);


        formLayout->setLayout(0, QFormLayout::SpanningRole, gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textBest = new QTextBrowser(centralWidget);
        textBest->setObjectName(QStringLiteral("textBest"));

        horizontalLayout->addWidget(textBest);

        textCurrent = new QTextBrowser(centralWidget);
        textCurrent->setObjectName(QStringLiteral("textCurrent"));

        horizontalLayout->addWidget(textCurrent);

        textDifference = new QTextBrowser(centralWidget);
        textDifference->setObjectName(QStringLiteral("textDifference"));

        horizontalLayout->addWidget(textDifference);

        textWhichBetter = new QTextBrowser(centralWidget);
        textWhichBetter->setObjectName(QStringLiteral("textWhichBetter"));

        horizontalLayout->addWidget(textWhichBetter);


        formLayout->setLayout(1, QFormLayout::SpanningRole, horizontalLayout);

        buttonClear = new QPushButton(centralWidget);
        buttonClear->setObjectName(QStringLiteral("buttonClear"));

        formLayout->setWidget(3, QFormLayout::LabelRole, buttonClear);

        buttonStart = new QPushButton(centralWidget);
        buttonStart->setObjectName(QStringLiteral("buttonStart"));

        formLayout->setWidget(3, QFormLayout::FieldRole, buttonStart);

        buttonSave = new QPushButton(centralWidget);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));

        formLayout->setWidget(4, QFormLayout::FieldRole, buttonSave);

        WindowRace->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WindowRace);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 689, 25));
        WindowRace->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WindowRace);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WindowRace->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WindowRace);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WindowRace->setStatusBar(statusBar);

        retranslateUi(WindowRace);

        QMetaObject::connectSlotsByName(WindowRace);
    } // setupUi

    void retranslateUi(QMainWindow *WindowRace)
    {
        WindowRace->setWindowTitle(QApplication::translate("WindowRace", "WindowRace", 0));
        comboBoxCategory->clear();
        comboBoxCategory->insertItems(0, QStringList()
         << QApplication::translate("WindowRace", "Mobile Open", 0)
         << QApplication::translate("WindowRace", "RoboDrift", 0)
         << QApplication::translate("WindowRace", "RC", 0)
        );
        label->setText(QApplication::translate("WindowRace", "Category", 0));
        label_2->setText(QApplication::translate("WindowRace", "Car ID", 0));
        label_3->setText(QApplication::translate("WindowRace", "Team/Car name", 0));
        label_4->setText(QApplication::translate("WindowRace", "Laps", 0));
        labelTeamCarName->setText(QString());
        buttonClear->setText(QApplication::translate("WindowRace", "Clear", 0));
        buttonStart->setText(QApplication::translate("WindowRace", "START!", 0));
        buttonSave->setText(QApplication::translate("WindowRace", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowRace: public Ui_WindowRace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACE_H
