#ifndef RESULTS_H
#define RESULTS_H

#include <vector>
#include <QString>
using namespace std;

class TimesOfSingleTeam
{
public:
    TimesOfSingleTeam();
private:
    QString TeamName;
    int CarID;
    vector<int> Times;
};

class TimesOfSingleCategory
{
public:
    TimesOfSingleCategory();

private:
    int CurrentBestTime;
    vector<TimesOfSingleTeam> TeamResults;
};

class Results
{
public:
    Results();
private:
    vector<TimesOfSingleCategory> ResultsOfMO;
    vector<TimesOfSingleCategory> ResultsOfRD;
    vector<TimesOfSingleCategory> ResultsOfRC;
    vector<TimesOfSingleCategory> ResultsOfTraining;
};

#endif // RESULTS_H
