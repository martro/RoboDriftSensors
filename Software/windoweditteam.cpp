#include "windoweditteam.h"
#include "ui_windoweditteam.h"

WindowEditTeam::WindowEditTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowEditTeam)
{
    ui->setupUi(this);
    ui->NameOK->show();
    ui->NameBad->hide();
}

WindowEditTeam::~WindowEditTeam()
{
    delete ui;
}

void WindowEditTeam::onEditTeam(Team tempTeam)
{
    this->ui->lineTeamNameEdit->setText(tempTeam.getName());
}

void WindowEditTeam::on_lineTeamNameEdit_textEdited(const QString &TempText)
{
    emit newTeamNameEntered(TempText);
}
void WindowEditTeam::onCheckName(int Flag)
{
    if(Flag)
    {
        ui->NameBad->show();
        ui->NameOK->hide();
    }
    else
    {
        ui->NameBad->hide();
        ui->NameOK->show();
    }
}
