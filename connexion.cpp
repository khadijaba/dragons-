#include "connection.h"

Connection::Connection()
{

}
bool Connection::creatconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("taha");
db.setPassword("taha");


if(db.open())
test=true;








    return test;
}
