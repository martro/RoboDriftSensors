#include "results.h"

//...............................................//
//....................Results....................//
Results::Results()
{
     ResultsOfMO.clear();
     ResultsOfRD.clear();
     ResultsOfRC.clear();
     ResultsOfTraining.clear();
}

//...............................................//
//.............TimesOfSingleTeam.................//
TimesOfSingleTeam::TimesOfSingleTeam()
{
    CarID = 0;
    Times.clear();
}

//...............................................//
//...........TimesOfSingleCategory...............//
TimesOfSingleCategory::TimesOfSingleCategory()
{
    CurrentBestTime = 0;
    TeamResults.clear();
}
