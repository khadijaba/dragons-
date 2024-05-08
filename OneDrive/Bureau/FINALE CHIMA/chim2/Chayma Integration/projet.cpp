#include "projet.h"
#include <QDebug>

Projet::Projet(int idProjet, QString nomP, QDate dateDebutP, QDate dateFinP, int scoreP, QString statutP, QString descripP)
{
    this->idProjet = idProjet;
    this->nomP = nomP;
    this->dateDebutP = dateDebutP;
    this->dateFinP = dateFinP;
    this->scoreP = scoreP;
    this->statutP = statutP;
    this->descripP = descripP;
}

bool Projet::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO projets(ID_PROJET, NOM_PROJET, DATE_D_P, DATE_F_P, SCORE_P, STATUT_P, DESCRIP_P) "
                  "VALUES(:idProjet, :nomP, :dateDebutP, :dateFinP, :scoreP, :statutP, :descripP)");
    query.bindValue(":idProjet", idProjet);
    query.bindValue(":nomP", nomP);
    query.bindValue(":dateDebutP", dateDebutP);
    query.bindValue(":dateFinP", dateFinP);
    query.bindValue(":scoreP", scoreP);
    query.bindValue(":statutP", statutP);
    query.bindValue(":descripP", descripP);

    return query.exec();
}
QSqlQuery Projet::afficherTousProjet()
{
    QSqlQuery query("SELECT * FROM Projet");
    return query;
}
