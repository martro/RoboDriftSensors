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
    this->WS.show();
}

void WindowAdmin::statsHide()
{
    this->WS.hide();
}

void WindowAdmin::addTeamShow()
{
    this->WAT.show();
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

void WindowAdmin::on_ButtonAddTeam_clicked()
{
    this->addTeamShow();
}
