#include "windowracemain.h"
#include "ui_windowracemain.h"

WindowRaceMain::WindowRaceMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowRaceMain)
{
    ui->setupUi(this);
    WhatsClicked = 0;

    WindowUserMain *windowusertemp = new WindowUserMain;

    windowusertemp->show();

    connect(this, SIGNAL(buttonRaceClicked()),windowusertemp,SLOT(onButtonRaceClicked()));
}

WindowRaceMain::~WindowRaceMain()
{
    delete ui;
}

void WindowRaceMain::on_buttonRace_clicked()
{
    ui->image->hide();
    if(WhatsClicked != BUTTON_RACE)
    {
        if(WhatsClicked != 0)
             delete this->CurrentWidget;
        WhatsClicked = BUTTON_RACE;
        WindowRace *Window_Race = new WindowRace;

        ui->CurrentWindow->addWidget(Window_Race, 0,0);
        this->CurrentWidget=Window_Race;

        emit buttonRaceClicked();

       //here should be some connects to windowrace
    }
}

