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

     for(unsigned int x=0; x<20;x++)
     {
         CurrentBestTimeMO.push_back(1000*x);
         CurrentBestTimeRC.push_back(1500*x);
         CurrentBestTimeRD.push_back(2000*x);
     }

}


//...............................................//
//...........TimesOfSingleRun...............//
TimesOfSingleRun::TimesOfSingleRun()
{
    TeamName.clear();
    CarID = "0";
    Times.clear();
}
