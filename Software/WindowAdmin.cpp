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
    readFromXML();

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
    xml_document XMLListOfTeams;

    xml_node Teams=XMLListOfTeams.append_child("ListOfTeams");
    for(unsigned int x=0; x<listOfTeams.size();x++)
    {
        xml_node Team=Teams.append_child("Team");
        Team.append_attribute("Name") = listOfTeams.at(x).getName().toStdString().c_str();

        xml_node Leader = Team.append_child("Leader");
        Leader.append_attribute("Name") = listOfTeams.at(x).LeaderInfo.getName().toStdString().c_str();
        Leader.append_attribute("Surname") = listOfTeams.at(x).LeaderInfo.getSurname().toStdString().c_str();
        Leader.append_attribute("Phone") = listOfTeams.at(x).LeaderInfo.getPhone().toStdString().c_str();
        Leader.append_attribute("Email") = listOfTeams.at(x).LeaderInfo.getEmail().toStdString().c_str();
        Leader.append_attribute("City") = listOfTeams.at(x).LeaderInfo.getCity().toStdString().c_str();
        Leader.append_attribute("Organization") = listOfTeams.at(x).LeaderInfo.getOrganization().toStdString().c_str();

        for(unsigned int m=0; m<listOfTeams.at(x).ListOfMembers.size();m++) //dodwanie memberów
        {
            xml_node Member = Team.append_child("Member");
            Member.append_attribute("Name") = listOfTeams.at(x).ListOfMembers.at(m).getName().toStdString().c_str();
            Member.append_attribute("Surname") = listOfTeams.at(x).ListOfMembers.at(m).getSurname().toStdString().c_str();
        }

        for(unsigned int c=0; c<listOfTeams.at(x).ListOfCars.size();c++) //dodwanie memberów
        {
            xml_node Car = Team.append_child("Car");
            Car.append_attribute("Name") = listOfTeams.at(x).ListOfCars.at(c).getName().toStdString().c_str();
            Car.append_attribute("ID") = listOfTeams.at(x).ListOfCars.at(c).getID().toStdString().c_str();


            xml_node Category = Car.append_child("Category");
            if(listOfTeams.at(x).ListOfCars.at(c).checkRC())
                Category.append_attribute("RC") = "Yes";
            else Category.append_attribute("RC") = "NO";

            if(listOfTeams.at(x).ListOfCars.at(c).checkMO())
                Category.append_attribute("MO") = "Yes";
            else Category.append_attribute("MO") = "NO";

            if(listOfTeams.at(x).ListOfCars.at(c).checkRD())
                Category.append_attribute("RD") = "Yes";
            else Category.append_attribute("RD") = "NO";


            xml_node Competition = Car.append_child("Competition");
            if(listOfTeams.at(x).ListOfCars.at(c).checkFR())
                Competition.append_attribute("FR") = "Yes";
            else Competition.append_attribute("FR") = "NO";

            if(listOfTeams.at(x).ListOfCars.at(c).checkTA())
                Competition.append_attribute("TA") = "Yes";
            else Competition.append_attribute("TA") = "NO";

        }
    }
    XMLListOfTeams.save_file("/home/kuba/github/RoboDriftSensors/Software/data.xml");
}

void WindowAdmin::readFromXML()
{
    xml_document XMLListOfTeams;

    if (!XMLListOfTeams.load_file("/home/kuba/github/RoboDriftSensors/Software/data.xml"))
    {
        QMessageBox Error;
        Error.setText("Can't read the XML file");
    }
    else
    {
        listOfTeams.clear();

        xml_node LOT=XMLListOfTeams.child("ListOfTeams");
        for(xml_node ReadTeam=LOT.child("Team");ReadTeam;ReadTeam=ReadTeam.next_sibling("Team"))
        {
            Team TempTeam;
            TempTeam.setName(ReadTeam.attribute("Name").value());

            xml_node ReadLeader = ReadTeam.child("Leader");
            TempTeam.LeaderInfo.setName( ReadLeader.attribute("Name").value());
            TempTeam.LeaderInfo.setSurname( ReadLeader.attribute("Surname").value());
            TempTeam.LeaderInfo.setPhone( ReadLeader.attribute("Phone").value());
            TempTeam.LeaderInfo.setEmail( ReadLeader.attribute("Email").value());
            TempTeam.LeaderInfo.setCity( ReadLeader.attribute("City").value());
            TempTeam.LeaderInfo.setOrganization( ReadLeader.attribute("Organization").value());

            Member TempMember;
            for(xml_node ReadMember=ReadTeam.child("Member");ReadMember;ReadMember=ReadMember.next_sibling("Member"))
            {
                TempMember.setName( ReadMember.attribute("Name").value());
                TempMember.setSurname( ReadMember.attribute("Surname").value());
                TempTeam.ListOfMembers.push_back(TempMember);
            }
            Car TempCar;
            for(xml_node ReadCar=ReadCar.child("Car");ReadCar;ReadCar=ReadCar.next_sibling("Car"))
            {
                TempCar.setName( ReadCar.attribute("Name").value());
                TempCar.setID( ReadCar.attribute("ID").value());


                xml_node ReadCarCategory = ReadCar.child("Category");

                QString Val;
                if( Val.append( ReadCarCategory.attribute("MO").value() ) == "Yes")
                    TempCar.setCategoryMO(true);
                if( Val.append( ReadCarCategory.attribute("RC").value() ) == "Yes")
                    TempCar.setCategoryRC(true);
                if( Val.append( ReadCarCategory.attribute("RD").value() ) == "Yes")
                    TempCar.setCategoryRD(true);


                xml_node ReadCarCompetition = ReadCar.child("Competition");

                if( Val.append( ReadCarCompetition.attribute("TA").value() ) == "Yes")
                    TempCar.setCompetitionTA(true);
                if( Val.append( ReadCarCompetition.attribute("FR").value() ) == "Yes")
                    TempCar.setCompetitionFR(true);


                TempTeam.ListOfCars.push_back(TempCar);
            }
            listOfTeams.push_back(TempTeam);
        }
    }
}
