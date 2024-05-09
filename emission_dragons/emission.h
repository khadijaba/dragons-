#ifndef EMISSION_H
#define EMISSION_H
#include "connexion.h"
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QSqlDatabase>
#include<QtSql>
#include <QTableWidget>
#include <QString>
#include <QDate>
#include <QTime>
#include <QDebug>
#include<QPrinter>
#include<QPainter>
class emission
{
private:

    int idEmission;
    QString titre;
    QString description;
    QDate dateDiffusion;
    QString categorie;
    QTime duree;
    mutable QSqlQuery query;

public:
    emission(){}
    emission(int,QString,QString,QDate,QString,QTime);

    // Getters
    int getIdEmission() const;
    QString getTitre() const;
    QString getDescription() const;
    QDate getDateDiffusion() const;
    QString getCategorie() const;
    QTime getDuree() const;


    // setters
    void setIdEmission(int value);
    void setTitre(const QString &value);
    void setDescription(const QString &value);
    void setDateDiffusion(const QDate &value);
    void setCategorie(const QString &value);
    void setDuree(const QTime &value);


        bool ajouter();
        bool modifier();
         QString getLastSqlError() const;
        bool supprimer(int idEmission);
        QSqlQueryModel *afficher();
        QSqlQueryModel *recupererEmissions();
        bool importer_pdf(QPrinter &printer);
         QSqlQueryModel* statistiqueCategorie();
         void prepareStatistique();
         void updateChart(const QString &categorie, int count);
         QSqlQueryModel *afficherEmisionsByDate(const QDate &date);




};


#endif // EMISSION_H
