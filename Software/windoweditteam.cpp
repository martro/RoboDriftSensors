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

void WindowEditTeam::onSendCurrentTeam(Team tempTeam)
{
    this->ui->lineTeamNameEdit->setText(tempTeam.getName()); //otrzymuje aktualnego tempteama i wyswietla jego nazwe
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

void WindowEditTeam::on_lineTeamNameEdit_textChanged(const QString &TempText)
{
    emit this->newTeamNameEntered(TempText); //emituje zeby sprawdzic czy nazwa jest ok
}
