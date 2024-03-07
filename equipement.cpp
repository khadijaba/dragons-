#include "equipement.h"
#include <QSqlQuery>
#include<QtDebug>
#include<QObject>
#include <QByteArray>
#include<QSqlRecord>
#include <QFile>
#include <iostream>
#include <string>
#include <cctype>


Equipement::Equipement()
{
     ID=0;
     type="";
     prix="";

}
Equipement::Equipement(int ID,QDate datee,QString type,QString prix)
{
    this->ID=ID;
    this->type=type;
    this->prix=prix;
    this->datee=datee;

}
int Equipement::get_ID()
{
    return ID;
}
QDate Equipement::get_Date()
{
    return datee;
}
QString Equipement::get_Prix()

{
    return prix;
}
QString Equipement::get_Type()

{
    return type;
}

void Equipement::set_ID(int ID)
{
    this->ID=ID;
}
void Equipement::set_Type(QString type)
{
    this->type=type;
}
void Equipement::set_Prix(QString prix)
{
    this->prix=prix;
}
void Equipement::set_Date(QDate datee)
{
    this->datee=datee;
}

bool Equipement::Ajouter()
{

    QSqlQuery query;
    QString id_string= QString::number(ID);

          query.prepare("INSERT INTO Equipement(ID, datee, type, prix )"
                        "VALUES (:ID, :datee,  :type, :prix)");
          query.bindValue(":ID", id_string);
          query.bindValue(":datee", datee);
          query.bindValue(":type", type);
          query.bindValue(":prix", prix);

         return query.exec();
}


bool Equipement::modifier(){
    QSqlQuery query;
    QString id_string= QString::number(ID);
    query.prepare("UPDATE Equipement SET ID= :ID, datee= :datee, type= :type, prix= :prix WHERE ID= :ID");
    query.bindValue(":ID", id_string);
    query.bindValue(":datee", datee);
    query.bindValue(":type", type);
    query.bindValue(":prix", prix);

    return query.exec();
}

QSqlQueryModel* Equipement::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

          model->setQuery("SELECT * FROM Equipement");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("datee"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));



    return model;
}

bool Equipement::supprimer(int id)
{
    QSqlQuery query;

          query.prepare(" Delete from Equipement where id=:id");
          query.bindValue(0,id);
           return query.exec();
}

bool Equipement::RechercheEquipementParID(int IDrecherche)
{
    QSqlQuery query;

    query.prepare("SELECT * FROM Equipement WHERE id=:IDrecherche");
    query.bindValue(":IDrecherche",IDrecherche);
    query.exec();
    if (!query.first()){
        return false;
    }
    else
    {
        int nID = query.record().indexOf("ID");
        int nDate=query.record().indexOf("datee");
        int ntype=query.record().indexOf("type");
        int nprix=query.record().indexOf("prix");


        ID=query.value(nID).toInt();
        datee=query.value(nDate).toDate();
        type=query.value(ntype).toString();
        prix=query.value(nprix).toString();


        return true;
    }

}

bool equipementExiste(int ID) {
    // Vérifie si l'équipement existe déjà dans la base de données
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM equipement WHERE ID = :id");
    query.bindValue(":id", ID);
    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count > 0;
    }
    return false; // En cas d'erreur ou si aucun résultat n'est trouvé
}


QSqlQueryModel * Equipement::tri_ID()
{
    QSqlQueryModel *model= new QSqlQueryModel;
    QSqlQuery *q=new QSqlQuery();
    q->prepare("select * from Equipement order by id  asc");
    q->exec();
    model->setQuery(*q);
    return  model;
}

QSqlQueryModel * Equipement::tri_date()
{
    QSqlQueryModel *model= new QSqlQueryModel;
    QSqlQuery *q=new QSqlQuery();
    q->prepare("select * from Equipement order by datee  asc");
    q->exec();
    model->setQuery(*q);
    return  model;
}
QSqlQueryModel * Equipement::tri_type()
{
    QSqlQueryModel *model= new QSqlQueryModel;
    QSqlQuery *q=new QSqlQuery();
    q->prepare("select * from Equipement order by type  asc");
    q->exec();
    model->setQuery(*q);
    return  model;
}
QSqlQueryModel * Equipement::tri_prix()
{
    QSqlQueryModel *model= new QSqlQueryModel;
    QSqlQuery *q=new QSqlQuery();
    q->prepare("select * from Equipement order by prix  asc");
    q->exec();
    model->setQuery(*q);
    return  model;
}

