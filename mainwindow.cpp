#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QTableView>
#include<QDebug>
#include <QSqlError>
#include<QMessageBox>
#include <QPainter>
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("LAPTOP-MT52CUOA");
    db.setPort(1521);
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("ayoub");
    db.setPassword("ayoub");
    if (!db.open()) {
           qDebug() << "Failed to open database:" << db.lastError().text();
    }


connect(ui->ajouterButton, SIGNAL(clicked()), this, SLOT(on_ajouterButton_clicked()));
connect(ui->rechercherButton, SIGNAL(clicked()), this, SLOT(on_chercherButton_clicked()));
connect(ui->modifierButton, SIGNAL(clicked()), this, SLOT(on_modifierButton_clicked()));
connect(ui->supprimerButton, SIGNAL(clicked()), this, SLOT(on_supprimerButton_clicked()));


    ui->comboBox->addItem("Electricien");
    ui->comboBox->addItem("employe");
    ui->comboBox->addItem("ingenieur");

    ui->comboBox->addItem("présent");
    ui->comboBox->addItem("absent");
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ajouterButton_clicked()
{   
        int Id = ui->lineEdit_Id->text().toInt();
        QString Nom = ui->lineEdit_Nom->text();
        QString Prenom = ui->lineEdit_Prenom->text();
        QString Email = ui->lineEdit_Email->text();
        QString Type = ui->comboBox->currentText();
        QString presence = ui->comboBox_3->currentText();
        employe e(Id,Nom,Prenom,Email,Type,presence);
        bool test = e.ajouter();
        afficheremploye();
        if (test != true){
            QMessageBox::information(this, tr("Success"), tr("Ajout effectué."));
        }

        ui->lineEdit_Id->clear();
        ui->lineEdit_Nom->clear();
        ui->lineEdit_Prenom->clear();
        ui->lineEdit_Email->clear();
        //ui->comboBox->clear();
        //ui->comboBox_3->clear();

    }

void MainWindow::on_supprimerButton_clicked() {
    // Récupérez l'ID à partir de l'interface utilisateur
    int idToSupprimer = ui->lineEdit_Id->text().toInt();

    // Créez un objet abonne et appelez la fonction de suppression
    employe e;
    bool supprime = e.supprimer(idToSupprimer);

    if (supprime) {
        QMessageBox::information(this, tr("Succès"), tr("Suppression réussie."));
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de la suppression. Vérifiez l'ID."));
    }
}

void MainWindow::afficheremploye()
{
    employe e;
    QSqlQueryModel *model = e.afficher();

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

bool MainWindow::modifier(int Id)
{
    employe* e = chercher(Id);

    if (e != nullptr) {
        e->setId(ui->lineEdit_Id_5->text().toInt());
        e->setNom(ui->lineEdit_Nom_6->text());
        e->setPrenom(ui->lineEdit_Prenom_7->text());
        e->setEmail(ui->lineEdit_Email_8->text());
        ui->comboBox_2->setCurrentText(e->get_Type());
        ui->comboBox_4->setCurrentText(e->get_presence());




        bool success = modifier(Id);

        if (success) {
            QMessageBox::information(this, "Information", "Informations de l'Equipement modifiées avec succès!", QMessageBox::Ok);
        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la modification des informations de l'Equipement!", QMessageBox::Ok);
        }

        delete e; // Assurez-vous de libérer la mémoire une fois que vous avez fini d'utiliser l'objet
        return success;
    } else {
        // Gérer le cas où l'equipement n'est pas trouvé
        QMessageBox::warning(this, "Avertissement", "Equipement non trouvé!", QMessageBox::Ok);
        return false;
    }
}

void MainWindow::rechercher_modifier(int Id)
{
    employe* e = chercher(Id);

    if (e != nullptr) {
        // Afficher les informations de l'equipement dans les lineEdits
        ui->lineEdit_Nom_6->setText(e->get_Nom());
        ui->lineEdit_Prenom_7->setText(e->get_Prenom());
        ui->lineEdit_Email_8->setText(e->get_Email());
        ui->comboBox_2->setCurrentText(e->get_Type());
        ui->comboBox_4->setCurrentText(e->get_presence());





        delete e; // Assurez-vous de libérer la mémoire une fois que vous avez fini d'utiliser l'objet
    } else {
        // Gérer le cas où l'equipement n'est pas trouvé
        QMessageBox::warning(this, "Avertissement", "Equipement non trouvé!", QMessageBox::Ok);
    }
}

void MainWindow::on_pushButton_modifier_clicked()
{
    int Id = ui->lineEdit_Id_5->text().toInt();
    modifier(Id);
}

employe* MainWindow::chercher(int Id){

    {
        QSqlQuery query;
        query.prepare("SELECT * FROM EMPLOYE WHERE ID = :Id");
        query.bindValue(":Id", Id);

        if (query.exec() && query.next()) {
            int Id=query.value("ID").toInt();
            QString Nom = query.value("NOM").toString();
            QString Prenom = query.value("PRENOM").toString();
            QString Email = query.value("EMAIL").toString();
            QString Type = query.value("TYPE").toString();
            QString presence= query.value("PRESENCE").toString();

            // Vous pouvez récupérer et initialiser FREQUENCE ici si nécessaire.

            // Créer un nouvel objet publicite avec les informations récupérées
            employe *e = new employe(Id,Nom,Prenom,Email, Type, presence);
            return e;
        } else {
            // En cas d'erreur ou si la publicité n'est pas trouvée, retourner nullptr ou gérer l'erreur selon vos besoins
            return nullptr;
        }
    }
}

    void MainWindow::rechercher(int Id)
    {
        employe *e = chercher(Id);

        if (e != nullptr) {
            // Afficher les informations de la publicité dans les lineEdits

            ui->lineEdit_Nom_6->setText(e->get_Nom());
            ui->lineEdit_Prenom_7->setText(e->get_Prenom());
            ui->lineEdit_Email_8->setText(e->get_Email());
            ui->comboBox_2->setCurrentText(e->get_Type());
           ui->comboBox_4->setCurrentText(e->get_presence());

            delete e; // Assurez-vous de libérer la mémoire une fois que vous avez fini d'utiliser l'objet
        } else {
            // Gérer le cas où la publicité n'est pas trouvée
            QMessageBox::warning(this, "Avertissement", "employe non trouvée!", QMessageBox::Ok);
        }
    }

void MainWindow::on_pushButton_recherchcer_clicked()
{
     int Id = ui->lineEdit_Id_5->text().toInt();
     chercher(Id);
 }








