#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{
db= QSqlDatabase::addDatabase("QODBC");
bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("khadija");//inserer nom de l'utilisateur
db.setPassword("khadija");//inserer mot de passe de cet utilisateur

if (db.open()) test=true;
test=true;





    return  test;
}
