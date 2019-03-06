#include "hs1rs.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HS1RS w;
    w.show();

    return a.exec();
}
