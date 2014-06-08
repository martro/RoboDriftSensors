#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include <vector>

using namespace std;

class Measurement
{

private:
    Measurement();
    Measurement(int TestRandomTime);

    int MeasureID;
    vector <int> CurrentMeasure;

public:
    void setCurrentMeasure(vector <int> CurrentMeasure);
};

#endif // MEASUREMENT_H
