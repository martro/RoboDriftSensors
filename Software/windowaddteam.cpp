#include "windowaddteam.h"
#include "ui_windowaddteam.h"

WindowAddTeam::WindowAddTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowAddTeam)
{
    ui->setupUi(this);
}

WindowAddTeam::~WindowAddTeam()
{
    delete ui;
}
