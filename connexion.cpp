#include "connexion.h"

Connexion::Connexion(){}

bool Connexion::createconnect()
{

QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
 bool test=false;
db.setDatabaseName("testt");
db.setUserName("rourouette");//inserer nom de l'utilisateur
db.setPassword("rourouette");//inserer mot de passe de cet utilisateur

if (db.open())test=true;


    return  test;
}
void Connexion::closeconnect(){db.close();}