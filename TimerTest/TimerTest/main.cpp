#include "windowtimertest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowTimerTest w;
    w.show();

    return a.exec();
}
