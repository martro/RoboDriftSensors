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

void WindowEditTeam::onEditTeam(Team tempTeam)
{
    this->ui->lineTeamNameEdit->setText(tempTeam.getName());
}
