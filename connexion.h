#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>

class Connexion
{
    QSqlDatabase db;
public:
    Connexion();
    bool createconnect();
};

#endif // CONNEXION_H
