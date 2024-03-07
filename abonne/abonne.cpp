#include "abonne.h"
#include <QSqlQuery>
#include <QSqlQuery>
#include <QDebug>
#include<QPrinter>
#include <QSqlQueryModel>
#include<QTextDocument>
#include<QTableWidget>
#include <QTextCursor>
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

    query.prepare("INSERT INTO KHADIJABA.ABONNE (ID_A, NOM, PRENOM, EMAIL, PAIMENT) "
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
    query.prepare("SELECT * FROM KHADIJABA.ABONNE");
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

    // Vérifiez si PAIMENT est vide, si c'est le cas
    QString paimentValue = paiment.isEmpty() ? "valeur_par_defaut" : paiment;

    QString queryString = QString("UPDATE KHADIJABA.ABONNE SET NOM = '%1', PRENOM = '%2', EMAIL = '%3', PAIMENT = '%4' WHERE ID_A = %5")
                             .arg(nom).arg(prenom).arg(email).arg(paimentValue).arg(id_a);

    qDebug() << "Query: " << queryString;

    return query.exec(queryString);
}

bool abonne::supprimer(int id_a) {
    QSqlQuery query;

    QString queryString = QString("DELETE FROM KHADIJABA.ABONNE WHERE ID_A = %1").arg(id_a);
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
    query.prepare("SELECT * FROM KHADIJABA.ABONNE");

    if (query.exec()) {
        // Chargez le résultat de la requête dans le modèle
        model->setQuery(query);
    } else {
        // Gérez les erreurs d'exécution de la requête si nécessaire
        qDebug() << "Erreur d'exécution de la requête :" << query.lastError().text();
    }

    return model;

}
bool abonne::importer_pdf(QPrinter &printer)
{
    QTextDocument document;
    QTextCursor cursor(&document);
    QFont font("arial", 16);
    document.setDefaultFont(font);

    QSqlQuery query("SELECT * FROM KHADIJABA.ABONNE");
    while (query.next())
    {
        int id_a = query.value("ID_A").toInt();
                QString nom = query.value("NOM").toString();
                QString prenom = query.value("PRENOM").toString();
                QString email = query.value("EMAIL").toString();
                QString paiment = query.value("PAIMENT").toString();

        cursor.insertText(" ID_A: " + QString::number(id_a));
                cursor.insertBlock();
                cursor.insertText(" NOM: " + nom);
                cursor.insertBlock();
                cursor.insertText("PRENOM: " + prenom);
                cursor.insertBlock();
                cursor.insertText("EMAIL: " + email);
                cursor.insertBlock();
                cursor.insertText("PAIMENT: " + paiment);
                cursor.insertBlock();

                cursor.insertBlock();
                cursor.insertBlock();
            }
    if (document.isEmpty()) {
                    qDebug() << "The document is empty. No data to save to PDF.";
                    return false;
                } else {
                    document.print(&printer);
                    qDebug() << "Printing the PDF document is done.";
                    return true;
                }

}

int abonne::nombreTotalAbonnes() {
    QSqlQuery query;
    if (query.exec("SELECT COUNT(*) FROM abonne")) {
        if (query.next()) {
            return query.value(0).toInt();
        }
    }
    return 0;
}





/*void abonne::afficherRepartitionPaiement() {
    QSqlQuery query;
    if (query.exec("SELECT paiment, COUNT(*) FROM abonne GROUP BY paiment")) {
        qDebug() << "Répartition par méthode de paiement : ";
        while (query.next()) {
            qDebug() << "Méthode de paiement : " << query.value(0).toString() << " - Nombre d'abonnés : " << query.value(1).toInt();
        }
    }
}
*/
