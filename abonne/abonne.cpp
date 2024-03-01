#include "abonne.h"
#include <QSqlQuery>
#include <QSqlQuery>
#include <QDebug>
abonne::abonne(int id_a, QString nom,QString prenom,QString email,QString paiment)
{
    this->id_a=id_a;
    this->nom=nom;
    this->prenom=prenom;
    this->email=email;
    this->paiment = paiment;
}



bool abonne::ajouter() {
    QSqlQuery query;

    query.prepare("INSERT INTO KHADIJA.ABONNE (ID_A, NOM, PRENOM, EMAIL, PAIMENT) "
                  "VALUES (:id_a, :nom, :prenom, :email, :paiment)");
    query.bindValue(":id_a", id_a);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":paiment", paiment);

    if (query.exec()) {
        qDebug() << "Insertion successful!";
        return true;
    } else {
        qDebug() << "Insertion failed: " << query.lastError().text();
        return false;
    }
}
QSqlQueryModel *abonne::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;

    // Exécutez votre requête SQL pour récupérer les données de la table
    query.prepare("SELECT * FROM KHADIJA.ABONNE");
    if (query.exec()) {
        // Chargez le résultat de la requête dans le modèle
        model->setQuery(query);
    } else {
        // Gérez les erreurs d'exécution de la requête si nécessaire
        qDebug() << "Erreur d'exécution de la requête :" << query.lastError().text();
    }

    return model;
}
bool abonne::modifier() {
    QSqlQuery query;

    // Vérifiez si PAIMENT est vide, si c'est le cas, utilisez une valeur par défaut ou ajustez la logique en conséquence.
    QString paimentValue = paiment.isEmpty() ? "valeur_par_defaut" : paiment;

    QString queryString = QString("UPDATE KHADIJA.ABONNE SET NOM = '%1', PRENOM = '%2', EMAIL = '%3', PAIMENT = '%4' WHERE ID_A = %5")
                             .arg(nom).arg(prenom).arg(email).arg(paimentValue).arg(id_a);

    qDebug() << "Query: " << queryString;

    return query.exec(queryString);
}

bool abonne::supprimer(int id_a) {
    QSqlQuery query;

    QString queryString = QString("DELETE FROM KHADIJA.ABONNE WHERE ID_A = %1").arg(id_a);
    qDebug() << "Query: " << queryString;

    if (query.exec(queryString)) {
        qDebug() << "Suppression réussie!";
        return true;
    } else {
        qDebug() << "Échec de la suppression. Erreur : " << query.lastError().text();
        return false;
    }
}
QSqlQueryModel* abonne::recupererAbonnes() {
    QSqlQueryModel *model = new QSqlQueryModel();

    // Exécutez votre requête SQL pour récupérer les données de la table
    QSqlQuery query;
    query.prepare("SELECT * FROM KHADIJA.ABONNE");

    if (query.exec()) {
        // Chargez le résultat de la requête dans le modèle
        model->setQuery(query);
    } else {
        // Gérez les erreurs d'exécution de la requête si nécessaire
        qDebug() << "Erreur d'exécution de la requête :" << query.lastError().text();
    }

    return model;
}
