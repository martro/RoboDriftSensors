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

void WindowAdmin::statsShow()
{
    this->S.show();
}

void WindowAdmin::statsHide()
{
    this->S.hide();
}

void WindowAdmin::on_ButtonNewRace_clicked()
{
    this->newRaceShow();
}

void WindowAdmin::on_ButtonShowStats_clicked()
{
    this->statsShow();
}

void WindowAdmin::on_ButtonHideStats_clicked()
{
    this->statsHide();
}
