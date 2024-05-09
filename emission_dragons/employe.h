#ifndef EMPLOYE_H
#define EMPLOYE_H

#include "connexion.h"
#include "arduino.h" // Include Arduino-related class
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QtSql>
#include <QTableWidget>
#include <QString>
#include <QDate>
#include <QTime>
#include <QDebug>
#include <QPrinter>
#include <QPainter>

class employe
{
private:
    QString ID;
    Arduino A; // Instance of Arduino class

public:

    // Getters
    int getId() const;

    void setId(const QString &value);

   QSqlQueryModel *getEmployeeID(const QString& ID);
};

#endif // EMPLOYE_H
