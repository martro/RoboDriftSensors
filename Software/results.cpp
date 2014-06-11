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
         CurrentBestTimeMO.push_back(500*x);
         CurrentBestTimeRC.push_back(1000*x);
         CurrentBestTimeRD.push_back(750*x);
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
