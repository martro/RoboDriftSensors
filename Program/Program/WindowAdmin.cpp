#include "WindowAdmin.h"
#include "ui_WindowAdmin.h"

WindowAdmin::WindowAdmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowAdmin)
{
    ui->setupUi(this);
}

WindowAdmin::~WindowAdmin()
{
    delete ui;
}

void WindowAdmin::newRaceShow()
{
    this->WNR.show();
}

void WindowAdmin::on_ButtonNewRace_clicked()
{
    this->newRaceShow();
}
