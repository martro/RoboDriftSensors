/********************************************************************************
** Form generated from reading UI file 'WindowAddCar.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADDCAR_H
#define UI_WINDOWADDCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowAddCar
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *lineName;
    QLineEdit *lineID;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ButtonAdd;
    QPushButton *ButtonDelete;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxCategoryRC;
    QCheckBox *checkBoxCategoryMO;
    QCheckBox *checkBoxCategoryRD;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBoxCompetitionTA;
    QCheckBox *checkBoxCompetitionFR;

    void setupUi(QWidget *WindowAddCar)
    {
        if (WindowAddCar->objectName().isEmpty())
            WindowAddCar->setObjectName(QStringLiteral("WindowAddCar"));
        WindowAddCar->resize(400, 300);
        horizontalLayout = new QHBoxLayout(WindowAddCar);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(WindowAddCar);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        comboBox = new QComboBox(WindowAddCar);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);

        lineName = new QLineEdit(WindowAddCar);
        lineName->setObjectName(QStringLiteral("lineName"));

        gridLayout_2->addWidget(lineName, 1, 1, 1, 1);

        lineID = new QLineEdit(WindowAddCar);
        lineID->setObjectName(QStringLiteral("lineID"));

        gridLayout_2->addWidget(lineID, 2, 1, 1, 1);

        label_2 = new QLabel(WindowAddCar);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ButtonAdd = new QPushButton(WindowAddCar);
        ButtonAdd->setObjectName(QStringLiteral("ButtonAdd"));

        horizontalLayout_2->addWidget(ButtonAdd);

        ButtonDelete = new QPushButton(WindowAddCar);
        ButtonDelete->setObjectName(QStringLiteral("ButtonDelete"));

        horizontalLayout_2->addWidget(ButtonDelete);


        gridLayout_2->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        label_3 = new QLabel(WindowAddCar);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(WindowAddCar);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        checkBoxCategoryRC = new QCheckBox(WindowAddCar);
        checkBoxCategoryRC->setObjectName(QStringLiteral("checkBoxCategoryRC"));

        verticalLayout_2->addWidget(checkBoxCategoryRC);

        checkBoxCategoryMO = new QCheckBox(WindowAddCar);
        checkBoxCategoryMO->setObjectName(QStringLiteral("checkBoxCategoryMO"));

        verticalLayout_2->addWidget(checkBoxCategoryMO);

        checkBoxCategoryRD = new QCheckBox(WindowAddCar);
        checkBoxCategoryRD->setObjectName(QStringLiteral("checkBoxCategoryRD"));

        verticalLayout_2->addWidget(checkBoxCategoryRD);


        gridLayout_2->addLayout(verticalLayout_2, 3, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkBoxCompetitionTA = new QCheckBox(WindowAddCar);
        checkBoxCompetitionTA->setObjectName(QStringLiteral("checkBoxCompetitionTA"));

        verticalLayout_3->addWidget(checkBoxCompetitionTA);

        checkBoxCompetitionFR = new QCheckBox(WindowAddCar);
        checkBoxCompetitionFR->setObjectName(QStringLiteral("checkBoxCompetitionFR"));

        verticalLayout_3->addWidget(checkBoxCompetitionFR);


        gridLayout_2->addLayout(verticalLayout_3, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        retranslateUi(WindowAddCar);

        QMetaObject::connectSlotsByName(WindowAddCar);
    } // setupUi

    void retranslateUi(QWidget *WindowAddCar)
    {
        WindowAddCar->setWindowTitle(QApplication::translate("WindowAddCar", "Form", 0));
        label->setText(QApplication::translate("WindowAddCar", "Name", 0));
        label_2->setText(QApplication::translate("WindowAddCar", "ID", 0));
        ButtonAdd->setText(QApplication::translate("WindowAddCar", "Add", 0));
        ButtonDelete->setText(QApplication::translate("WindowAddCar", "Delete", 0));
        label_3->setText(QApplication::translate("WindowAddCar", "Category", 0));
        label_4->setText(QApplication::translate("WindowAddCar", "Competition", 0));
        checkBoxCategoryRC->setText(QApplication::translate("WindowAddCar", "Radio Controlled", 0));
        checkBoxCategoryMO->setText(QApplication::translate("WindowAddCar", "Mobile Open", 0));
        checkBoxCategoryRD->setText(QApplication::translate("WindowAddCar", "RoboDrift", 0));
        checkBoxCompetitionTA->setText(QApplication::translate("WindowAddCar", "Time Attack", 0));
        checkBoxCompetitionFR->setText(QApplication::translate("WindowAddCar", "FreeStyle", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowAddCar: public Ui_WindowAddCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADDCAR_H
