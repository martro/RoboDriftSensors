#include "windowrace.h"
#include <QApplication>
#include "measurement.h"
#include "windowraceuser.h"
#include "windowusart.h"
#include "windowusermain.h"
#include "windowracemain.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowRaceMain w;
    w.show();
    WindowUserMain u;
    u.show();
    return a.exec();
}
