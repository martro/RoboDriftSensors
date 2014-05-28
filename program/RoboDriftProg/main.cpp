#include <QtGui/QApplication>
#include "WindowAdmin.h"
#include "WindowRace.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowAdmin w;
    WindowRace r;
    r.show();
    
    return a.exec();
}
