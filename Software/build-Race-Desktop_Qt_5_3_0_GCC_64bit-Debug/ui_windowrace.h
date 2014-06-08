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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowRace
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QListView *listView;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
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
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 20, 181, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 280, 81, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 260, 181, 51));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(40, 100, 271, 151));
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
        pushButton->setText(QApplication::translate("WindowRace", "START!", 0));
        pushButton_2->setText(QApplication::translate("WindowRace", "Clear", 0));
        pushButton_3->setText(QApplication::translate("WindowRace", "Save", 0));
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
