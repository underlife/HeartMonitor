#ifndef HEARTMONITOR_H
#define HEARTMONITOR_H

#include <QtGui/QMainWindow>

class HeartMonitor : public QMainWindow
{
    Q_OBJECT
public:
    HeartMonitor(QWidget * parent=0);
    virtual ~HeartMonitor();
};

#endif // HEARTMONITOR_H
