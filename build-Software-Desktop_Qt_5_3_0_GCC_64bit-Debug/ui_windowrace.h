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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *buttonStart;
    QPushButton *buttonClear;
    QPushButton *buttonSave;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBest;
    QTextBrowser *textCurrent;
    QTextBrowser *textDifference;
    QTextBrowser *textWhichBetter;
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
        buttonStart = new QPushButton(centralWidget);
        buttonStart->setObjectName(QStringLiteral("buttonStart"));
        buttonStart->setGeometry(QRect(280, 20, 181, 51));
        buttonClear = new QPushButton(centralWidget);
        buttonClear->setObjectName(QStringLiteral("buttonClear"));
        buttonClear->setGeometry(QRect(20, 280, 81, 31));
        buttonSave = new QPushButton(centralWidget);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));
        buttonSave->setGeometry(QRect(280, 260, 181, 51));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 0, 223, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(41, 99, 601, 151));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textBest = new QTextBrowser(horizontalLayoutWidget);
        textBest->setObjectName(QStringLiteral("textBest"));

        horizontalLayout->addWidget(textBest);

        textCurrent = new QTextBrowser(horizontalLayoutWidget);
        textCurrent->setObjectName(QStringLiteral("textCurrent"));

        horizontalLayout->addWidget(textCurrent);

        textDifference = new QTextBrowser(horizontalLayoutWidget);
        textDifference->setObjectName(QStringLiteral("textDifference"));

        horizontalLayout->addWidget(textDifference);

        textWhichBetter = new QTextBrowser(horizontalLayoutWidget);
        textWhichBetter->setObjectName(QStringLiteral("textWhichBetter"));

        horizontalLayout->addWidget(textWhichBetter);

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
        buttonStart->setText(QApplication::translate("WindowRace", "START!", 0));
        buttonClear->setText(QApplication::translate("WindowRace", "Clear", 0));
        buttonSave->setText(QApplication::translate("WindowRace", "Save", 0));
        label->setText(QApplication::translate("WindowRace", "Category", 0));
        label_2->setText(QApplication::translate("WindowRace", "Car ID", 0));
        label_3->setText(QApplication::translate("WindowRace", "Car name", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowRace: public Ui_WindowRace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWRACE_H
