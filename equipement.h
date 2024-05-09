#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H

#include <QObject>
#include <QString>
#include <QList>
#include <QtNetwork/QSslError>
#include <QDate>
#include <QSqlQueryModel>
#include <QObject>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QPrinter>
#include <QTextDocument>
#include <QTextCursor>
#include "qr.h"
#include <QSqlDatabase>

class Equipement : public QObject
{
    Q_OBJECT
public:
    Equipement();
    Equipement(int, QDate, QString, QString);
    int get_ID() const;
    QString get_Type()const;
    QString get_Prix()const;
    QDate get_Date()const;

    void set_ID(int);
    void set_Type(QString);
    void set_Prix(QString);
    void set_Date(QDate);
    //void:genererEtAfficherCodeQR(const Equipement& equipement)
    bool exists(int id);
    QSqlQueryModel* search(QString id);
    bool Ajouter();
    bool modifier();
    QSqlQueryModel* afficher();
    QSqlQueryModel* statistiqueEquipement();
    void envoyerEmail(const QString &destinataire, const QString &sujet, const QString &contenu);
    void on_pb_pdf_clicked();
    bool generatePdf_Equipement(const QString &sortingColumn, const QString &sortOrder);
    bool importer_pdf(QPrinter &printer);
    bool equipementExiste(int ID);
    bool supprimer(int);
    bool RechercheEquipementParID(int IDrecherche);
    QSqlQueryModel *tri_ID();
    QSqlQueryModel *tri_date();
    QSqlQueryModel *tri_prix();
    QSqlQueryModel *tri_type();


public slots:



private:
    int ID;
    QDate datee;
    QString prix;
    QString type;
};

#endif
// EQUIPEMENT_H
