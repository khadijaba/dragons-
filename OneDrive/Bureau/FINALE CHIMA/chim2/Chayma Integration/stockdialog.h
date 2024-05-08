#ifndef STOCKDIALOG_H
#define STOCKDIALOG_H

#include <QDialog>
#include "ui_StockDialog.h"

class StockDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StockDialog(QWidget *parent = nullptr);




private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_supprimerStock_clicked();

    void on_supprimerStock_pressed();

    void on_ajjj_clicked();

private:
    Ui::StockDialog *ui; // Ensure Ui::StockDialog is the correct class name as generated
     int idStock;
    void on_saveButton_clicked();
    void clearFields();
    void setupConnections();
    void on_cancelButton_clicked();


};

#endif // STOCKDIALOG_H

