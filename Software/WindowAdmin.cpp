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
        WindowAddTeam *Window_Add_Team = new WindowAddTeam;

        ui->CurrentWindow->addWidget(Window_Add_Team, 0,0);
        this->CurrentWidget=Window_Add_Team;

        connect(this, SIGNAL(ButtonAddEditTeam(vector<Team>)), Window_Add_Team, SLOT(onButtonAddEditTeam(vector<Team>)));
        emit this->ButtonAddEditTeam(this->listOfTeams);
        connect(Window_Add_Team, SIGNAL(saveButtonClicked(vector<Team>)), this, SLOT(onSaveButtonClicked(vector<Team>)));
    }
}

void WindowAdmin::onSaveButtonClicked(vector<Team> tempListOfTeams)
{
    listOfTeams = tempListOfTeams;
    for(unsigned int x=0; x<listOfTeams.size();x++)
    {
        this->ui->textBrowser->append(listOfTeams.at(x).getName());
    }
    this->ui->textBrowser->append(" ");
    emit this->ButtonAddEditTeam(listOfTeams); //wysyła z powrotem aktualna listedo okna add team
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
