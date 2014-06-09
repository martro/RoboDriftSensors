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

     CurrentBestTimeMO.push_back(2000);
     CurrentBestTimeMO.push_back(4000);
     CurrentBestTimeMO.push_back(6000);
     CurrentBestTimeMO.push_back(8000);
     CurrentBestTimeMO.push_back(10000);

     CurrentBestTimeRC.push_back(2500);
     CurrentBestTimeRC.push_back(5000);
     CurrentBestTimeRC.push_back(7500);
     CurrentBestTimeRC.push_back(10000);
     CurrentBestTimeRC.push_back(12500);

     CurrentBestTimeRD.push_back(3000);
     CurrentBestTimeRD.push_back(6000);
     CurrentBestTimeRD.push_back(9000);
     CurrentBestTimeRD.push_back(12000);
     CurrentBestTimeRD.push_back(15000);
}

//...............................................//
//.............TimesOfSingleCar.................//
TimesOfSingleCar::TimesOfSingleCar()
{
    CarID = 0;
    Times.clear();
    NumberOfRuns = 0;
}

//...............................................//
//...........TimesOfSingleRun...............//
TimesOfSingleRun::TimesOfSingleRun()
{
    NumberOfRun=0;
    Times.clear();

}
