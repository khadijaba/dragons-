#include "ressource.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>
#include<QTextDocument>
#include<QTableWidget>
#include <QTextCursor>
#include<QPrinter>
#include<QPainter>
#include<QtCharts>
#include<QSqlError>
#include<QSqlRecord>
ressource::ressource(int id_R,QString nom_R,QString image_path,QString descrip_R)
{
    this->id_R=id_R;
    this->nom_R=nom_R;
    this->image_path=image_path;
    this->descrip_R=descrip_R;


}
ressource::ressource(int id_R,double prix,int id_stock,int quantite)
{
    this->id_R=id_R;
    this->prix=prix;
    this->id_stock=id_stock;
    this->quantite=quantite;


}


bool ressource::ajouter_ressource() {
    QSqlQuery query;

    query.prepare("INSERT INTO KHADIJABA.RESSOURCES (ID_R,NOM_R, IMAGE_PATH,DESCRIP_R) "
                  "VALUES (:id_R, :nom_R, :image_path, :descrip_R)");
    query.bindValue(":id_R", id_R);
    query.bindValue(":nom_R", nom_R);
    query.bindValue(":image_R", image_path);
    query.bindValue(":descrip_R", descrip_R);




    if (query.exec()) {
        qDebug() << "Insertion successful!";
        return true;
    } else {
        qDebug() << "Insertion failed: " << query.lastError().text();
        return false;
    }
}
QSqlQueryModel *ressource::afficher_ressource() {
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;


    query.prepare("SELECT * FROM KHADIJABA.RESSOURCES");
    if (query.exec()) {
        // Chargez le résultat de la requête dans le modèle
        model->setQuery(query);
    } else {

        qDebug() << "Erreur d'exécution de la requête :" << query.lastError().text();
    }

    return model;
}



bool ressource::modifier_ressource() {
    QSqlQuery query;
    QString queryString = "UPDATE KHADIJABA.RESSOURCES SET NOM_R = :nom, IMAGE_PATH = :image, DESCRIP_R = :description WHERE ID_R = :id";
    query.prepare(queryString);
    query.bindValue(":nom", nom_R);
    query.bindValue(":image", image_path);
    query.bindValue(":description", descrip_R);
    query.bindValue(":id", id_R);
    qDebug() << "Query: " << queryString;
    return query.exec();
}


bool ressource::supprimer_ressource(int id_R) {
    QSqlQuery checkQuery;
    QString checkQueryString = QString("SELECT COUNT(*) FROM KHADIJABA.RESSOURCES WHERE ID_R = %1").arg(id_R);

    qDebug() << "Check Query: " << checkQueryString;

    if (checkQuery.exec(checkQueryString) && checkQuery.next()) {
        int count = checkQuery.value(0).toInt();

        if (count == 0) {
            qDebug() << "L'ID " << id_R << " n'existe pas. Aucune suppression nécessaire.";
            return false;
        }
    } else {
        qDebug() << "Échec de la vérification de l'ID. Erreur : " << checkQuery.lastError().text();
        return false;
    }

    QSqlQuery deleteQuery;
    QString deleteQueryString = QString("DELETE FROM KHADIJABA.RESSOURCES WHERE ID_R = %1").arg(id_R);

    qDebug() << "Delete Query: " << deleteQueryString;
return deleteQuery.exec(deleteQueryString);

}

QSqlQueryModel* ressource::recupererRessource() {
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM KHADIJABA.RESSOURCES");
    if (query.exec()) {
        model->setQuery(query);
    } else {
        qDebug() << "Erreur lors de la récupération des ressources :" << query.lastError().text();
    }
    return model;
}
QSqlRecord ressource::recupererRessoureEtStockBYname(QString name) {
    QSqlQuery query;
         query.prepare("SELECT r.ID_R,r.Prix, s.ID_STOCK, s.QUANTITE_S  FROM KHADIJABA.RESSOURCES r, KHADIJABA.STOCKS s WHERE r.NOM_R=:name AND r.ID_STOCK=s.ID_STOCK");
         query.bindValue(":name", name);
    if (query.exec() && query.next()) {
               return query.record(); // Return the QSqlRecord for the first row
           } else {
               qDebug() << "Erreur lors de la récupération de la quantité de la ressource :" << query.lastError().text();
               return QSqlRecord(); // Return an empty QSqlRecord if an error occurs or no rows are found
           }
}
bool ressource::importer_pdf(QPrinter &printer)
{
    QTextDocument document;
    QTextCursor cursor(&document);
    QFont font("arial", 16);
    document.setDefaultFont(font);

    QSqlQuery query("SELECT * FROM KHADIJABA.ABONNE");
    while (query.next())
    {
                int id_R = query.value("ID_R").toInt();
                QString nom_R = query.value("NOM_R").toString();
                QString descrip_R = query.value("DESCRIP_R").toString();
                QString image_path = query.value("IMAGE_PATH").toString();




        cursor.insertText(" ID_R: " + QString::number(id_R));
                cursor.insertBlock();
                cursor.insertText(" NOM_R: " + nom_R);
                cursor.insertBlock();
                cursor.insertText("DESCRIP_R: " + descrip_R);
                cursor.insertBlock();
                cursor.insertText("IMAGE_PATH: " + image_path);
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
QSqlQueryModel *ressource::getNomStatistics() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT nom_r_method, COUNT(*) AS count FROM nom_r GROUP BY nom_r_method");
    return model;
}



QSqlQueryModel * ressource::tri_nom_R(){
    QSqlQuery *q = new QSqlQuery();
             QSqlQueryModel *model = new QSqlQueryModel();
             q->prepare("SELECT * FROM KHADIJABA.RESSOURCES ORDER BY NOM_R ");
             q->exec();
             model->setQuery(*q);

             return model;

}

QSqlQueryModel* ressource::statistiquesParNom()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    // Modification de la requête pour grouper par nom
    QString query = "SELECT NOM_R, COUNT(*) FROM RESSOURCES GROUP BY NOM_R";

    model->setQuery(query);

    if (model->lastError().isValid()) {
        qDebug() << "Erreur lors de la récupération des statistiques par nom_R: " << model->lastError().text();
        delete model;
        return nullptr;
    }

    return model;
}

