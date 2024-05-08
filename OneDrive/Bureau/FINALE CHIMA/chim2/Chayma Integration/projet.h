#ifndef PROJET_H
#define PROJET_H

#include <QString>
#include <QDateTime>
#include <QtSql/QSqlQuery>

class Projet {
private:
    int idProjet;
    QString nomP;
    QDate dateDebutP;
    QDate dateFinP;
    int scoreP;
    QString statutP;
    QString descripP;

public:
    Projet(int idProjet, QString nomP, QDate dateDebutP, QDate dateFinP, int scoreP, QString statutP, QString descripP);
    bool ajouter();
    QSqlQuery afficherTousProjet();
};

#endif // PROJET_H
