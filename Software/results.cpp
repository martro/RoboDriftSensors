#include "results.h"

//...............................................//
//....................Results....................//
Results::Results()
{
     ResultsOfMO.clear();
     ResultsOfRD.clear();
     ResultsOfRC.clear();
     ResultsOfTraining.clear();
     CurrentBestTimeMO.clear();
     CurrentBestTimeRD.clear();
     CurrentBestTimeRC.clear();
}
void Results::clear()
{
    ResultsOfMO.clear();
    ResultsOfRD.clear();
    ResultsOfRC.clear();
    ResultsOfTraining.clear();
    CurrentBestTimeMO.clear();
    CurrentBestTimeRD.clear();
    CurrentBestTimeRC.clear();
}


//...............................................//
//...........ResultsOfSingleCar...............//
ResultsOfSingleCar::ResultsOfSingleCar()
{
    TeamName.clear();
    CarName.clear();
    CarID = "0";
    Runs.clear();
    Position.clear();
}

void ResultsOfSingleCar::clear()
{
    TeamName.clear();
    CarName.clear();
    CarID = "0";
    Runs.clear();
    Position.clear();
}
