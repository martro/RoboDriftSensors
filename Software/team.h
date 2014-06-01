#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <QString>

using namespace std;

class Team
{
public:
    Team();
    void setName(QString Name);
    QString getName();
private:
    QString Name;
};


class Member
{
public:
    Member();
    string getName();
    void setName(string Name);
    string getSurname();
    void setSurname(string Surname);
private:
    string Name;
    string Surname;
};

class Leader : Member
{
public:
    Leader();
    void setEmail(string Email);
    string getEmail();

    void setPhone(string Phone);
    string getPhone();

    void setCity(string City);
    string getCity();

    void setOrganization(string Organization);
    string getOrganization();

private:
    string Email;
    string Phone;
    string City;
    string Organization;
};

class Car
{
public:
    Car();

    void setName(string Name);
    string getName();

    void setID(int ID);
    int getID();

    void setCategory(int RC, int MO, int RD); //RC-radio controlled, MO- mobile open, RD -RoboDrift
    int checkRC();
    int checkMO();
    int checkRD();

    void setCompetition(int TA, int FR);//TA- time attack, FR - freestyle
    int checkTA();
    int checkFR();
private:
    string Name;
    int ID;
    int RC, MO, RD;
    int TA, FR;
};

#endif // TEAM_H
