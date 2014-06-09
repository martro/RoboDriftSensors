#ifndef RESULTS_H
#define RESULTS_H

#include <vector>
#include <QString>
using namespace std;

class TimesOfSingleRun
{
public:
    TimesOfSingleRun();
private:
    int NumberOfRun;
    vector<int> Times;
};

class TimesOfSingleCar
{
public:
    TimesOfSingleCar();

private:
    QString TeamName;
    int CarID;
    int NumberOfRuns;
    vector<TimesOfSingleRun> Times;
};

class Results
{
public:
    Results();
    vector<int> CurrentBestTimeMO;
    vector<int> CurrentBestTimeRD;
    vector<int> CurrentBestTimeRC;
    vector<TimesOfSingleCar> ResultsOfMO;
    vector<TimesOfSingleCar> ResultsOfRD;
    vector<TimesOfSingleCar> ResultsOfRC;
    vector<TimesOfSingleCar> ResultsOfTraining;
};

#endif // RESULTS_H
