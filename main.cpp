#include "columntest.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ColumnTest w;
    w.show();
    return a.exec();
}
