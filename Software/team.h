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
    void clear();
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

    void clear();

    void setID(QString ID);
    QString getID();

    void setCategoryRC(bool RC); //RC-radio controlled, MO- mobile open, RD -RoboDrift
    void setCategoryMO(bool MO);
    void setCategoryRD(bool RD);
    bool checkRC();
    bool checkMO();
    bool checkRD();

    void setCompetitionTA(bool TA);//TA- time attack, FR - freestyle
    void setCompetitionFR(bool FR);
    bool checkTA();
    bool checkFR();
private:
    QString Name;
    QString ID;
    bool RC, MO, RD; //categories
    bool TA, FR; //competition
};

class Team
{
public:
    Team();
    void setName(QString Name);
    void clear();
    QString getName();

    QString Name;
    vector<Member> ListOfMembers;
    vector<Car> ListOfCars;
    Leader LeaderInfo;
private:
};

#endif // TEAM_H
