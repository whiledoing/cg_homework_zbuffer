#include "qtobjloader.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtObjLoader w;
    w.show();
    return a.exec();
}