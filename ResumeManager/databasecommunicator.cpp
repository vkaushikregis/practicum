
#include "databasecommunicator.h"
#include <QtWidgets/QMessageBox>
#include <sstream>
#include <QtWidgets/QMessageBox>
#include <stdio.h>
#include <string.h>
DatabaseCommunicator* DatabaseCommunicator::_instance = NULL;

DatabaseCommunicator::DatabaseCommunicator()
{
    //create database connection here
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");

    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("resumemanager");

    if (db.open())
    {
        //QMessageBox::critical(NULL, QObject::QT_TR_NOOP("Database Connection"), tr("Database successfully connected"));
        //return;
        QSqlQuery query;
           query.prepare("INSERT INTO resumename ( resume_name) "
                         "VALUES ( :name)");

           query.bindValue(":name", "test_first_name2");

           query.exec();

         //  if(query.)
    }
    else
    {
      //  QMessageBox::critical(NULL, QObject::tr("Database Connection"), tr("Database not connected"));
        return ;
    }
}
DatabaseCommunicator::~DatabaseCommunicator()
{
}

DatabaseCommunicator* DatabaseCommunicator::Instance()
{
    if(_instance == NULL)
        _instance = new DatabaseCommunicator;
    return _instance;
}
