#include "windowusart.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowUSART w;
    w.show();

    return a.exec();
}
