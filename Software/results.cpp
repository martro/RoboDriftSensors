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
//...........TimesOfSingleRun...............//
TimesOfSingleRun::TimesOfSingleRun()
{
    TeamName.clear();
    CarName.clear();
    CarID = "0";
    Times.clear();
    Position.clear();
}

void TimesOfSingleRun::clear()
{
    TeamName.clear();
    CarName.clear();
    CarID = "0";
    Times.clear();
    Position.clear();
}
