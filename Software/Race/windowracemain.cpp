#include "windowracemain.h"
#include "ui_windowracemain.h"

WindowRaceMain::WindowRaceMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowRaceMain)
{
    ui->setupUi(this);
    WhatsClicked = 0;
}

WindowRaceMain::~WindowRaceMain()
{
    delete ui;
}
