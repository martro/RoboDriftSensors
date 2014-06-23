#ifndef RESULTS_H
#define RESULTS_H

#include <vector>
#include <QString>
using namespace std;


class TimesOfSingleRun
{
public:
    TimesOfSingleRun();

    QString TeamName;
    QString CarID;
    QString CarName;
    QString Position;
    vector<int> Times;

    void clear();

private:
};

class Results
{
public:
    Results();
    void clear();
    vector<int> CurrentBestTimeMO;
    vector<int> CurrentBestTimeRD;
    vector<int> CurrentBestTimeRC;
    vector<TimesOfSingleRun> ResultsOfMO;
    vector<TimesOfSingleRun> ResultsOfRD;
    vector<TimesOfSingleRun> ResultsOfRC;
    vector<TimesOfSingleRun> ResultsOfTraining;
};

#endif // RESULTS_H
