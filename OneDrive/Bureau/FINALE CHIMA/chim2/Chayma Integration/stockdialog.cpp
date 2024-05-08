#include "StockDialog.h"
#include "ui_StockDialog.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

StockDialog::StockDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StockDialog),
    idStock(-1)
{
    ui->setupUi(this);
    setupConnections();
}





void StockDialog::setupConnections() {
    connect(ui->saveButton, &QPushButton::clicked, this, &StockDialog::on_saveButton_clicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &StockDialog::on_cancelButton_clicked);
}

void StockDialog::on_saveButton_clicked() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("test-bd");
    db.setUserName("khadijaba");
    db.setPassword("khadijaba");

    if (!db.open()) {
        QMessageBox::warning(this, "Erreur", "Impossible de se connecter à la base de données.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO \"KHADIJABA\".\"STOCKS\" (\"ID_STOCK\", \"QUANTITE_S\", \"SEUIL_MIN_S\") VALUES (:id_stock, :quantite_s, :seuil_min_s)");
    query.bindValue(":id_stock", ui->idStockLineEdit->text().toInt());
    query.bindValue(":quantite_s", ui->quantiteLineEdit->text());
    query.bindValue(":seuil_min_s", ui->seuilMinLineEdit->text());

    if (query.exec()) {
        QMessageBox::information(this, "Sauvegarde réussie", "Les informations de stock ont été sauvegardées avec succès.");
        accept();
    } else {
        QMessageBox::warning(this, "Erreur de sauvegarde", query.lastError().text());
    }
}

void StockDialog::on_cancelButton_clicked() {
    reject();
}

void StockDialog::clearFields() {
    ui->quantiteLineEdit->clear();
    ui->seuilMinLineEdit->clear();
}

void StockDialog::on_ajjj_clicked()
{

}
