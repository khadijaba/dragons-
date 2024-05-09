#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connexion
{
    QSqlDatabase db;

public:
    Connexion();
    bool createconnect();
    void closeconnect();
};

#endif // CONNECTION_H
