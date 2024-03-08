#include "employe.h"
#include <QSqlQuery>
#include <QDebug>

employe::employe(int Id, QString Nom, QString Prenom, QString Email, QString Type,QString presence)
{
    this->Id = Id;
    this->Nom = Nom;
    this->Prenom = Prenom;
    this->Email = Email;
    this->Type = Type;
    this->presence= presence;
}

bool employe::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO AYOUB.EMPLOYE (ID, NOM, PRENOM, EMAIL,TYPE,PRESENCE) VALUES ( :id ,:Nom, :Prenom, :Email, :Type, :presence)");
    query.bindValue(":id", Id);
    query.bindValue(":Nom", Nom);
    query.bindValue(":Prenom", Prenom);
    query.bindValue(":Email", Email);
    query.bindValue(":Type", Type);
    query.bindValue(":presence", presence);

    query.exec();
    return query.exec();
}



QSqlQueryModel *employe::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;

    // Exécutez votre requête SQL pour récupérer les données de la table
    query.prepare("SELECT * FROM EMPLOYE");
    query.exec();
    return model;
}

bool employe::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE AYOUB.EMPLOYE SET  NOM = :Nom, PRENOM = :Prenom, EMAIL = :Email, TYPE = :Type, PRESENCE = :presence,  WHERE ID = :Id");
    query.bindValue(":Id", Id);
    query.bindValue(":Nom", Nom);
    query.bindValue(":Prenom", Prenom);
    query.bindValue(":Email", Email);
    query.bindValue(":Type", Type);
    query.bindValue(":présence", presence);

    return query.exec();
}

bool employe::supprimer(int Id) {
    {
        QSqlQuery query;
        QString id = QString::number(Id);
        query.prepare("DELETE FROM EMPLOYE WHERE ID = :Id");
        query.bindValue(":id", Id);
        return query.exec();
    }

}
employe employe::rechercher(int Id)
    {
        QSqlQuery query;
        QString res= QString::number(Id);
        query.prepare("SELECT * FROM EMPLOYE WHERE ID = :Id");
        query.bindValue(":Id", res);

        if (query.exec() && query.next()) {
            // Récupérer les informations de l'equipement
            QString Nom = query.value("NOM").toString();
            QString Prenom = query.value("PRENOM").toString();
            QString Email = query.value("EMAIL").toString();
            QString Type = query.value("TYPE").toString();
            QString presence = query.value("PRESENCE").toString();


            // Créer un nouvel objet equipement avec les informations récupérées
            return employe(Id,Nom, Prenom, Email,Type,presence);
        } else {
            // En cas d'erreur ou si l'equipement n'est pas trouvé, retourner nullptr ou gérer l'erreur selon vos besoins
            return employe();
        }
    }

