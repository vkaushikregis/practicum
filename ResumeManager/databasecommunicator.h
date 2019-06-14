#ifndef DATABASECOMMUNICATOR_H
#define DATABASECOMMUNICATOR_H
#include <QtSql>
#include <QSql>
#include <QSqlDatabase>

class DatabaseCommunicator
{
public:
    static DatabaseCommunicator* Instance();
    ~DatabaseCommunicator();
    bool getExistingResumesFromDB(std::string &msg);
    bool getPersonalDetailFromDB(int resume_fk,std::string &msg);

private:
    DatabaseCommunicator();
    static DatabaseCommunicator *_instance;

    QString userName;
    QString password;
    QString databaseName;
    QString hostName;
    QSqlDatabase db;
};

#endif // DATABASECOMMUNICATOR_H
