#include "windowaddteam.h"
#include "ui_windowaddteam.h"

#define NO 0
#define YES 1

WindowAddTeam::WindowAddTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowAddTeam)
{
    ui->setupUi(this);
    WhatsClicked = 0;
    WidgetExists = 0;
    ui->ButtonSave->setDisabled(true);
    ui->ButtonEditTeam->setDisabled(true);
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

        WindowEditTeam *Edit_Team_Name = new WindowEditTeam; //tworzenie widgetu(okna z edycją nazwy)

        connect(Edit_Team_Name, SIGNAL(newTeamNameEntered(QString)), this, SLOT(onNewTeamNameEntered(QString)));
        connect(this, SIGNAL(sendCurrentTeam(Team)), Edit_Team_Name, SLOT(onSendCurrentTeam(Team)) );
        connect(this, SIGNAL(checkName(int)), Edit_Team_Name, SLOT(onCheckName(int)) ); //do wysyłania info czy nazwajest ok

        ui->CurrentWindow->addWidget(Edit_Team_Name, 0,0); //tworznie okna educji nazwy teamu
        this->CurrentWidget=Edit_Team_Name;

        emit sendCurrentTeam(tempTeam); //wyswietlanie aktualnie wybranej nazwy w linii wpisyania nazwy teamu
    }
}

void WindowAddTeam::onNewTeamNameEntered(const QString &TempText)
{
    int Found = NO;    //if name of team already exists,function  sets flag "Found", changes image and sets ButtonSave disabled.
    for(unsigned int x=0; x<tempListOfTeams.size(); x++)
    {
        if(tempListOfTeams.at(x).getName() == TempText)
        {
            Found = YES;
            x = tempListOfTeams.size()+1; //wyjscie z pętli for()
        }
    }
    if(ui->comboBox->currentText() == TempText) //sprawdza czy nowa nazwa nie jest taka sama jak przed edycją
            Found = NO;

    emit checkName(Found); //emituje info czy nazwa jest ok -> okno edit team pokazuje to na indicatorze
    if(Found == NO) //to dobrze, mozna zapisac
    {
        this->tempTeam.setName(TempText); //jeżeli nazwa jeset ok, do daj ja do tempteama

        ui->ButtonSave->setEnabled(true);
    }
    else
    {
        this->tempTeam.setName("No name");//jezele zła to zeruje nazwe
        ui->ButtonSave->setDisabled(true);
    }

}

void WindowAddTeam::on_comboBox_activated(const QString &TeamName)
{
    //tempteam.clear(); zrobic taką funkcje
    tempTeam.setName("No name");//narazie tylko tak czyszcze tempteama
    ui->ButtonSave->setEnabled(true);
    ui->ButtonEditTeam->setEnabled(true);

    if(WidgetExists)
    {
        delete this->CurrentWidget;
        WidgetExists=0;
        WhatsClicked=0;
    }

    if(ui->comboBox->currentText() != "New team") //jeżeli juz cos mamy w wektorze to zmieniamy tempteam na ten wybrany w comboboxie
    {
        for(unsigned int x=0; x<tempListOfTeams.size(); x++)
        {
            if(tempListOfTeams.at(x).getName() == TeamName)
                tempTeam=tempListOfTeams.at(x); //a tutaj tempTeam jest wybrany -> na nim pracujemy
        }
    }
}

void WindowAddTeam::on_ButtonSave_clicked()
{
    if( ui->comboBox->currentText() != "New team") //jezelei nie jest wybrana opcja new team
    {
        for(unsigned int x=0; x<tempListOfTeams.size();x++)
        {
            if(ui->comboBox->currentText() == tempListOfTeams.at(x).getName()) //znajdź team w wektorze o wybranej w CB nazwie
                tempListOfTeams.erase(tempListOfTeams.begin()+x); //usuń go zeby potem wgrać nowy
        }
    }
    tempListOfTeams.push_back(tempTeam); //zapisuje nowy team do temp.vektora

    emit this->saveButtonClicked(tempListOfTeams); //emituje do WindowAdmin aktualną liste teamów
}

void WindowAddTeam::onButtonAddEditTeam(vector<Team> listOfTeams) //odpowiedz na ilikniecie w admin window add.edit team
{
    tempListOfTeams.clear(); //czyscpi poprzedni
    tempListOfTeams = listOfTeams; //zastepuje go oficjalnym, tym z windowadmin

    ui->comboBox->clear();
    ui->comboBox->addItem("New team");
    for(unsigned int x=0; x<listOfTeams.size(); x++)
    {
        this->ui->comboBox->addItem(tempListOfTeams.at(x).getName());
    }
}

void WindowAddTeam::on_ButtonCancel_clicked()
{

}
