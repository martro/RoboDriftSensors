#ifndef TEAM_H
#define TEAM_H

#include <QString>
#include <QString>
#include <vector>

using namespace std;

class Member
{
public:
    Member();
    QString getName();
    void setName(QString Name);
    QString getSurname();
    void setSurname(QString Surname);
private:
    QString Name;
    QString Surname;
};

class Leader : public Member
{
public:
    Leader();
    void clear();

    void setEmail(QString Email);
    QString getEmail();

    void setPhone(QString Phone);
    QString getPhone();

    void setCity(QString City);
    QString getCity();

    void setOrganization(QString Organization);
    QString getOrganization();

private:
    QString Email;
    QString Phone;
    QString City;
    QString Organization;
};

class Car
{
public:
    Car();

    void setName(QString Name);
    QString getName();

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
    QString Name;
    int ID;
    int RC, MO, RD;
    int TA, FR;
};

class Team
{
public:
    Team();
    void setName(QString Name);
    void clear();
    QString getName();
    QString Name;
    vector<Member> List_Of_Members;
    vector<Car> List_Of_Cars;
    Leader LeaderInfo;
private:
};

#endif // TEAM_H
