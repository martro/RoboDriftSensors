#include "windowracecommunication.h"
#include "ui_windowracecommunication.h"

WindowRaceCommunication::WindowRaceCommunication(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowRaceCommunication)
{
    ui->setupUi(this);
}

WindowRaceCommunication::~WindowRaceCommunication()
{
    delete ui;
}
