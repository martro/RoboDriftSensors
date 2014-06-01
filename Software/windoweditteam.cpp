#include "windoweditteam.h"
#include "ui_windoweditteam.h"

WindowEditTeam::WindowEditTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowEditTeam)
{
    ui->setupUi(this);
}

WindowEditTeam::~WindowEditTeam()
{
    delete ui;
}

void WindowEditTeam::on_lineTeamNameEdit_returnPressed()
{
    emit this->newTeamNameEntered(this->ui->lineTeamNameEdit->text());
}
