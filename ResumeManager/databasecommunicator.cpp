
#include "databasecommunicator.h"
#include <QtWidgets/QMessageBox>
#include <sstream>
#include <QtWidgets/QMessageBox>
#include <stdio.h>
#include <string.h>
#include "globalproductdata.h"

DatabaseCommunicator* DatabaseCommunicator::_instance = NULL;

DatabaseCommunicator::DatabaseCommunicator()
{
    isDatabaseConnected = false;

    userName = "root";
    password = "root";
    databaseName = "resumemanager";
    hostName = "127.0.0.1";

    //create database connection here
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(hostName);
    db.setUserName(userName);
    db.setPassword(password);
    db.setDatabaseName(databaseName);
    db.open();

    if (db.open())
    {
        isDatabaseConnected = true;
       /* //QMessageBox::critical(NULL, QObject::QT_TR_NOOP("Database Connection"), tr("Database successfully connected"));
        //return;
        QSqlQuery query;
           query.prepare("INSERT INTO resumename ( resume_name) "
                         "VALUES ( :name)");

           query.bindValue(":name", "test_first_name2");

           query.exec();

         //  if(query.)*/
    }
    else
    {
        isDatabaseConnected = false;
      //  QMessageBox::critical(NULL, QObject::tr("Database Connection"), tr("Database not connected"));
        return ;
    }
}
DatabaseCommunicator::~DatabaseCommunicator()
{
    db.close();
}

DatabaseCommunicator* DatabaseCommunicator::Instance()
{
    if(_instance == NULL)
        _instance = new DatabaseCommunicator;
    return _instance;
}

bool DatabaseCommunicator::getExistingResumesFromDB(std::string &msg)
{
    gResumeNamesList.clear();
    if(db.open())
    {
        QSqlQuery query;
        query.exec("SELECT resume_name_pk,resume_name FROM resumemanager.resumename");
        if(!query.exec())
        {
            msg = "There are no resumes in the database currently";
            return false;
        }
        if (query.next()) {
            ResumeNames resumeObj;
            resumeObj.mResume_pk = query.value(0).toInt();
            resumeObj.mResume_name = query.value(1).toString().toStdString();
            gResumeNamesList.push_back(resumeObj);

        }
    }

    return true;
}
 bool DatabaseCommunicator::getPersonalDetailFromDB(int resume_fk,std::string &msg)
 {

     return true;
 }
