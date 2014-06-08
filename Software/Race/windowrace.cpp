#include "windowrace.h"
#include "ui_windowrace.h"

WindowRace::WindowRace(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowRace)
{
    ui->setupUi(this);
}

WindowRace::~WindowRace()
{
    delete ui;
}

void WindowRace::on_pushButton_clicked()
{

}

void WindowRace::on_pushButton_2_clicked()
{

}
