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
        connect(Window_Add_Team, SIGNAL(sendCurrentListOfTeams(vector<Team>)), this, SLOT(onSendCurrentListOfTeams(vector<Team>)));
    }
}

void WindowAdmin::onSendCurrentListOfTeams(vector<Team> tempListOfTeams)
{
    //saveToXML();
    listOfTeams = tempListOfTeams;
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
using namespace pugi;
void WindowAdmin::saveToXML()
{
    xml_document doc;

    xml_node XMLListOfTeams = doc.append_child("List of teams");

    /*
    for(unsigned int x = 0; x<lista_regal.size(); x++)
    {
        xml_node regal = biblioteka.append_child("regal");
        regal.append_attribute("numer") = x+1;
        regal.append_attribute("gatunek") = get_genre_regal(x).c_str();

        for(unsigned int y=0; y<lista_regal.at(x).r_ks_size(); y++)
        {
            xml_node ksiazka = regal.append_child("ksiazka");
            ksiazka.append_attribute("tytul") = lista_regal.at(x).r_get_ks_title(y).c_str();
            ksiazka.append_attribute("autor") = lista_regal.at(x).r_get_author(y).c_str();
            ksiazka.append_attribute("nr_karty_bibliotecznej") = lista_regal.at(x).r_get_ks_number(y);
        }
        for(unsigned int y=0; y<lista_regal.at(x).r_cz_size(); y++)
        {
            xml_node czasopismo = regal.append_child("czasopismo");
            czasopismo.append_attribute("tytul") = lista_regal.at(x).r_get_cz_title(y).c_str();
            czasopismo.append_attribute("numer") = lista_regal.at(x).r_get_number(y);
            czasopismo.append_attribute("nr_karty_bibliotecznej") = lista_regal.at(x).r_get_cz_number(y);
        }
    }
    */
    doc.save_file("List Of Teams.xml");
}
