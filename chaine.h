#ifndef CHAINE_H
#define CHAINE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QPrinter>
#include <QTextDocument>
#include <QTextCursor>
#include <QDebug>
#include <QtCharts>
#include <QtGlobal>


#include "connection.h"

class Chaine
{
public:
   
    Chaine();
    Chaine(int, QString, QString, int, int, int, QString, QString, QString);


    int getId_chaine() const;
    QString getSatellite() const;
    QString getNom() const;
    int getFrequence() const;
    int getPolarisation() const;
    int getSr() const;
    QString getFec() const;
    QString getType() const;
    QString getQualite() const;

    
    void setId_chaine(int);
    void setSatellite(const QString &);
    void setNom(const QString &);
    void setFrequence(int);
    void setPolarisation(int);
    void setSr(int);
    void setFec(const QString &);
    void setType(const QString &);
    void setQualite(const QString &);

    
    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(int);
    bool modifier(int id);
    QSqlQueryModel *recherche(QString id_chaine);
    QSqlQueryModel *tri();
    bool importer_pdf(QPrinter &printer);
    QtCharts::QChartView *stats();
;
private:
    int id_chaine;
    QString satellite;
    QString nom;
    int frequence;
    int polarisation;
    int sr;
    QString fec;
    QString type;
    QString qualite;
};

#endif // CHAINE_H


