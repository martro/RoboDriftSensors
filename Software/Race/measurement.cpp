#include "measurement.h"

Measurement::Measurement()
{

}

Measurement::Measurement(int TestRandomTime)
{

    CurrentMeasure.push_back(100+TestRandomTime);
    CurrentMeasure.push_back(3000+TestRandomTime);
    CurrentMeasure.push_back(10000+TestRandomTime);
    CurrentMeasure.push_back(20000+TestRandomTime);
    CurrentMeasure.push_back(70000+TestRandomTime);
    CurrentMeasure.push_back(120000+TestRandomTime);
}


void Measurement::setCurrentMeasure(vector <int> CurrentMeasure)
{
    this->CurrentMeasure.clear();
    this->CurrentMeasure=CurrentMeasure;
}
