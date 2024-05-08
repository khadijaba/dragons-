#ifndef RESSOURCE_H
#define RESSOURCE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QPrinter>
#include <QPixmap>
class ressource {
    QString nom_R,image_path, descrip_R;
    int id_R;
    QPixmap photo;
    double prix;
    int id_stock;
    int quantite;


public:
    ressource(){}
    ressource(int,QString,QString,QString);
    ressource(int id,double prix,int id_stock,int quantite);

    int get_id_R(){return id_R;}
    QString get_nom_R(){return nom_R;}
    QString get_image_PATH(){return image_path;}
    //QString get_descrip_R(){return descrip_R;}
    QString getDescrip_R() const;

    int get_id_stock(){return id_stock;}
   double getPrix(){return prix;}
    //QString get_descrip_R(){return descrip_R;}
   int getQuantite(){return quantite;}

    //setters
    void setnom_R(QString n){nom_R=n;}
    void setimage_PATH(QString n){image_path=n;}
    void setdescrip_R(QString n){descrip_R=n;}
    void setid_R(int id_R){this->id_R=id_R;}





    // Méthodes pour la gestion des ressources
    bool ajouter_ressource();
    bool modifier_ressource();
    bool supprimer_ressource(int id);
    QSqlQueryModel* afficher_ressource();
    QSqlQueryModel* recupererRessource();
    bool importer_pdf(QPrinter &printer);
    QSqlQueryModel* tri_nom_R();
    QSqlQueryModel* statistiquesParNom();
    QSqlQueryModel* getNomStatistics();
QSqlRecord  recupererRessoureEtStockBYname(QString name);
};

#endif // RESSOURCE_H
