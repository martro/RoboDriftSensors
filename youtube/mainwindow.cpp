#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WhatsClicked=0;

    //delete this->form;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if (WhatsClicked!=BUTTON_RACE)
    {
        WhatsClicked=BUTTON_RACE;
        delete this->form;
        Form *form = new Form;
        ui->gridLayout->addWidget(form,0,0);
        this->form=form;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if (WhatsClicked!=BUTTON_DUPA)
    {
        WhatsClicked=BUTTON_DUPA;
        delete this->form;
        Form2 *form = new Form2;
        ui->gridLayout->addWidget(form,0,0);
        this->form=form;
    }
}
