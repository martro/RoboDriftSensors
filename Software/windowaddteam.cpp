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
    ui->ButtonAddCars->setDisabled(true);
    ui->ButtonAddLeader->setDisabled(true);
    ui->ButtonAddMembers->setDisabled(true);
    ui->ButtonDelete->setDisabled(true);

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
        checkSaveButton();

        WhatsClicked = BUTTON_ADD_LEADER;
        WindowAddLeader *Window_Add_Leader = new WindowAddLeader;
        ui->CurrentWindow->addWidget(Window_Add_Leader, 0,0);
        this->CurrentWidget=Window_Add_Leader;

        connect(this, SIGNAL(sendCurrentTeam(Team)), Window_Add_Leader, SLOT(onSendCurrentTeam(Team))); //posyłam teama aby wyswietli dane

        connect(Window_Add_Leader, SIGNAL(newLeaderNameEntered(QString)), this, SLOT(onNewLeaderNameEntered(QString))); //odbierana name
        connect(Window_Add_Leader, SIGNAL(newLeaderSurnameEnterned(QString)), this, SLOT(onNewLeaderSurnameEntered(QString))); //get Surname
        connect(Window_Add_Leader, SIGNAL(newLeaderPhoneEnterned(QString)), this, SLOT(onNewLeaderPhoneEntered(QString)));
        connect(Window_Add_Leader, SIGNAL(newLeaderCityEnterned(QString)), this, SLOT(onNewLeaderCityEntered(QString)));
        connect(Window_Add_Leader, SIGNAL(newLeaderEmailEnterned(QString)), this, SLOT(onNewLeaderEmailEntered(QString)));
        connect(Window_Add_Leader, SIGNAL(newLeaderOrganizationEnterned(QString)), this, SLOT(onNewLeaderOrganizationEnterned(QString)));

        emit sendCurrentTeam(tempTeam); //posyła tempteama do okna add leader

    }
}

void WindowAddTeam::onNewLeaderSurnameEntered(const QString &NewLeaderSurname)
{
    tempTeam.LeaderInfo.setSurname(NewLeaderSurname);
}

void WindowAddTeam::onNewLeaderNameEntered(const QString &NewLeaderName)
{
    tempTeam.LeaderInfo.setName(NewLeaderName);
}

void WindowAddTeam::onNewLeaderPhoneEntered(const QString &NewLeaderPhone)
{
    tempTeam.LeaderInfo.setPhone(NewLeaderPhone);
}

void WindowAddTeam::onNewLeaderCityEntered(const QString &NewLeaderCity)
{
    tempTeam.LeaderInfo.setCity(NewLeaderCity);
}

void WindowAddTeam::onNewLeaderEmailEntered(const QString &NewLeaderEmail)
{
    tempTeam.LeaderInfo.setEmail(NewLeaderEmail);
}

void WindowAddTeam::onNewLeaderOrganizationEnterned(const QString &NewLeaderOrganization)
{
    tempTeam.LeaderInfo.setOrganization(NewLeaderOrganization);
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
        this->tempTeam.setName("name");//jezele zła to zeruje nazwe
        ui->ButtonSave->setDisabled(true);
    }

}

void WindowAddTeam::on_comboBox_activated(const QString &TeamName)
{
    tempTeam.clear(); //czysci tempTeama

    checkSaveButton();

    //aktywacja wszystkich przycisków
    ui->ButtonEditTeam->setEnabled(true);
    ui->ButtonAddCars->setEnabled(true);
    ui->ButtonAddLeader->setEnabled(true);
    ui->ButtonAddMembers->setEnabled(true);

    if(WidgetExists)
    {
        delete this->CurrentWidget;
        WidgetExists=0;
        WhatsClicked=0;
    }

    if(ui->comboBox->currentText() != "New team") //jeżeli juz cos mamy w wektorze to zmieniamy tempteam na ten wybrany w comboboxie
    {
        ui->ButtonDelete->setEnabled(true);
        for(unsigned int x=0; x<tempListOfTeams.size(); x++)
        {
            if(tempListOfTeams.at(x).getName() == TeamName)
                tempTeam=tempListOfTeams.at(x); //a tutaj tempTeam jest wybrany -> na nim pracujemy
        }
    }
    else
    {
        ui->ButtonDelete->setDisabled(true); //po wybraniu opcji NEW NEAM nie mozna wybrac opcji delete
    }
}

void WindowAddTeam::on_ButtonSave_clicked()
{
    if( ui->comboBox->currentText() != "New team") //jezelei nie jest wybrana opcja new team
    {
        for(unsigned int x=0; x<tempListOfTeams.size();x++)
        {
            if(ui->comboBox->currentText() == tempListOfTeams.at(x).getName()) //znajdź team w wektorze o wybranej w CB nazwie
            {
                tempListOfTeams.erase(tempListOfTeams.begin()+x); //usuń go zeby potem wgrać nowy
                x = tempListOfTeams.size()+1;
            }
        }
    }
    tempListOfTeams.push_back(tempTeam); //zapisuje nowy team do temp.vektora

    tempTeam.clear(); //czyszczenie tempteam
    if(WidgetExists)
    {
        delete this->CurrentWidget;
        WidgetExists=0;
        WhatsClicked=0;
    }
    emit this->sendCurrentListOfTeams(tempListOfTeams); //emituje do WindowAdmin aktualną liste teamów
}

void WindowAddTeam::onButtonAddEditTeam(vector<Team> listOfTeams) //odpowiedz na ilikniecie w admin window add.edit team
{
    tempListOfTeams.clear(); //czyscpi poprzedni
    tempListOfTeams = listOfTeams; //zastepuje go oficjalnym, tym z windowadmin

    ui->comboBox->clear();
    ui->comboBox->addItem("New team");
    for(unsigned int x=0; x<tempListOfTeams.size(); x++)
    {
        this->ui->comboBox->addItem(tempListOfTeams.at(x).getName());
    }
}

void WindowAddTeam::on_ButtonAddMembers_clicked()
{
    if(WhatsClicked != BUTTON_ADD_MEMBER)
    {
        if(WidgetExists != 0)
            delete this->CurrentWidget;

        WidgetExists=1;
        WhatsClicked = BUTTON_ADD_MEMBER;
        checkSaveButton();

        WindowAddMembers *Window_Add_Members = new WindowAddMembers; //tworzenie widgetu(okna z edycją nazwy)

        connect(Window_Add_Members, SIGNAL(newMemberAdded(vector<Member>)), this, SLOT(onNewMemberAdded(vector<Member>)));
        connect(this, SIGNAL(sendCurrentTeam(Team)), Window_Add_Members, SLOT(onSendCurrentTeam(Team)) );

        ui->CurrentWindow->addWidget(Window_Add_Members, 0,0); //tworznie okna educji nazwy teamu
        this->CurrentWidget=Window_Add_Members;

        emit sendCurrentTeam(tempTeam); //wyswietlanie aktualnie wybranej nazwy w linii wpisyania nazwy teamu
    }
}

void WindowAddTeam::onNewMemberAdded(vector<Member> NewListOfMembers)
{
    tempTeam.ListOfMembers = NewListOfMembers; //zapis dodanego membera do lity
    delete this->CurrentWidget; //usuwanie okna
    WindowAddMembers *Window_Add_Members = new WindowAddMembers; //tworzenie widgetu do dodania
    ui->CurrentWindow->addWidget(Window_Add_Members, 0,0); //tworznie okna educji nazwy teamu
    this->CurrentWidget=Window_Add_Members;

    checkSaveButton();
    connect(Window_Add_Members, SIGNAL(newMemberAdded(vector<Member>)), this, SLOT(onNewMemberAdded(vector<Member>)));
    connect(this, SIGNAL(sendCurrentTeam(Team)), Window_Add_Members, SLOT(onSendCurrentTeam(Team)) ); //połączeine z oknem dodawania memberów
    emit sendCurrentTeam(tempTeam); //wyswietlanie aktualnie wybranej nazwy w linii wpisyania nazwy teamu
}

void WindowAddTeam::checkSaveButton()
{
    int Found = NO;
    if(ui->comboBox->currentText() == "New team" ) // jezeli dodaje nowy team
    {
        for(unsigned int x=0;x<tempListOfTeams.size();x++)
        {
             if( tempListOfTeams.at(x).getName() == tempTeam.getName())
             {
                 ui->ButtonSave->setDisabled(true);
                 Found = YES;
             }
        }
    }
    if(!Found) //jezeli edytuje to zawsze moge kliknac save
    {
        ui->ButtonSave->setEnabled(true);
    }
}

void WindowAddTeam::on_ButtonAddCars_clicked()
{
    if(WhatsClicked != BUTTON_ADD_CAR)
    {
        if(WidgetExists != 0)
            delete this->CurrentWidget;

        checkSaveButton();
        WidgetExists=1;
        WhatsClicked = BUTTON_ADD_CAR;

        WindowAddCar *Window_Add_Car = new WindowAddCar; //tworzenie widgetu

        connect(Window_Add_Car, SIGNAL(newCarAdded(vector<Car>)), this, SLOT(onNewCarAdded(vector<Car>)));
        connect(this, SIGNAL(sendCurrentTeam(Team)), Window_Add_Car, SLOT(onSendCurrentTeam(Team)) );

        ui->CurrentWindow->addWidget(Window_Add_Car, 0,0); //tworznie okna educji nazwy teamu
        this->CurrentWidget=Window_Add_Car;

        emit sendCurrentTeam(tempTeam); //wyswietlanie aktualnie wybranej nazwy w linii wpisyania nazwy teamu
    }
}

void WindowAddTeam::onNewCarAdded(vector<Car> NewListOfCars)
{
    tempTeam.ListOfCars = NewListOfCars; //zapis dodanego cara do lity
    delete this->CurrentWidget; //usuwanie okna
    WindowAddCar *Window_Add_Car = new WindowAddCar; //tworzenie widgetu do dodania
    ui->CurrentWindow->addWidget(Window_Add_Car, 0,0); //tworznie okna educji
    this->CurrentWidget=Window_Add_Car;

    connect(Window_Add_Car, SIGNAL(newCarAdded(vector<Car>)), this, SLOT(onNewCarAdded(vector<Car>)));
    connect(this, SIGNAL(sendCurrentTeam(Team)), Window_Add_Car, SLOT(onSendCurrentTeam(Team)) ); //połączeine z oknem dodawania memberów
    emit sendCurrentTeam(tempTeam); //wyswietlanie aktualnie wybranej nazwy w linii wpisyania nazwy teamu
}

void WindowAddTeam::on_ButtonDelete_clicked()
{
    for(unsigned int x=0; x<tempListOfTeams.size();x++)
    {
        if(tempListOfTeams.at(x).getName() == ui->comboBox->currentText() )
        {
            tempListOfTeams.erase(tempListOfTeams.begin()+x);
            x=tempListOfTeams.size()+1; //wyjscie z petli for
        }
    }
    tempTeam.clear(); //czyszczenie tempteam
    if(WidgetExists) //zamykanie okna z prawej strony
    {
        delete this->CurrentWidget;
        WidgetExists=0;
        WhatsClicked=0;
    }
    ui->ButtonDelete->setDisabled(true); //deaktywaca przycisku delete
    emit sendCurrentListOfTeams(tempListOfTeams);
}
