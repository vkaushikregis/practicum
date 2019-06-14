#include "mainwindow.h"
#include <QApplication>
#include "databasecommunicator.h"
#include "globalproductdata.h"
#include <QtWidgets/QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DatabaseCommunicator::Instance();
    if(!isDatabaseConnected)
    {
        QMessageBox::critical(NULL, QObject::tr("Database Connection"), QObject::tr("Database not connected,Exiting!"));
        return 1;
    }
    MainWindow w;
    w.show();

    return a.exec();
}
