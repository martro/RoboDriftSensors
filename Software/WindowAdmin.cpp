#include "WindowAdmin.h"
#include "ui_WindowAdmin.h"
#include "QLabel"


WindowAdmin::WindowAdmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowAdmin)
{
    ui->setupUi(this);
    WhatsClicked = 0;
}

WindowAdmin::~WindowAdmin()
{
    delete ui;
}

void WindowAdmin::on_ButtonAddEditTeam_clicked()
{
    ui->label->hide();
    if(WhatsClicked != BUTTON_ADD_TEAM)
    {

        if(WhatsClicked != 0)
             delete this->CurrentWidget;
        WhatsClicked = BUTTON_ADD_TEAM;
        WindowAddTeam *team = new WindowAddTeam;

        connect(this, SIGNAL(ButtonAddEditTeam(vector<Team>)), team, SLOT(onButtonAddEditTeam(vector<Team>)));
        emit this->ButtonAddEditTeam(listOfTeams);
        connect(team, SIGNAL(saveButtonClicked(Team)), this, SLOT(onSaveButtonClicked(Team)));


        ui->CurrentWindow->addWidget(team, 0,0);
        this->CurrentWidget=team;
    }
}

void WindowAdmin::onSaveButtonClicked(Team tempTeam)
{
    listOfTeams.push_back(tempTeam);
    this->ui->textBrowser->append(listOfTeams.back().getName());
}


void WindowAdmin::on_ButtonNewRace_clicked()
{
    ui->label->hide();
    if(WhatsClicked != BUTTON_NEW_RACE)
    {

        if(WhatsClicked != 0)
             delete this->CurrentWidget;
        WhatsClicked = BUTTON_NEW_RACE;
        WindowNewRace *race = new WindowNewRace;

        ui->CurrentWindow->addWidget(race, 0,0);
        this->CurrentWidget=race;
    }
}
