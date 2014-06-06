#include <QtGui/QApplication>
#include "WindowAdmin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowAdmin w;
    w.show();
    return a.exec();
}
