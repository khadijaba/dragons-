#ifndef ABONNE_H
#define ABONNE_H
#include <QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QtSql>
#include <QPrinter>
#include <QTableWidget>

class abonne {
    QString nom,prenom,email,paiment,image_path;
    int id_a;
    QPixmap photo;

public:
    abonne(){}
    abonne(int,QString,QString,QString,QString,QString);


    int get_id_a(){return id_a;}
    QString get_nom(){return nom;}
    QString get_prenom(){return prenom;}
    QString get_email(){return email;}
    QString get_paiment(){return  paiment;}
    QString get_image_path(){return image_path;}


    //setters
    void setnom(QString n){nom=n;}
    void setprenom(QString n){prenom=n;}
    void setemail(QString n){email=n;}
    void setpaiment(QString n){paiment=n;}
    void setid_a(int id_a){this->id_a=id_a;}
    void setimage_path(QString image_path){this->image_path=image_path;}
    void ajouterPhoto(const QPixmap &image);

    bool ajouter();

    bool modifier();
    bool supprimer(int id_a);
     QSqlQueryModel* recupererAbonnes();
     bool importer_pdf(QPrinter &printer);
     static int nombreTotalAbonnes();
     QSqlQueryModel* tri();
      QSqlQueryModel *afficher();
      QSqlQueryModel *statistiquePaiement();
      QSqlQueryModel *tri(const QString &orderBy);



};


#endif // ABONNE_H
