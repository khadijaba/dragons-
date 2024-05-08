#include "alert.h"
#include "ui_alert.h"

#include <QDialog>
#include <QDebug>
#include<QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include<QSqlError>
#include <QSortFilterProxyModel>

alert::alert(QWidget *parent, QSqlQueryModel *model) :
    QDialog(parent),
    ui(new Ui::alert),
    dataModel(model)
{
    ui->setupUi(this);

    connect(ui->exportButton, &QPushButton::clicked, this, &alert::on_exportButton_clicked);
    connect(ui->respondButton, &QPushButton::clicked, this, &alert::on_respondButton_clicked);
    connect(ui->searchEdit, &QLineEdit::cursorPositionChanged, this, &alert::on_searchEdit_cursorPositionChanged);
    connect(ui->exportButton, &QPushButton::clicked, this, &alert::on_exportButton_clicked);

    // Afficher le modèle de données du TableView dans l'alerte
    ui->tableView->setModel(dataModel);
}
alert::~alert()
{
    delete ui;
}

void alert::on_refreshButton_clicked()
{
    qDebug() << "Refreshing data...";
    loadYourData();
    afficherStock();
}

void alert::on_respondButton_clicked()
{
    QMessageBox::information(this, "Respond", "Responding to the selected alert.");
}


void alert::on_searchEdit_cursorPositionChanged(int oldPos, int newPos)
{
    qDebug() << "Cursor position changed from" << oldPos << "to" << newPos;
    QString currentText = ui->searchEdit->text();
    filterData(currentText);
}

void alert::filterData(const QString &text)
{
    qDebug() << "Filtering data with:" << text;

    // Créer un proxy modèle pour filtrer les données
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(ui->tableView->model()); // Utiliser le modèle source existant
    proxyModel->setFilterRegExp(QRegExp(text, Qt::CaseInsensitive)); // Appliquer le filtre de recherche (insensible à la casse)

    // Appliquer le proxy modèle à la vue
    ui->tableView->setModel(proxyModel);
}


void alert::loadYourData()
{
    qDebug() << "Loading data...";

    // Connexion à la base de données
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setDatabaseName("test-bd");
    db.setUserName("khadijaba");
    db.setPassword("khadijaba");

    if (!db.open()) {
        qDebug() << "Failed to connect to database:" << db.lastError().text();
        return;
    }

    // Exécution de la requête SQL pour récupérer les données
    QSqlQuery query;
    if (!query.exec("SELECT * FROM KHADIJABA.STOCKS")) {
        qDebug() << "Failed to execute query:" << query.lastError().text();
        db.close(); // Fermeture de la connexion à la base de données en cas d'erreur
        return;
    }

    // Création du modèle de données et configuration de la vue
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(query);
    ui->tableView->setModel(model);

    // Fermeture de la connexion à la base de données
    db.close();
}

void alert::exportYourDataToFile()
{
    qDebug() << "Exporting data...";
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "/path/to/your/default/directory/untitled.csv",
                               tr("CSV (*.csv);;All Files (*)"));
    if (fileName.isEmpty())
        return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("Unable to open file"), file.errorString());
        return;
    }

    QTextStream out(&file);

    // Obtenez d'abord le modèle de données de la vue
    QAbstractItemModel *dataModel = ui->tableView->model();

    int rowCount = dataModel->rowCount();
    int columnCount = dataModel->columnCount();

    for (int i = 0; i < columnCount; i++) {
        out << dataModel->headerData(i, Qt::Horizontal).toString();
        if (i < columnCount - 1)
            out << ",";
    }
    out << "\n";

    for (int row = 0; row < rowCount; row++) {
        for (int column = 0; column < columnCount; column++) {
            QModelIndex index = dataModel->index(row, column);
            out << dataModel->data(index).toString();
            if (column < columnCount - 1)
                out << ",";
        }
        out << "\n";
    }

    file.close();
    qDebug() << "Data exported to file:" << fileName;
}
void alert::on_exportButton_clicked()
{
    exportYourDataToFile();
}

void alert::on_checkStockButton_clicked()
{
    QAbstractItemModel *model = ui->tableView->model();

    // Vérifier la quantité de stock
    int quantityColumnIndex = 2; // Remplacez 2 par l'indice réel de la colonne contenant la quantité
    for (int row = 0; row < model->rowCount(); ++row) {
        QVariant stockQuantity = model->index(row, quantityColumnIndex).data(Qt::DisplayRole);
        if (stockQuantity.toInt() < 2) {
            // Si la quantité de stock est inférieure à 2, afficher une alerte
            QMessageBox::warning(this, "Stock Alert", "Stock quantity is low! Please replenish stock.");
            return; // Sortir de la fonction dès qu'une alerte est affichée
        }
    }
    QMessageBox::information(this, "Stock Alert", "Stock quantity is sufficient.");
}


void alert::checkStockQuantity()
{
    // Accéder au modèle de données du QTableView
    QAbstractItemModel *model = ui->tableView->model();

    // Vérifier la quantité de stock
    int quantityColumnIndex = 1;
    for (int row = 0; row < model->rowCount(); ++row) {
        QVariant stockQuantity = model->index(row, quantityColumnIndex).data(Qt::DisplayRole);
        if (stockQuantity.toInt() < 2) {
            // Si la quantité de stock est inférieure à 2, afficher une alerte
            QMessageBox::warning(this, "Stock Alert", "Stock quantity is low! Please replenish stock.");
            return; // Sortir de la fonction dès qu'une alerte est affichée
        }
    }

    // Si aucune alerte n'est affichée, afficher un message indiquant que la quantité de stock est suffisante
    QMessageBox::information(this, "Stock Alert", "Stock quantity is sufficient.");
}

void alert::loadStockData()
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

    // Affichage des données dans le QTableView de la fenêtre d'alerte
    ui->tableView->setModel(model);
}

int alert::calculateStockQuantity()
{
    int stockQuantity = 10; // Exemple: quantité de stock statique
        return stockQuantity;
}

void alert::afficherStock()
{
    QSqlQueryModel *stockModel = new QSqlQueryModel(this);
    QSqlQuery query("SELECT * FROM KHADIJABA.STOCKS");
    if (query.exec()) {
        stockModel->setQuery(query);
        if (stockModel->lastError().isValid()) {
            qDebug() << "Model error:" << stockModel->lastError().text();
            return;
        }
        // Passer le modèle de données du TableView à l'alerte
        alert *alertBox = new alert(this, stockModel);
        // Afficher la fenêtre d'alerte
        alertBox->exec();
    } else {
        qDebug() << "Error executing query:" << query.lastError().text();
    }
}
