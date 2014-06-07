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
    /*
    QMessageBox x;
    x.setText("das");
    x.show();
    saveToXML(); */

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
        connect(Window_Add_Team, SIGNAL(sendCurrentListOfTeams(vector<Team>)), this, SLOT(onSendCurrentListOfTeams(vector<Team>)));
    }
}

void WindowAdmin::onSendCurrentListOfTeams(vector<Team> tempListOfTeams)
{
    listOfTeams = tempListOfTeams;
    saveToXML(); //zapis do XML

    for(unsigned int x=0; x<listOfTeams.size();x++)
    {
        this->ui->textBrowser->append(listOfTeams.at(x).getName());
    }
    this->ui->textBrowser->append(" ");

    delete this->CurrentWidget; //usuwanie okna
    WindowAddTeam *Window_Add_Team = new WindowAddTeam;
    ui->CurrentWindow->addWidget(Window_Add_Team, 0,0);
    this->CurrentWidget=Window_Add_Team;

    connect(this, SIGNAL(ButtonAddEditTeam(vector<Team>)), Window_Add_Team, SLOT(onButtonAddEditTeam(vector<Team>)));
    connect(Window_Add_Team, SIGNAL(sendCurrentListOfTeams(vector<Team>)), this, SLOT(onSendCurrentListOfTeams(vector<Team>)));

    emit this->ButtonAddEditTeam(this->listOfTeams);
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
void WindowAdmin::saveToXML()
{

    xml_document doc;
    xml_node bib=doc.append_child("Biblioteka");
    bib.append_attribute("Adres")="ul. Ćwiartki 3/4, 50-400 Wrocaw";
    xml_node regal=bib.append_child("Regal");
    regal.append_attribute("Description")="Science";
    xml_node ksiazka=regal.append_child("Ksiazka");
    ksiazka.append_attribute("Author")="Jan Kowalski";
    ksiazka.append_attribute("Title")="Z kamera wśród studentw";


    ksiazka=regal.append_child("Ksiazka");
    ksiazka.append_attribute("Author")="Jan Brzechwa";
    ksiazka.append_attribute("Title")="Wszyscy studenci dostan pi";

    regal=bib.append_child("Regal");
    ksiazka=regal.append_child("Ksiazka");
        ksiazka.append_attribute("Author")="Jan Nowak";
        ksiazka.append_attribute("Title")="Studenci potrafi";
    doc.save_file("biblioteka.txt");
}
