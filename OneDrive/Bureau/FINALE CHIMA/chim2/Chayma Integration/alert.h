#ifndef ALERT_H
#define ALERT_H

#include <QDialog>
#include <QDebug>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QTableView>
namespace Ui {
class alert;
}

class alert : public QDialog
{
    Q_OBJECT

public:
    explicit alert(QWidget *parent = nullptr, QSqlQueryModel *model = nullptr);

    ~alert();

private slots:
    void on_refreshButton_clicked();

    void on_respondButton_clicked();

    void on_exportButton_clicked();

     void on_searchEdit_cursorPositionChanged(int arg1, int arg2);

    void on_checkStockButton_clicked();
    int calculateStockQuantity();
    void checkStockQuantity();
    void loadStockData();
    void afficherStock();
private:
    Ui::alert *ui;
    void loadYourData();
    void filterData(const QString &text);
       void exportYourDataToFile();
       QSqlQueryModel *dataModel;
};

#endif // ALERT_H
