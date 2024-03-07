#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>
#include <QSqlQueryModel>

#include <QDate>

class Equipement
{
public:
    Equipement();
    Equipement(int,QDate,QString,QString);
    int get_ID();
    QString get_Type();
    QString get_Prix();
    QDate get_Date();

    void set_ID(int);
    void set_Type(QString);
    void set_Prix(QString);
    void set_Date(QDate);
    bool Ajouter();
    bool modifier();
    QSqlQueryModel* afficher();
     bool equipementExiste(int ID);
    bool supprimer(int);
    bool RechercheEquipementParID(int IDrecherche);
    QSqlQueryModel *tri_ID();
    QSqlQueryModel *tri_date();
    QSqlQueryModel *tri_prix();
    QSqlQueryModel *tri_type();




private:
    int ID;
    QDate datee;
    QString prix;
    QString type;



};

#endif // EQUIPEMENT_H
