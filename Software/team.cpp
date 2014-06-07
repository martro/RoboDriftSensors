#include "team.h"

//------------------------------------------------//
//----------------------TEAM----------------------//
Team::Team()
{
    Name = "name";
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
    setName("name"); //nazwa teamu ma domyślme warotści
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
    setName("name");
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
    RC = false;
    MO = false;
    RD = false;
    TA = false;
    FR = false;
    ID = "0";
    Name = "name";
}
void Car::clear()
{
    RC = false;
    MO = false;
    RD = false;
    TA = false;
    FR = false;
    ID = "0";
    Name = "name";
}

void Car::setName(QString Name)
{
    this->Name = Name;
}

QString Car::getName()
{
    return this->Name;
}

void Car::setID(QString ID)
{
    this->ID = ID;
}

QString Car::getID()
{
    return this->ID;
}
void Car::setCategoryMO(bool MO)
{
    this->MO = MO;
}
void Car::setCategoryRC(bool RC)
{
    this->RC = RC;
}
void Car::setCategoryRD(bool RD)
{
    this->RD = RD;
}

void Car::setCompetitionFR(bool FR)
{
    this->FR = FR;
}

void Car::setCompetitionTA(bool TA)
{
    this->TA = TA;
}

bool Car::checkRC()
{
    return this->RC;
}

bool Car::checkMO()
{
    return this->MO;
}

bool Car::checkRD()
{
    return this->RD;
}

bool Car::checkTA()
{
    return this->TA;
}

bool Car::checkFR()
{
    return this->FR;
}
