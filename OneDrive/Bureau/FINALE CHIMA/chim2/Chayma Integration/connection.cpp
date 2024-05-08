#include "connection.h"

connexion::connexion()
{

}

bool connexion::createconnection()
{
    bool test=false;
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");

    db.setDatabaseName("test-bd");
    db.setUserName("khadijaba");
    db.setPassword("khadijaba");
    if(db.open())
        test=true;
    return test;
}

void connexion::closeConnection()
{
    db.close();
}
