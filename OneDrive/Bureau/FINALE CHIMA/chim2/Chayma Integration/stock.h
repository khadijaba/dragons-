#ifndef STOCK_H
#define STOCK_H
#include <QWidget>
#include <QTimer>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QTableView>

namespace Ui {
class stock;
}

class stock : public QDialog
{
    Q_OBJECT

public:
    explicit stock(QWidget *parent = nullptr);
    ~stock();


private slots:
    void on_supprimerStock_clicked();
    bool modifier(int id_stock, int quantite_S, int seuil_min_S);
    void on_refresh_2_clicked();
    void on_ajouterStock_clicked();
    void on_chercher_clicked();
    void on_modifierStock_clicked();
    void afficherStock(QTableView *tableView);
    bool supprimerStock(int id_stock);
    bool ajouterStock();
    void checkResourceLevels();
    void calculateQuantity();
    void on_btnOpenResourceAlert_clicked();
    void loadStockData();
    void on_calculateButton_clicked();
    void showAlert();
    void trierParQuantite();
    void on_triQuantite_clicked();
    void on_listeressources_clicked();
    void on_ajjj_clicked();
    void on_modifierButton_3_clicked();


private:
    Ui::stock *ui;
    int id_stock;
    int quantite_S;
    int seuil_min_S;
    QTimer *timer;
};

#endif // STOCK_H
