#ifndef RESULTS_H
#define RESULTS_H

#include <vector>
#include <QString>
using namespace std;


class TimesOfSingleRun
{
public:
    TimesOfSingleRun();
    void setTeamName(QString Name);
    QString getTeamName();

    void setCarID(QString ID);
    QString getCarID();

private:
    QString TeamName;
    QString CarID;
    vector<int> Times;
};

class Results
{
public:
    Results();
    vector<int> CurrentBestTimeMO;
    vector<int> CurrentBestTimeRD;
    vector<int> CurrentBestTimeRC;
    vector<TimesOfSingleRun> ResultsOfMO;
    vector<TimesOfSingleRun> ResultsOfRD;
    vector<TimesOfSingleRun> ResultsOfRC;
    vector<TimesOfSingleRun> ResultsOfTraining;
};

#endif // RESULTS_H
