#include "windowrace.h"
#include <QApplication>
#include "measurement.h"
#include "windowraceuser.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowRace w;
    w.show();
    WindowRaceUser u;
    u.show();
    return a.exec();
}
