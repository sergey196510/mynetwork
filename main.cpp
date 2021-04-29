#include "mynetwork.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myNetwork w;
    w.show();
    return a.exec();
}
