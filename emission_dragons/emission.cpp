#include "emission.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QPrinter>
#include <QTextDocument>
#include <QTableWidget>
#include <QTextCursor>
#include <QtCharts>
emission::emission(int idEmission, QString titre, QString description, QDate dateDiffusion, QString categorie, QTime duree) :
    idEmission(idEmission), titre(titre), description(description), dateDiffusion(dateDiffusion), categorie(categorie), duree(duree)
{}

bool emission::ajouter() {
    QSqlQuery query;

    query.prepare("INSERT INTO KHOULOUD.EMISSION (ID_EMISSION, TITRE, DESCRIPTION, DATE_DIFFUSION, CATÉGORIE, DURÉE) "
                  "VALUES (:idEmission, :titre, :description, :dateDiffusion, :categorie, :duree)");
    query.bindValue(":idEmission", idEmission);
    query.bindValue(":titre", titre);
    query.bindValue(":description", description);
    query.bindValue(":dateDiffusion", dateDiffusion);
    query.bindValue(":categorie", categorie);
    query.bindValue(":duree", duree);

    if (query.exec()) {
        qDebug() << "Insertion successful!";
        return true;
    } else {
        qDebug() << "Insertion failed: " << query.lastError().text();
        return false;
    }
}

QSqlQueryModel *emission::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;

    query.prepare("SELECT * FROM KHOULOUD.EMISSION");
    if (query.exec()) {
        model->setQuery(query);
    } else {
        qDebug() << "Erreur d'exécution de la requête :" << query.lastError().text();
    }

    return model;
}

bool emission::modifier() {
    QSqlQuery query;

    // Préparation de la requête avec des guillemets autour des noms de colonnes sensibles.
    query.prepare(R"(UPDATE KHOULOUD.EMISSION
                     SET TITRE = :titre,
                         DESCRIPTION = :description,
                         DATE_DIFFUSION = :dateDiffusion,
                         "CATÉGORIE" = :categorie,
                         "DURÉE" = :duree
                     WHERE ID_EMISSION = :idEmission)");

    query.bindValue(":titre", titre);
    query.bindValue(":description", description);
    query.bindValue(":dateDiffusion", dateDiffusion);
    query.bindValue(":categorie", categorie);
    // Assurez-vous que la conversion de QTime en un format TIMESTAMP compatible est effectuée si nécessaire.
    query.bindValue(":duree", duree);
    query.bindValue(":idEmission", idEmission);

    if (!query.exec()) {
        qDebug() << "Modification failed: " << query.lastError().text();
        return false;
    }

    return true;
}

QString emission::getLastSqlError() const {
    return query.lastError().text();
}



bool emission::supprimer(int idEmission) {
    QSqlQuery checkQuery;
    QString checkQueryString = QString("SELECT COUNT(*) FROM KHOULOUD.EMISSION WHERE ID_EMISSION = %1").arg(idEmission);

    if (checkQuery.exec(checkQueryString) && checkQuery.next()) {
        int count = checkQuery.value(0).toInt();

        if (count == 0) {
            qDebug() << "L'ID " << idEmission << " n'existe pas. Aucune suppression nécessaire.";
            return false;
        }
    } else {
        qDebug() << "Échec de la vérification de l'ID. Erreur : " << checkQuery.lastError().text();
        return false;
    }

    QSqlQuery deleteQuery;
    QString deleteQueryString = QString("DELETE FROM KHOULOUD.EMISSION WHERE ID_EMISSION = %1").arg(idEmission);

    return deleteQuery.exec(deleteQueryString);
}

QSqlQueryModel *emission::recupererEmissions() {
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;

    query.prepare("SELECT * FROM KHOULOUD.EMISSION");

    if (query.exec()) {
        model->setQuery(query);
    } else {
        qDebug() << "Erreur d'exécution de la requête :" << query.lastError().text();
    }

    return model;
}

bool emission::importer_pdf(QPrinter &printer)
{
    QTextDocument document;
    QTextCursor cursor(&document);
    QFont font("arial", 16);
    document.setDefaultFont(font);

    QSqlQuery query("SELECT * FROM KHOULOUD.EMISSION");
    while (query.next()) {
        int idEmission = query.value("ID_EMISSION").toInt();
        QString titre = query.value("TITRE").toString();
        QString description = query.value("DESCRIPTION").toString();
        QDate dateDiffusion = query.value("DATE_DIFFUSION").toDate();
        QString categorie = query.value("CATÉGORIE").toString();
        QTime duree = query.value("DURÉE").toTime();

        cursor.insertText(" ID_EMISSION: " + QString::number(idEmission));
        cursor.insertBlock();
        cursor.insertText(" TITRE: " + titre);
        cursor.insertBlock();
        cursor.insertText(" DESCRIPTION: " + description);
        cursor.insertBlock();
        cursor.insertText(" DATE_DIFFUSION: " + dateDiffusion.toString());
        cursor.insertBlock();
        cursor.insertText(" CATÉGORIE: " + categorie);
        cursor.insertBlock();
        cursor.insertText(" DURÉE: " + duree.toString());
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

QSqlQueryModel* emission::statistiqueCategorie() {
        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery query;
        query.prepare("SELECT catégorie, COUNT(*) AS count FROM KHOULOUD.EMISSION GROUP BY catégorie");
        if(query.exec()) {
            model->setQuery(query);
            if (model->lastError().isValid()) {
                qDebug() << "Error executing query:" << model->lastError().text();
                delete model;
                return nullptr;
            }
        } else {
            qDebug() << "Error executing query:" << query.lastError().text();
            delete model;
            return nullptr;
        }
        return model;
    }


QSqlQueryModel* emission::afficherEmisionsByDate(const QDate &date) {
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;

    // Assuming your database date format is 'DD-MON-YY'
    QString dateString = date.toString("dd-MMM-yy");

    query.prepare("SELECT * FROM KHOULOUD.EMISSION WHERE DATE_DIFFUSION = TO_DATE(:date, 'DD-MON-YY')");
    query.bindValue(":date", dateString);

    if (query.exec()) {
        model->setQuery(query);
        return model;
    } else {
        qDebug() << "Error executing query:" << query.lastError().text();
        delete model;
        return nullptr;
    }
}





