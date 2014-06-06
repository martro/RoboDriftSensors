#include "windowusermain.h"
#include "ui_windowusermain.h"

WindowUserMain::WindowUserMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowUserMain)
{
    ui->setupUi(this);
    WhatsClicked = 0;

    //WindowUserMain *windowusertemp = new WindowUserMain;
}

WindowUserMain::~WindowUserMain()
{
    delete ui;
}

void WindowUserMain::onButtonRaceClicked()
    {
    this->ui->label->hide();
    //this->ui->CentralWindow->
    }
