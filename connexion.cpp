#include "Connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{
db= QSqlDatabase::addDatabase("QODBC");
bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A");
db.setUserName("ayoub");
db.setPassword("ayoub");

if (db.open()) test=true;
test=true;





    return  test;
}
