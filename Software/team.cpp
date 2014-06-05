#include "team.h"

//------------------------------------------------//
//----------------------TEAM----------------------//
Team::Team()
{
    Name = "No name";
}

void Team::setName(QString Name)
{
    this->Name = Name;
}
QString Team::getName()
{
    return this->Name;
}
void Team::clear()
{
    LeaderInfo.clear(); //leader ma domyślne warosci
    setName("no name"); //nazwa teamu ma domyślme warotści
    ListOfCars.clear();
    ListOfMembers.clear();
}


//------------------------------------------------//
//---------------------LEADER---------------------//
Leader::Leader()
{
    setCity("city");
    setEmail("email");
    setName("name");
    setOrganization("org");
    setPhone("number");
    setSurname("surname");
}

void Leader::clear()
{
    setCity("city");
    setEmail("email");
    setName("no name");
    setOrganization("org");
    setPhone("number");
    setSurname("surname");
}

void Leader::setEmail(QString Email)
{
    this->Email = Email;
}

QString Leader::getEmail()
{
    return this->Email;
}

void Leader::setPhone(QString Phone)
{
    this->Phone = Phone;
}

QString Leader::getPhone()
{
    return this->Phone;
}

void Leader::setCity(QString City)
{
    this->City = City;
}

QString Leader::getCity()
{
    return this->City;
}

void Leader::setOrganization(QString Organization)
{
    this->Organization = Organization;
}

QString Leader::getOrganization()
{
    return this->Organization;
}

//------------------------------------------------//
//---------------------MEMBER---------------------//
Member::Member()
{
    Name = "name";
    Surname = "surname";
}
void Member::clear()
{
    Name = "name";
    Surname = "surname";
}

QString Member::getName()
{
    return this->Name;
}
void Member::setName(QString Name)
{
    this->Name = Name;
}
QString Member::getSurname()
{
    return this->Surname;
}
void Member::setSurname(QString Surname)
{
    this->Surname = Surname;
}

//------------------------------------------------//
//----------------------CAR-----------------------//
Car::Car()
{
    RC = 0;
    MO = 0;
    RD = 0;
    TA = 0;
    FR = 0;
}

void Car::setName(QString Name)
{
    this->Name = Name;
}

QString Car::getName()
{
    return this->Name;
}

void Car::setID(int ID)
{
    this->ID = ID;
}

int Car::getID()
{
    return this->ID;
}

void Car::setCategory(int RC, int MO, int RD) //RC-radio controlled, MO- mobile open, RD -RoboDrift
{
    this->RC = RC;
    this->MO = MO;
    this->RD = RD;
}

int Car::checkRC()
{
    return this->RC;
}

int Car::checkMO()
{
    return this->MO;
}

int Car::checkRD()
{
    return this->RD;
}

void Car::setCompetition(int TA, int FR)//TA- time attack, FR - freestyle
{
    this->TA = TA;
    this->FR = FR;
}

int Car::checkTA()
{
    return this->TA;
}

int Car::checkFR()
{
    return this->FR;
}
