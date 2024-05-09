#include "publicite.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QString>
#include <QDate>
#include <QSqlError>

publicite::publicite()
{
    ID_PUBLICITE = 0;
    COMPAGNIE = "";
    BUDGET = 0.0;
    DATE_DB = QDate::fromString("dd/MM/yyyy");
    DATE_FN = QDate::fromString("dd/MM/yyyy");
    TYPE = "";
    DUREE = 0.0;
    FREQUENCE = "";
}

publicite::publicite(int id, QString compagnie, double budget, QDate date_db, QDate date_fn, QString type, double duree,QString frequence)
{
    ID_PUBLICITE = id;
    COMPAGNIE = compagnie;
    BUDGET = budget;
    DATE_DB = date_db;
    DATE_FN = date_fn;
    TYPE = type;
    DUREE = duree;
    FREQUENCE=frequence;

}

void publicite::setID_PUBLICITE(int n) { ID_PUBLICITE = n; }
void publicite::setCOMPAGNIE(QString n) { COMPAGNIE = n; }
void publicite::setBUDGET(double n) { BUDGET = n; }
void publicite::setDate_DB(QDate date) { DATE_DB = date; }
void publicite::setDATE_FN(QDate date) { DATE_FN = date; }
void publicite::setTYPE(const QString n) { TYPE = n; }
void publicite::setDUREE(double n) { DUREE = n; }
void publicite::setFREQUENCE(const QString n){FREQUENCE =n; }

int publicite::get_ID_PUBLICITE() { return ID_PUBLICITE; }
QString publicite::get_COMPAGNIE() { return COMPAGNIE; }
double publicite::get_BUDGET() { return BUDGET; }
QDate publicite::get_DATE_DB() { return DATE_DB; }
QDate publicite::get_DATE_FN() { return DATE_FN; }
QString publicite::get_TYPE() { return TYPE; }
double publicite::get_DUREE() { return DUREE; }
QString publicite::get_FREQUENCE() { return FREQUENCE;}

void publicite::rechercherpubParId(int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM PUBLICITE WHERE ID_PUBLICITE = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next())
    {
        ID_PUBLICITE = query.value("ID_PUBLICITE").toInt();
        COMPAGNIE = query.value("COMPAGNIE").toString();
        BUDGET = query.value("BUDGET").toDouble();
        DATE_DB = query.value("DATE_DB").toDate();
        DATE_FN = query.value("DATE_FN").toDate();
        TYPE = query.value("TYPE").toString();
        DUREE = query.value("DUREE").toDouble();
        FREQUENCE = query.value("FREQUENCE").toString();

    }
}

publicite publicite::rechercherParId(int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM PUBLICITE WHERE ID_PUBLICITE = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next())
    {

        QString compagnie = query.value("COMPAGNIE").toString();
        double budget = query.value("BUDGET").toDouble();
        QDate date_db = query.value("DATE_DB").toDate();
        QDate date_fn = query.value("DATE_FN").toDate();
        QString type = query.value("TYPE").toString();
        double duree = query.value("DUREE").toDouble();
        QString frequence = query.value("FREQUENCE").toString();
        //
        // Vous pouvez récupérer et initialiser FREQUENCE ici si nécessaire.

        return publicite (id, compagnie, budget, date_db, date_fn, type, duree,frequence);
    }
    else
    {
        return publicite();
    }
}

bool publicite::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO PUBLICITE(ID_PUBLICITE, COMPAGNIE, BUDGET, DATE_DB, DATE_FN, TYPE, DUREE, FREQUENCE)"
                      "VALUES (:ID_PUBLICITE, :COMPAGNIE, :BUDGET, :DATE_DB, :DATE_FN, :TYPE, :DUREE, :FREQUENCE)");
    query.bindValue(":ID_PUBLICITE", ID_PUBLICITE);
    query.bindValue(":COMPAGNIE", COMPAGNIE);
    query.bindValue(":BUDGET", BUDGET);
    query.bindValue(":DATE_DB", DATE_DB);
    query.bindValue(":DATE_FN", DATE_FN);
    query.bindValue(":TYPE", TYPE);
    query.bindValue(":DUREE", DUREE);
    query.bindValue(":FREQUENCE", FREQUENCE);
    // Ajoutez les valeurs manquantes ici.
    return query.exec();
}

bool publicite::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM PUBLICITE WHERE ID_PUBLICITE = :id");
    query.bindValue(":id", id);
    return query.exec();
}

bool publicite::modifier(int id)
{
    QSqlQuery query;
    query.prepare("UPDATE PUBLICITE SET COMPAGNIE = :compagnie, BUDGET = :budget, DATE_DB = :date_db, DATE_FN = :date_fn, TYPE = :type, DUREE = :duree, FREQUENCE = :frequence WHERE ID_PUBLICITE = :id");
    query.bindValue(":id", id);
    query.bindValue(":compagnie", COMPAGNIE);
    query.bindValue(":budget", BUDGET);
    query.bindValue(":date_db", DATE_DB);
    query.bindValue(":date_fn", DATE_FN);
    query.bindValue(":type", TYPE);
    query.bindValue(":duree", DUREE);
    query.bindValue(":FREQUENCE",FREQUENCE);
    // Ajoutez les valeurs manquantes ici.
    return query.exec();
}


/*void publicite::(qint64 Duration)
{

}
*/

QSqlQueryModel *publicite::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT ID_PUBLICITE, COMPAGNIE, BUDGET, DATE_DB, DATE_FN, TYPE, DUREE, FREQUENCE FROM PUBLICITE");

    if (model->lastError().isValid())
    {
        // Gérer les erreurs d'exécution de la requête
        qDebug() << "Erreur SQL : " << model->lastError().text();
        delete model;
        return nullptr;
    }

    return model;
}

