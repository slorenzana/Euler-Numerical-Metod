#include "euler_m.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Euler_M w;
    w.show();

    return a.exec();
}
