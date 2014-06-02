#include "windowaddteam.h"
#include "ui_windowaddteam.h"



WindowAddTeam::WindowAddTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowAddTeam)
{
    ui->setupUi(this);
    WhatsClicked = 0;
    WidgetExists = 0;
}
WindowAddTeam::~WindowAddTeam()
{
    delete ui;
}

void WindowAddTeam::on_ButtonAddLeader_clicked()
{
    if(WhatsClicked != BUTTON_ADD_LEADER)
    {
        if(WidgetExists != 0)
            delete this->CurrentWidget;

        WidgetExists=1;

        WhatsClicked = BUTTON_ADD_LEADER;
        WindowAddLeader *leader = new WindowAddLeader;
        ui->CurrentWindow->addWidget(leader, 0,0);
        this->CurrentWidget=leader;
    }
}

void WindowAddTeam::on_ButtonEditTeam_clicked()
{
    if(WhatsClicked != BUTTON_EDIT_TEAM)
    {
        if(WidgetExists != 0)
            delete this->CurrentWidget;

        WidgetExists=1;

        WhatsClicked = BUTTON_EDIT_TEAM;
        WindowEditTeam *team = new WindowEditTeam;
        QObject::connect(team,SIGNAL(newTeamNameEntered(QString)),this,SLOT(onNewTeamNameEntered(QString)));
        QObject::connect(this, SIGNAL(EditTeam(Team)), team, SLOT(onEditTeam(Team)) );

        int IndexNumber = ui->comboBox->currentIndex()-1;
        tempTeam.setName( tempListOfTeams.at(IndexNumber).getName() );

        emit EditTeam(tempTeam);
        ui->CurrentWindow->addWidget(team, 0,0);
        this->CurrentWidget=team;
    }
}

void WindowAddTeam::onNewTeamNameEntered(const QString &teamname)
{
    this->tempTeam.setName(teamname);
}

void WindowAddTeam::on_comboBox_activated(const QString &TeamName)
{
    if(WidgetExists)
    {
        delete this->CurrentWidget;
        WidgetExists=0;
        WhatsClicked=0;
    }

    if(TeamName == "New team")
    {
        this->ui->lineNewTeamName->setEnabled(true);
        this->ui->ButtonEditTeam->setDisabled(true);
    }
    else
    {
        int IndexNumber = ui->comboBox->currentIndex()-1;
        tempTeam = tempListOfTeams.at(IndexNumber);

        this->ui->lineNewTeamName->clear();
        this->ui->lineNewTeamName->setDisabled(true);
        this->ui->ButtonEditTeam->setEnabled(true);
    }
}

void WindowAddTeam::on_ButtonSave_clicked()
{
    tempTeam.setName(this->ui->lineNewTeamName->text());
    ui->comboBox->addItem(tempTeam.getName());
    int number = ui->comboBox->findText(tempTeam.getName());
    ui->comboBox->setCurrentIndex(number);
    ui->ButtonEditTeam->setEnabled(true);
    emit this->saveButtonClicked(tempTeam);
    this->ui->lineNewTeamName->clear();
    ui->lineNewTeamName->setDisabled(true);
    tempListOfTeams.push_back(tempTeam);
}

void WindowAddTeam::onButtonAddEditTeam(vector<Team> listOfTeams)
{
    tempListOfTeams.clear();
    tempListOfTeams = listOfTeams;
    if(listOfTeams.size() != 0)
    {
        for(int x=0; x<listOfTeams.size(); x++)
        {
            this->ui->comboBox->addItem(listOfTeams.at(x).getName());
        }
    }

}
