#ifndef ABONNE_H
#define ABONNE_H
#include <QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QtSql>
class abonne {
    QString nom,prenom,email,paiment;
    int id_a;
public:
    abonne(){}
    abonne(int,QString,QString,QString,QString);


    int get_id_a(){return id_a;}
    QString get_nom(){return nom;}
    QString get_prenom(){return prenom;}
    QString get_email(){return email;}
    QString get_paiment(){return  paiment;}

    //setters
    void setnom(QString n){nom=n;}
    void setprenom(QString n){prenom=n;}
    void setemail(QString n){email=n;}
    void setpaiment(QString n){paiment=n;}
    void setid_a(int id_a){this->id_a=id_a;}

    bool ajouter();
    QSqlQueryModel * afficher();
    bool modifier();
    bool supprimer(int id_a);
     QSqlQueryModel* recupererAbonnes();



};


#endif // ABONNE_H
