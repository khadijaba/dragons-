#include "employe.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QPrinter>
#include <QTextDocument>
#include <QTableWidget>
#include <QTextCursor>
#include <QtCharts>
#include "arduino.h"

#include <QtSerialPort>
#include <QSerialPortInfo>



/*QSqlQueryModel *getEmployeeID(const QString& ID) {
    QString employeeID = "";
    QSqlQuery query;
    query.prepare("SELECT ID FROM KHOULOUD.EMPLOYE WHERE ID = ");
    query.addBindValue(ID);
    if (query.exec() && query.next()) {
        employeeID = query.value(0).toString();
    } else {
        qDebug() << "Error executing SQL query or no employee found with the entered password.";
    }

    return employeeID;
}*/
