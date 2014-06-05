#include "windowaddleader.h"
#include "ui_windowaddleader.h"

WindowAddLeader::WindowAddLeader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowAddLeader)
{
    ui->setupUi(this);
}

WindowAddLeader::~WindowAddLeader()
{
    delete ui;
}

void WindowAddLeader::onSendCurrentTeam(Team TempTeam) //wyswietlanie aktualnych danych w oknie edycji
{
    this->ui->lineCity->setText(TempTeam.LeaderInfo.getCity());
    this->ui->lineEmail->setText(TempTeam.LeaderInfo.getEmail());
    this->ui->lineName->setText(TempTeam.LeaderInfo.getName());
    this->ui->lineOrganization->setText(TempTeam.LeaderInfo.getOrganization());
    this->ui->linePhone->setText(TempTeam.LeaderInfo.getPhone());
    this->ui->lineSurname->setText(TempTeam.LeaderInfo.getSurname());
}

void WindowAddLeader::on_lineName_textChanged(const QString &NewLeaderName)
{
    emit newLeaderNameEntered(NewLeaderName);
}

void WindowAddLeader::on_lineSurname_textChanged(const QString &NewLeaderSurname)
{
    emit newLeaderSurnameEnterned(NewLeaderSurname);
}
