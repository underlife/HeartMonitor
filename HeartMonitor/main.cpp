#include <QtGui/QApplication>
#include "HeartMonitor.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    HeartMonitor foo;
    foo.resize(500,500);
    foo.show();
    return app.exec();
}
