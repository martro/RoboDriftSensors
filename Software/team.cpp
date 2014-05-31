#include "team.h"

//------------------------------------------------//
//----------------------TEAM----------------------//
Team::Team()
{
}

void Team::setName(string Name)
{
    this->Name = Name;
}
string Team::getName()
{
    return this->Name;
}


//------------------------------------------------//
//---------------------LEADER---------------------//
void Leader::setEmail(string Email)
{
    this->Email = Email;
}

string Leader::getEmail()
{
    return this->Email;
}

void Leader::setPhone(string Phone)
{
    this->Phone = Phone;
}

string Leader::getPhone()
{
    return this->Phone;
}

void Leader::setCity(string City)
{
    this->City = City;
}

string Leader::getCity()
{
    return this->City;
}

void Leader::setOrganization(string Organization)
{
    this->Organization = Organization;
}

string Leader::getOrganization()
{
    return this->Organization;
}

//------------------------------------------------//
//---------------------MEMBER---------------------//
Member::Member()
{
}
string Member::getName()
{
    return this->Name;
}
void Member::setName(string Name)
{
    this->Name = Name;
}
string Member::getSurname()
{
    return this->Surname;
}
void Member::setSurname(string Surname)
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

void Car::setName(string Name)
{
    this->Name = Name;
}

string Car::getName()
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
