#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("testt");
db.setUserName("rourouette");//inserer nom de l'utilisateur
db.setPassword("rourouette");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;



    return  test;
}
void Connection::closeConnection(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.close();}
