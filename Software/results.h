#ifndef RESULTS_H
#define RESULTS_H

#include <vector>
#include <QString>
using namespace std;


class ResultsOfSingleCar
{
public:
    ResultsOfSingleCar();

    QString TeamName;
    QString CarID;
    QString CarName;
    QString Position;
    vector<int> BestLap;
    vector< vector<int> > Runs;

    void clear();
};

class Results
{
public:
    Results();
    void clear();
    vector<int> CurrentBestTimeMO;
    vector<int> CurrentBestTimeRD;
    vector<int> CurrentBestTimeRC;
    vector<ResultsOfSingleCar> ResultsOfMO;
    vector<ResultsOfSingleCar> ResultsOfRD;
    vector<ResultsOfSingleCar> ResultsOfRC;
    vector<ResultsOfSingleCar> ResultsOfTraining;
};

#endif // RESULTS_H
