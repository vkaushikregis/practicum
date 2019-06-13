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

private:
    DatabaseCommunicator();
    static DatabaseCommunicator *_instance;

    std::string userName;
    std::string password;
    std::string connectString;
};

#endif // DATABASECOMMUNICATOR_H
