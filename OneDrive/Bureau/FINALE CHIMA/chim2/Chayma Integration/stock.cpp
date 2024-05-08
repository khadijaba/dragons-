#include "stock.h"
#include "ui_stock.h"
#include<QDebug>
#include<QSqlError>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QMessageBox>
#include<QTableView>
#include<QSqlRecord>

#include"alert.h"
#include <QWidget>
#include<QDialog>

stock::stock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stock)
{
    ui->setupUi(this);
}



stock::~stock()
{
    delete ui;
}
bool stock::supprimerStock(int id_stock)
{
    QSqlQuery query;
    query.prepare("DELETE FROM KHADIJABA.STOCKS WHERE ID_STOCK = :id_stock");
    query.bindValue(":id_stock", id_stock);

    if (query.exec()) {
        qDebug() << "Stock deletion successful!";
        return true;
    } else {
        qDebug() << "Stock deletion failed: " << query.lastError().text();
        return false;
    }
}

void stock::on_supprimerStock_clicked()
{
    int idToSupprimer = ui->lineEdit_idASupprimer_2->text().toInt();  // Récupération de l'ID à supprimer
        stock s;  // Création d'une instance de la classe stock
        bool supprime = s.supprimerStock(idToSupprimer);  // Appel de la méthode pour supprimer le stock
        if (supprime) {
            QMessageBox::information(this, tr("Succès"), tr("Suppression réussie."));
            afficherStock(ui->tableView_2);  // Mise à jour de l'affichage des stocks
        } else {
            QMessageBox::critical(this, tr("Erreur"), tr("Échec de la suppression. Vérifiez l'ID."));
        }
}

bool stock::modifier(int id_stock, int quantite_S, int seuil_min_S)
{
    QSqlQuery query;
    // Prepare the SQL query to update the stock entry
    query.prepare("UPDATE KHADIJABA.STOCKS SET QUANTITE_S = :quantite_S, SEUIL_MIN_S = :seuil_min_S WHERE ID_STOCK = :id_stock");
    query.bindValue(":quantite_S", quantite_S);
    query.bindValue(":seuil_min_S", seuil_min_S);
    query.bindValue(":id_stock", id_stock);

    // Execute the query and return true if successful, false otherwise
    if (query.exec()) {
        qDebug() << "Stock update successful!";
        return true;
    } else {
        qDebug() << "Stock update failed: " << query.lastError().text();
        return false;
    }
}
bool stock::ajouterStock() {
    QSqlQuery query;
    query.prepare("INSERT INTO KHADIJABA.STOCKS (ID_STOCK, QUANTITE_S, SEUIL_MIN_S) VALUES (:id_stock, :quantite_S, :seuil_min_S)");
    query.bindValue(":id_stock", this->id_stock);  // Assurez-vous que `id_stock` est un membre de la classe
    query.bindValue(":quantite_S", this->quantite_S);  // Assurez-vous que `quantite_S` est un membre de la classe
    query.bindValue(":seuil_min_S", this->seuil_min_S);  // Assurez-vous que `seuil_min_S` est un membre de la classe

    if (query.exec()) {
        qDebug() << "Stock added successfully!";
        return true;
    } else {
        qDebug() << "Failed to add stock: " << query.lastError().text();
        return false;
    }
}

void stock::on_ajouterStock_clicked() {
    int id_stock = ui->lineEdit_idStock->text().toInt();
    int quantite_S = ui->lineEdit_quantite->text().toInt();
    int seuil_min_S = ui->lineEdit_seuilMin->text().toInt();

    QSqlQuery query;
    query.prepare("INSERT INTO KHADIJABA.STOCKS (ID_STOCK, QUANTITE_S, SEUIL_MIN_S) VALUES (:id_stock, :quantite_S, :seuil_min_S)");
    query.bindValue(":id_stock", id_stock);
    query.bindValue(":quantite_S", quantite_S);
    query.bindValue(":seuil_min_S", seuil_min_S);

    if (query.exec()) {
        QMessageBox::information(this, tr("Succès"), tr("Stock ajouté avec succès."));
        afficherStock(ui->tableView_2);  // Mise à jour de l'affichage des stocks
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Ajout du stock non effectué. Veuillez vérifier les données.") + query.lastError().text());
    }
}


void stock::on_modifierStock_clicked()
{
    // Retrieve data from UI components
    int id_stock = ui->lineEdit_idStock->text().toInt();  // Get the stock ID as integer
    int quantite_S = ui->lineEdit_quantite->text().toInt();  // Get the new quantity as integer
    int seuil_min_S = ui->lineEdit_seuilMin->text().toInt();  // Get the new minimum threshold as integer

    // Call the modifier function
    if (modifier(id_stock, quantite_S, seuil_min_S)) {
        QMessageBox::information(this, tr("Succès"), tr("Stock modifié avec succès."));
         afficherStock(ui->tableView_2); // Optionally refresh the table view to reflect changes
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de la modification du stock."));
    }
}
void stock::on_chercher_clicked()
{
    int id_stock = ui->lineEdit_idStock->text().toInt(); // Get the stock ID as integer from QLineEdit

    // Prepare the SQL query to fetch the stock data
    QSqlQuery query;
    query.prepare("SELECT QUANTITE_S, SEUIL_MIN_S FROM KHADIJABA.STOCKS WHERE ID_STOCK = :id_stock");
    query.bindValue(":id_stock", id_stock);

    // Execute the query
    if (query.exec()) {
        if (query.next()) {
            // Retrieve data from the query result
            int quantite_S = query.value(0).toInt();  // Assuming QUANTITE_S is the first column in the SELECT
            int seuil_min_S = query.value(1).toInt();  // Assuming SEUIL_MIN_S is the second column in the SELECT

            // Update the UI with the fetched data
            ui->lineEdit_quantite->setText(QString::number(quantite_S));
            ui->lineEdit_seuilMin->setText(QString::number(seuil_min_S));

            QMessageBox::information(this, tr("Trouvé"), tr("Données de stock trouvées et affichées."));
        } else {
            QMessageBox::information(this, tr("Non trouvé"), tr("Aucun stock trouvé avec cet ID."));
        }
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Erreur lors de la recherche: ") + query.lastError().text());
    }
}

void stock::afficherStock(QTableView *tableView)
{
    if (!QSqlDatabase::database().isOpen()) {
        qDebug() << "Database not connected!";
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel(this);
    QSqlQuery query;
    query.prepare("SELECT * FROM KHADIJABA.STOCKS");
    if (query.exec()) {
        model->setQuery(query);
        if (model->lastError().isValid()) {
            qDebug() << "Model error:" << model->lastError().text();
            return;
        }
        tableView->setModel(model);
        qDebug() << "Data loaded, row count:" << model->rowCount();
    } else {
        qDebug() << "Error executing query:" << query.lastError().text();
    }
}

void stock::on_refresh_2_clicked()
{
 afficherStock(ui->tableView_2);

}

void stock::checkResourceLevels() {
    QSqlQuery query("SELECT ID_STOCK, QUANTITE_S FROM KHADIJABA.STOCKS");
    bool showAlert = false;
    while (query.next()) {
        int id = query.value(0).toInt();
        int quantity = query.value(1).toInt();
        if (quantity < 2) {
            qDebug() << "Alerte : Le stock" << id << "est en dessous du seuil minimal avec seulement" << quantity << "unités restantes.";
            showAlert = true;
        }
    }

    if (showAlert) {
        QMessageBox::warning(this, "Alerte de stock", "Certains articles ont une quantité en stock inférieure à 2! Veuillez reconstituer le stock.");
    }
}


void stock::on_btnOpenResourceAlert_clicked()
{
     alert alert(this);

     alert.exec();


}
void stock::calculateQuantity() {
    // Connexion à la base de données
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("test-bd");
    db.setUserName("khadijaba");
    db.setPassword("khadijaba");

    if (!db.open()) {
        qDebug() << "Failed to connect to database:" << db.lastError().text();
        return;
    }

    // Exécution de la requête SQL pour récupérer la quantité de stock
    QSqlQuery query;
    if (!query.exec("SELECT QUANTITE_S FROM KHADIJABA.STOCKS")) {
        qDebug() << "Failed to execute query:" << query.lastError().text();
        db.close(); // Fermeture de la connexion à la base de données en cas d'erreur
        return;
    }

    // Vérification de la quantité de stock
    bool stockInsufficient = false;
    while (query.next()) {
        int stockQuantity = query.value(0).toInt(); // Récupérer la quantité de stock à partir de la colonne 0 (QUANTITE_S)
        if (stockQuantity < 2) {
            stockInsufficient = true;
            break;
        }
    }

    // Fermeture de la connexion à la base de données
    db.close();

    // Affichage de l'alerte si la quantité de stock est insuffisante
    if (stockInsufficient) {
        QMessageBox::warning(this, "Stock Alert", "Stock quantity is low! Please replenish stock.");
    } else {
        QMessageBox::information(this, "Stock Alert", "Stock quantity is sufficient.");
    }
}

void stock::on_calculateButton_clicked() {
    calculateQuantity();
}

void stock::loadStockData()
{
    // Connexion à la base de données
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isValid() || !db.isOpen()) {
        qDebug() << "Database connection is not valid or open.";
        return;
    }

    // Exécution de la requête SQL pour récupérer les données de stock
    QSqlQuery query("SELECT * FROM KHADIJABA.STOCKS");
    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError().text();
        return;
    }

    // Création d'un modèle de données pour stocker les résultats de la requête
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(query);

    // Récupération de l'indice de la colonne contenant la quantité de stock
    int quantityColumnIndex = -1; // Initialisation de l'indice de la colonne de quantité
    QSqlRecord record = query.record();
    for (int i = 0; i < record.count(); ++i) {
        QString fieldName = record.fieldName(i);
        if (fieldName == "quantite_S") {
            quantityColumnIndex = i;
            break;
        }
    }

    if (quantityColumnIndex == -1) {
        qDebug() << "Column 'QUANTITY' not found in the table structure.";
        return;
    }

    for (int row = 0; row < model->rowCount(); ++row) {
           QModelIndex index = model->index(row, quantityColumnIndex);
           QVariant stockQuantity = model->data(index);
           qDebug() << "Stock quantity at row" << row << ":" << stockQuantity.toString();
       }}


void stock::showAlert()
{
    // Récupérer la quantité depuis votre modèle de données ou d'où vous stockez cette information
    int quantity = quantite_S;

    // Vérifier si la quantité est inférieure à 2
    if (quantity < 2) {
        // Afficher une alerte
        QMessageBox::warning(this, "Stock Alert", "Stock quantity is low! Please replenish stock.");
    } else {
        // Afficher un message indiquant que la quantité est suffisante (facultatif)
        QMessageBox::information(this, "Stock Alert", "Stock quantity is sufficient.");
    }
}



void stock::on_listeressources_clicked()
{
     ui->fenetre_ressources->setCurrentIndex(0);


}

void stock::on_ajjj_clicked()
{
     ui->fenetre_ressources->setCurrentIndex(1);

}

void stock::on_modifierButton_3_clicked()
{
    ui->fenetre_ressources->setCurrentIndex(2);


}
