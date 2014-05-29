#include "WindowAddTeam.h"
#include "ui_WindowAddTeam.h"

WindowAddTeam::WindowAddTeam(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::WindowAddTeam)
{
    ui->setupUi(this);
}

WindowAddTeam::~WindowAddTeam()
{
    delete ui;
}

void WindowAddTeam::on_ButtonSave_clicked()
{
    close();
}

void WindowAddTeam::on_ButtonCancel_clicked()
{
    close();
}
