#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{
db= QSqlDatabase::addDatabase("QODBC");
bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test");
db.setUserName("khouloud");
db.setPassword("khouloud");


if (db.open()) test=true;





    return  test;
}
void Connexion::CloseConnection(){db.close();}
