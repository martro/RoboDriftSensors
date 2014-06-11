#ifndef DATATOWINDOWRACEUSER_H
#define DATATOWINDOWRACEUSER_H

#include <QString>
using namespace std;

class DataToWindowRaceUser
{
public:
    void clear();

    DataToWindowRaceUser();
    QString Difference;
    int SensorPosition;
    QString TeamName;
    QString CarName;
    QString CurrentTime;
    int LightsMode;
    QString Category;

private:

};

#endif // DATATOWINDOWRACEUSER_H
