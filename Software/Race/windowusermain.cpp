#include "windowusermain.h"
#include "ui_windowusermain.h"
#include "windowraceuser.h"

WindowUserMain::WindowUserMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowUserMain)
{
    ui->setupUi(this);
    WhatsClicked = 0;

}

WindowUserMain::~WindowUserMain()
{
    delete ui;
}

void WindowUserMain::onButtonRaceClicked()
    {
    this->ui->label->hide();
    WindowRaceUser *windowraceuser = new WindowRaceUser;
    this->ui->CentralWindow->addWidget(windowraceuser, 0,0);
    this->CurrentWidget=windowraceuser;
    }

void WindowUserMain::onButtonSettingsClicked()
{
    this->ui->label->show();
   // delete this->CurrentWidget;
    /*if(WhatsClicked != BUTTON_)
    {

        if(WhatsClicked != 0)
             delete this->CurrentWidget;
        WhatsClicked = BUTTON_NEW_RACE;
        WindowNewRace *race = new WindowNewRace;

        ui->CurrentWindow->addWidget(race, 0,0);
        this->CurrentWidget=race;
    }*/
}
