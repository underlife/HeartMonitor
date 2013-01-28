#include "trayiconmanager.hpp"
#include "qmenu.h"
#include <qsystemtrayicon.h>
#include <QMainWindow>

TrayIconManager::TrayIconManager(QMainWindow* p_main)
{
    QMenu *trayMenu = new QMenu(p_main);
    trayMenu->addAction(new QAction("Dodaj wpis...", p_main)); // dummy action
    trayMenu->addSeparator();
    trayMenu->addAction(new QAction("Drukuj...", p_main)); // dummy action
    // set up and show the system tray icon
    QSystemTrayIcon *trayIcon = new QSystemTrayIcon(p_main);
    trayIcon->setIcon(QIcon("heart.ico"));
    trayIcon->setContextMenu(trayMenu);
    trayIcon->show();
}

