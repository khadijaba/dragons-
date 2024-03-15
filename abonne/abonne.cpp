#include "abonne.h"
#include <QSqlQuery>
#include <QSqlQuery>
#include <QDebug>
#include<QPrinter>
#include <QSqlQueryModel>
#include<QTextDocument>
#include<QTableWidget>
#include <QTextCursor>
abonne::abonne(int id_a, QString nom,QString prenom,QString email,QString paiment,QString image_path)
{
    this->id_a=id_a;
    this->nom=nom;
    this->prenom=prenom;
    this->email=email;
    this->paiment = paiment;
    this->image_path=image_path;

}



bool abonne::ajouter() {
    QSqlQuery query;

    query.prepare("INSERT INTO KHADIJABA.ABONNE (ID_A, NOM, PRENOM, EMAIL, PAIMENT,IMAGE_PATH) "
                  "VALUES (:id_a, :nom, :prenom, :email, :paiment, :image_path)");
    query.bindValue(":id_a", id_a);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":paiment", paiment);
    query.bindValue(":image_path",image_path);


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


    query.prepare("SELECT * FROM KHADIJABA.ABONNE");
    if (query.exec()) {
        // Chargez le résultat de la requête dans le modèle
        model->setQuery(query);
    } else {

        qDebug() << "Erreur d'exécution de la requête :" << query.lastError().text();
    }

    return model;
}


bool abonne::modifier() {
    QSqlQuery query;


    QString paimentValue = paiment.isEmpty() ? "valeur_par_defaut" : paiment;

    QString queryString = QString("UPDATE KHADIJABA.ABONNE SET NOM = '%1', PRENOM = '%2', EMAIL = '%3', PAIMENT = '%4' WHERE ID_A = %5")
                             .arg(nom).arg(prenom).arg(email).arg(paimentValue).arg(id_a);

    qDebug() << "Query: " << queryString;

    return query.exec(queryString);
}


bool abonne::supprimer(int id_a) {
    QSqlQuery checkQuery;
    QString checkQueryString = QString("SELECT COUNT(*) FROM KHADIJABA.ABONNE WHERE ID_A = %1").arg(id_a);

    qDebug() << "Check Query: " << checkQueryString;

    if (checkQuery.exec(checkQueryString) && checkQuery.next()) {
        int count = checkQuery.value(0).toInt();

        if (count == 0) {
            qDebug() << "L'ID " << id_a << " n'existe pas. Aucune suppression nécessaire.";
            return false;
        }
    } else {
        qDebug() << "Échec de la vérification de l'ID. Erreur : " << checkQuery.lastError().text();
        return false;
    }

    QSqlQuery deleteQuery;
    QString deleteQueryString = QString("DELETE FROM KHADIJABA.ABONNE WHERE ID_A = %1").arg(id_a);

    qDebug() << "Delete Query: " << deleteQueryString;
return deleteQuery.exec(deleteQueryString);

}

QSqlQueryModel* abonne::recupererAbonnes() {
    QSqlQueryModel *model = new QSqlQueryModel();


    QSqlQuery query;
    query.prepare("SELECT * FROM KHADIJABA.ABONNE");

    if (query.exec()) {

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

                QString image_path = query.value("IMAGE_PATH").toString();



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
                cursor.insertText(" IMAGE_PATH: " + image_path);
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


QSqlQueryModel* abonne::tri()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM KHADIJABA.ABONNEE ORDER BY id_a ASC");
    return model;
}
QSqlQueryModel* abonne::statistiquePaiement()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString query = "SELECT PAIMENT, COUNT(*) FROM ABONNE GROUP BY PAIMENT";

    model->setQuery(query);

    if (model->lastError().isValid()) {
        qDebug() << "Erreur lors de la récupération des statistiques de paiment: " << model->lastError().text();
        delete model;
        return nullptr;
    }

    return model;
}
QSqlQueryModel *abonne::tri(const QString &orderBy)
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query;
    QString queryString = "SELECT * FROM abonne ORDER BY " + orderBy;
    query.prepare(queryString);

    if (query.exec()) {
        model->setQuery(query);
        return model;
    } else {
        qDebug() << "Error in tri query:" << query.lastError().text();
        delete model;
        return nullptr;
    }
}
void abonne::ajouterPhoto(const QPixmap &image) {
    photo = image;
}
