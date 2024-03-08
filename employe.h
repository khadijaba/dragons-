#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
#include<QtSql>

class employe {

public:
    employe(){}
    employe(int,QString,QString,QString,QString,QString);



    int get_Id(){return Id;}
    QString get_Nom(){return Nom;}
    QString get_Prenom(){return Prenom;}
    QString get_Email(){return Email;}
    QString get_Type(){return Type;}
    QString get_presence(){return presence;}

    //setters
    void setNom(QString n){Nom=n;}
    void setPrenom(QString n){Prenom=n;}
    void setEmail(QString n){Email=n;}
    void setType(QString n){Type=n;}
    void setpresence(QString n){Type=n;}
    void setId(int Id){this->Id=Id;}

    bool ajouter();
    QSqlQueryModel * afficher();
    bool modifier();
    bool supprimer(int Id);
    QSqlQueryModel * recupereremploye();
    employe rechercher(int Id);
;

private:

    int Id;
    QString Nom;
    QString Prenom;
    QString Email;
    QString Type;
    QString presence;






};
#endif // EMPLOYE_H
