#include "windowrace.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowRace w;
    w.show();

    return a.exec();
}
