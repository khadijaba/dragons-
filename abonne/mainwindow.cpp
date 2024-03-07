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
#include "abonne.h"
#include<QTableWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QSqlDatabase db = QSqlDatabase::addDatabase("QOCI");
    db.setHostName("LAPTOP-MT52CUOA");
    db.setPort(1521);
    db.setDatabaseName("test-bd");
    db.setUserName("khadijaba");
    db.setPassword("khadijaba");

    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();
        // Handle the error, e.g., show a message to the user or exit the application
    }

    connect(ui->ajouterButton, SIGNAL(clicked()), this, SLOT(on_ajouterButton_clicked()));
    connect(ui->chercherButton, SIGNAL(clicked()), this, SLOT(on_chercherButton_clicked()));
    connect(ui->modifierButton, SIGNAL(clicked()), this, SLOT(on_modifierButton_clicked()));
    connect(ui->supprimerButton, SIGNAL(clicked()), this, SLOT(on_supprimerButton_clicked()));



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



void MainWindow::on_ajouterButton_clicked()
{
    int id_a = ui->lineEdit_id->text().toInt();
       QString nom = ui->lineEdit_nom->text();
       QString prenom = ui->lineEdit_prenom->text();
       QString email = ui->lineEdit_email->text();
       QString paiment = ui->comboBox->currentText();
       //Contrôles de saisies
       QRegExp nomRegex("^[a-zA-Z]+$");
           if (!nom.contains(nomRegex)) {
               QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                     QObject::tr("Nom doit contenir uniquement des caractères alphabétiques."),
                                     QMessageBox::Cancel);
               return;
           }
           QRegExp prenomRegex("^[a-zA-Z ]+$");
             if (!prenom.contains(prenomRegex)) {
                 QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                       QObject::tr("Prénom peut contenir des caractères alphabétiques avec espaces."),
                                       QMessageBox::Cancel);
                 return;
             }

       if (!isValidEmail(email)) {
               QMessageBox::critical(this, tr("Error"), tr("Adresse email invalide. Veuillez saisir une adresse email valide."));
               return; // Arrêtez la fonction si l'email n'est pas valide
           }
       abonne a(id_a, nom, prenom, email, paiment);

       if (a.ajouter()) {
           afficherAbonnes();
           QMessageBox::information(this, tr("Success"), tr("Ajout effectué."));
           ui->lineEdit_id->clear();
                   ui->lineEdit_nom->clear();
                   ui->lineEdit_prenom->clear();
                   ui->lineEdit_email->clear();

       } else {
           QMessageBox::critical(this, tr("Error"), tr("Ajout non effectué. Vérifiez les données."));
       }

}

void MainWindow::on_modifierButton_clicked()
{
    //  Récupérez les données
      int idToSearch = ui->lineEdit_idChercher->text().toInt();
      QString nom = ui->lineEdit_nom_2->text();
      QString prenom = ui->lineEdit_prenom_2->text();
      QString email = ui->lineEdit_email_2->text();
      QString paiment = ui->comboBox_2->currentText();
      //Contrôles de saisies
      QRegExp nomRegex("^[a-zA-Z]+$");
          if (!nom.contains(nomRegex)) {
              QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                    QObject::tr("Nom doit contenir uniquement des caractères alphabétiques."),
                                    QMessageBox::Cancel);
              return;
          }
          QRegExp prenomRegex("^[a-zA-Z ]+$");
            if (!prenom.contains(prenomRegex)) {
                afficherAbonnes();
                QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                      QObject::tr("Prénom peut contenir des caractères alphabétiques avec espaces."),
                                      QMessageBox::Cancel);
                return;
            }

      if (!isValidEmail(email)) {
              QMessageBox::critical(this, tr("Error"), tr("Adresse email invalide. Veuillez saisir une adresse email valide."));
              return; // Arrêtez la fonction si l'email n'est pas valide
          }
      // mettre à jour l'objet abonne.
      abonne a(idToSearch, nom, prenom, email, paiment);

      bool test = a.modifier();

      if (test) {
          QMessageBox::information(nullptr, QObject::tr("OK"),
                                   QObject::tr("Mise à jour effectuée.\n"
                                               "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
          ui->lineEdit_idChercher->clear();
                 ui->lineEdit_nom_2->clear();
                 ui->lineEdit_prenom_2->clear();
                 ui->lineEdit_email_2->clear();
      } else {
          QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                QObject::tr("Mise à jour non effectuée.\n"
                                            "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
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

void MainWindow::on_supprimerButton_clicked()
{
    int idToSupprimer = ui->lineEdit_idASupprimer->text().toInt();

        // Créez un objet abonne et appelez la fonction de suppression
        abonne a;
        bool supprime = a.supprimer(idToSupprimer);

        if (supprime) {
            afficherAbonnes();
            QMessageBox::information(this, tr("Succès"), tr("Suppression réussie."));
        } else {
            QMessageBox::critical(this, tr("Erreur"), tr("Échec de la suppression. Vérifiez l'ID."));
        }

}
void MainWindow::afficherAbonnes()
{
    abonne a;
        QSqlQueryModel *model = a.afficher();

        ui->tableWidget->clearContents();

        ui->tableWidget->setRowCount(model->rowCount());
        ui->tableWidget->setColumnCount(model->columnCount());

        for (int row = 0; row < model->rowCount(); ++row) {
            for (int col = 0; col < model->columnCount(); ++col) {
                QTableWidgetItem *item = new QTableWidgetItem(model->data(model->index(row, col)).toString());
                ui->tableWidget->setItem(row, col, item);
            }
        }

}
bool MainWindow::isValidEmail(const QString &email)
{
    QRegExp regex(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    return regex.exactMatch(email);
}

void MainWindow::on_pdf_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save document", qApp->applicationDirPath(), "*.pdf");

          if (!fileName.isEmpty()) {
              QPrinter printer;
              printer.setOutputFormat(QPrinter::PdfFormat);
              printer.setOutputFileName(fileName);
              QMargins pageMargins(20, 20, 20, 20);

      #if QT_VERSION < QT_VERSION_CHECK(5, 3, 0)
              printer.setFullPage(false);
              printer.setPaperSize(QPrinter::A4);
              printer.setOrientation(QPrinter::Portrait);
              printer.setPageMargins(pageMargins.left(), pageMargins.top(), pageMargins.right(), pageMargins.bottom(), QPrinter::Millimeter);

      #else
              QPageLayout pageLayout;
              pageLayout.setMode(QPageLayout::StandardMode);
              pageLayout.setOrientation(QPageLayout::Portrait);
              pageLayout.setPageSize(QPageSize(QPageSize::A4));
              pageLayout.setUnits(QPageLayout::Millimeter);
              pageLayout.setMargins(QMarginsF(pageMargins));
              printer.setPageLayout(pageLayout);

      #endif

              temp.importer_pdf(printer); // Appel de la fonction d'impression

          }
}

void MainWindow::on_stat_clicked()
{
    int totalAbonnes = abonne::nombreTotalAbonnes();
        qDebug() << "Nombre total d'abonnés : " << totalAbonnes;
    // abonne::afficherRepartitionPaiement();
        QMessageBox::information(this, "Statistique", "Nombre total d'abonnés : " + QString::number(totalAbonnes));

        close();
}


