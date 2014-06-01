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

/*void WindowEditTeam::on_lineTeamNameEdit_returnPressed() to jest do obsługi przyscisku
{
    emit this->newTeamNameEntered(this->ui->lineTeamNameEdit->text());
}*/
void WindowEditTeam::onEditTeam(Team tempTeam)
{
    this->ui->lineTeamNameEdit->setText(tempTeam.getName());
}
