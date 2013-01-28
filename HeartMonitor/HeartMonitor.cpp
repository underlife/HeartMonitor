#include "HeartMonitor.h"
#include "trayiconmanager.hpp"
#include "plot.hpp"
#include "customwidget.h"

#include <QtGui/QLabel>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QAction>
#include <qboxlayout.h>
#include <qpushbutton.h>
#include <qsystemtrayicon.h>



HeartMonitor::~HeartMonitor()
{}

HeartMonitor::HeartMonitor(QWidget * parent): QMainWindow(parent)
{

    //LAYOUT
    QHBoxLayout *l_hboxLayout = new QHBoxLayout();
    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addLayout(l_hboxLayout);
    this->setLayout(mainLayout);
    //PLOT
    Plot l_plot(this);
    l_hboxLayout->addWidget(l_plot.getPlot());
    //l_plot.getPlot()->show();
    //TRAY
    TrayIconManager l_trayManager {this};
    //MENU
    QAction* a = new QAction(this);
    a->setText( "Quit" );
    this->menuBar()->addMenu( "Plik" )->addAction(a);
}

