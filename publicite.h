#ifndef PUBLICITE_H
#define PUBLICITE_H

#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>

class publicite
{
public:
    publicite();
    publicite(int, QString, double, QDate, QDate, QString, double,QString);
    void setID_PUBLICITE( int n);
    void setCOMPAGNIE(QString n);
    void setBUDGET(double n);
    void setDate_DB(QDate date);
    void setDATE_FN(QDate date);
    void setTYPE(const QString n);
    void setDUREE(double n);
    void setFREQUENCE(const QString n);


    int get_ID_PUBLICITE();
    QString get_COMPAGNIE();
    double get_BUDGET();
    QDate get_DATE_DB();
    QDate get_DATE_FN();
    QString get_TYPE();
    double get_DUREE();
    QString get_FREQUENCE();
    void rechercherpubParId(int id);
    publicite rechercherParId(int id);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier(int id);


private:
     QString COMPAGNIE, TYPE , FREQUENCE;
    double  BUDGET, DUREE;
    QDate DATE_DB, DATE_FN;
    int ID_PUBLICITE;
    void updateDuration(qint64 duration);


};

#endif // PUBLICITE_H
