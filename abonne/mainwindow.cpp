#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QTableView>
#include<QDebug>
#include <QSqlError>
#include<QMessageBox>


#include <QPainter>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QOCI");
      db.setHostName("LAPTOP-MT52CUOA");
        db.setPort(1521);
        db.setDatabaseName("test-bd");

        db.setUserName("khadija");
        db.setPassword("khadija");
        if (!db.open()) {
               qDebug() << "Failed to open database:" << db.lastError().text();
               // Handle the error, e.g., show a message to the user or exit the application
           }


    connect(ui->suivantButton, SIGNAL(clicked()), this, SLOT(on_suivantButton_clicked()));
    connect(ui->precedentButton, SIGNAL(clicked()), this, SLOT(on_precedentButton_clicked()));
    connect(ui->suivantButton_2, SIGNAL(clicked()), this, SLOT(on_suivantButton_2_clicked()));
    connect(ui->ajouterButton, SIGNAL(clicked()), this, SLOT(on_ajouterButton_clicked()));
    connect(ui->chercherButton, SIGNAL(clicked()), this, SLOT(on_chercherButton_clicked()));
    connect(ui->modifierButton, SIGNAL(clicked()), this, SLOT(on_modifierButton_clicked()));
    connect(ui->precedentButton_2, SIGNAL(clicked()), this, SLOT(on_precedentButton_2_clicked()));
    connect(ui->suivantButton_3piu, SIGNAL(clicked()), this, SLOT(on_suivantButton_3piu_clicked()));
    connect(ui->supprimerButton, SIGNAL(clicked()), this, SLOT(on_supprimerButton_clicked()));




     ui->stackedWidget->setCurrentIndex(0);

     ui->comboBox->addItem("carte bancaire");
         ui->comboBox->addItem("cheque");
         ui->comboBox->addItem("espece");


    ui->label->setStyleSheet("background-image: url(:/images/images/backg.jpg.jpg);");
    ui->label_2->setStyleSheet("background-image: url(:/images/images/backg.jpg.jpg);");
    ui->label_3->setStyleSheet("background-image: url(:/images/images/backg.jpg.jpg);");
    ui->label_4->setStyleSheet("background-image: url(:/images/images/backg.jpg.jpg);");

}

MainWindow::~MainWindow()
{
    delete ui;
}

// Implement your button click functions here

void MainWindow::on_suivantButton_clicked()
{

    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_precedentButton_clicked()
{
    int currentIndex = ui->stackedWidget->currentIndex();
       if (currentIndex > 0) {
           ui->stackedWidget->setCurrentIndex(currentIndex - 1);
       }
}

void MainWindow::on_suivantButton_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_ajouterButton_clicked()
{
    int id_a = ui->lineEdit_id->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QString email = ui->lineEdit_email->text();
    QString paiment = ui->comboBox->currentText();

    abonne a(id_a, nom, prenom, email, paiment);

    if (a.ajouter()) {
        afficherAbonnes();
        QMessageBox::information(this, tr("Success"), tr("Ajout effectué."));
    } else {
        QMessageBox::critical(this, tr("Error"), tr("Ajout non effectué. Vérifiez les données."));
    }
}


void MainWindow::on_chercherButton_clicked()
{
    int idToSearch = ui->lineEdit_idChercher->text().toInt(); // Récupérer l'id à partir de l'interface utilisateur

    abonne a;
    QSqlQueryModel *model = a.afficher(); // Récupérer le modèle de données de la classe abonne

    bool found = false;

    for (int row = 0; row < model->rowCount(); ++row) {
        int id_a = model->index(row, 0).data().toInt(); // Récupérer l'id_a à partir du modèle

        if (id_a == idToSearch) {
            found = true;

            // Afficher ou traiter l'abonné trouvé selon vos besoins
            QString nom = model->index(row, 1).data().toString();
            QString prenom = model->index(row, 2).data().toString();
            QString email = model->index(row, 3).data().toString();
            QString paiment = model->index(row, 4).data().toString();

            // Faites quelque chose avec les données trouvées (par exemple, les afficher dans des champs de texte)
            ui->lineEdit_nom_2->setText(nom);
            ui->lineEdit_prenom_2->setText(prenom);
            ui->lineEdit_email_2->setText(email);
            ui->comboBox_2->setCurrentText(paiment);

            break; // Sortir de la boucle après avoir trouvé l'abonné
        }
    }

    if (!found) {
        // Gérer le cas où l'abonné n'a pas été trouvé
        qDebug() << "Abonné avec ID_A" << idToSearch << "non trouvé.";
        // Vous pouvez afficher un message à l'utilisateur ou prendre d'autres mesures nécessaires.
    }
}



void MainWindow::on_modifierButton_clicked()
{
    // 1. Récupérez les données à partir des champs de saisie ou d'autres éléments graphiques nécessaires.
    int idToSearch = ui->lineEdit_idChercher->text().toInt();
    QString nom = ui->lineEdit_nom_2->text();
    QString prenom = ui->lineEdit_prenom_2->text();
    QString email = ui->lineEdit_email_2->text();
    QString paiment = ui->comboBox_2->currentText();  // Vous devez probablement également récupérer la méthode de paiement.

    // 2. Utilisez ces données pour mettre à jour l'objet abonne.
    abonne a(idToSearch, nom, prenom, email, paiment);

    // 3. Appelez une fonction de la classe abonne pour effectuer la mise à jour dans la base de données.
    bool test = a.modifier();  // Vous devrez implémenter une fonction modifier() dans votre classe abonne.

    if (test) {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Mise à jour effectuée.\n"
                                             "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("Mise à jour non effectuée.\n"
                                          "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
    }
}


void MainWindow::on_precedentButton_2_clicked()
{
    int currentIndex = ui->stackedWidget->currentIndex();
       if (currentIndex > 1) {
           ui->stackedWidget->setCurrentIndex(currentIndex - 1);
       }
}

void MainWindow::on_suivantButton_3piu_clicked()
{
   ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_supprimerButton_clicked() {
    // Récupérez l'ID à partir de l'interface utilisateur
    int idToSupprimer = ui->lineEdit_idASupprimer->text().toInt();

    // Créez un objet abonne et appelez la fonction de suppression
    abonne a;
    bool supprime = a.supprimer(idToSupprimer);

    if (supprime) {
        QMessageBox::information(this, tr("Succès"), tr("Suppression réussie."));
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de la suppression. Vérifiez l'ID."));
    }
}


void MainWindow::on_precedentButton_3_clicked()
{
    int currentIndex = ui->stackedWidget->currentIndex();
       if (currentIndex > 2) {
           ui->stackedWidget->setCurrentIndex(currentIndex - 1);
       }

}
void MainWindow::afficherAbonnes()
{
    abonne a;
    QSqlQueryModel *model = a.afficher();

    ui->tableWidget->clearContents();  // Nettoyer le contenu existant

    ui->tableWidget->setRowCount(model->rowCount());
    ui->tableWidget->setColumnCount(model->columnCount());

    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < model->columnCount(); ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(model->data(model->index(row, col)).toString());
            ui->tableWidget->setItem(row, col, item);
        }
    }
}

