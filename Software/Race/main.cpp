#include "windowrace.h"
#include <QApplication>
#include "measurement.h"
#include "windowraceuser.h"
#include "windowusart.h"
#include "windowusermain.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowRace w;
    w.show();
    WindowUserMain u;
    u.show();
    return a.exec();
}
