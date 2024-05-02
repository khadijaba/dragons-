#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QTableView>
#include<QDebug>
#include "smtpclient.h"
#include "emailadress.h"
#include<QMessageBox>
#include <QPainter>
#include <QFileDialog>
#include "abonne.h"
#include<QTableWidget>
#include <QPieSeries>
#include <QSqlQueryModel>
#include <QChartView>
#include <QChart>
#include <QTimer>
#include "mailling.h"
#include "translatordialog.h"
#include "translator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(surveillerConcurrence()));
        timer->start(24 * 3600 * 1000);

//configuration de la base
    QSqlDatabase db = QSqlDatabase::addDatabase("QOCI");
    db.setHostName("LAPTOP-MT52CUOA");
    db.setPort(1521);
    db.setDatabaseName("test-bd");
    db.setUserName("khadijaba");
    db.setPassword("khadijaba");

    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();

    }

    connect(ui->ajouterButton, SIGNAL(clicked()), this, SLOT(on_ajouterButton_clicked()));
    connect(ui->chercherButton, SIGNAL(clicked()), this, SLOT(on_chercherButton_clicked()));
    connect(ui->modifierButton, SIGNAL(clicked()), this, SLOT(on_modifierButton_clicked()));
    connect(ui->supprimerButton, SIGNAL(clicked()), this, SLOT(on_supprimerButton_clicked()));
    connect(ui->stat, SIGNAL(clicked()), this, SLOT(displayPaymentStatistics()));
    connect(ui->imageButton, SIGNAL(clicked()), this, SLOT(on_imageButton_clicked()));
    connect(ui->lineEdit_search, &QLineEdit::textChanged, this, &MainWindow::on_lineEdit_search_textChanged);
    connect(ui->refresh, &QPushButton::clicked, this, &MainWindow::on_refresh_clicked);
    connect(ui->openTranslatorDialogButton, &QPushButton::clicked, this, &MainWindow::openTranslatorDialog);

    ui->comboBox->addItem("carte bancaire");
    ui->comboBox->addItem("cheque");
    ui->comboBox->addItem("espece");

    int ret=Ar.connect_arduino(); // lancer la connexion à arduino

    switch(ret){
    case(0):qDebug()<< "arduino is available and connected to : "<< Ar.getarduino_port_name();
        break;
    case(1):qDebug() << "arduino is available but not connected to :" <<Ar.getarduino_port_name();
       break;
    case(-1):qDebug() << "arduino is not available";
    }
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
       QString image_path = ui->imagePathLabel->text();

       if (image_path.isEmpty()) {
              QMessageBox::critical(this, tr("Erreur"), tr("Veuillez sélectionner une image."));
              return;
          }

       //Contrôles de saisies

       if (!isValidNom(nom)) {
                    QMessageBox::critical(this, tr("Error"), tr(" Veuillez vérifier le nom!"));
                    return;
                }
       if (!isValidPrenom(prenom)) {
                    QMessageBox::critical(this, tr("Error"), tr("prenom invalide!"));
                    return;
                }

      if (!isValidEmail(email)) {
              QMessageBox::critical(this, tr("Error"), tr("Adresse email invalide. Veuillez saisir une adresse email valide."));
              return;
          }
       abonne a(id_a, nom, prenom, email, paiment,image_path);

       if (a.ajouter()) {
           afficherAbonnes();
           QMessageBox::information(this, tr("Success"), tr("Ajout effectué."));
            ui->lineEdit_id->clear();
            ui->lineEdit_nom->clear();
            ui->lineEdit_prenom->clear();
            ui->lineEdit_email->clear();
            ui->imagePathLabel->clear();


       } else {
            QMessageBox::critical(this, tr("Erreur"), tr("Ajout non effectué. Veuillez vérifier les données."));
       }

}

void MainWindow::on_modifierButton_clicked()
{
    //  Récupérez les données
      int idToSearch = ui->lineEdit_idChercher->text().toInt();
      QString nom = ui->lineEdit_nom_3->text();
      QString prenom = ui->lineEdit_prenom_3->text();
      QString email = ui->lineEdit_email_3->text();
      QString paiment = ui->comboBox_3->currentText();
      QString image_path = ui->imagePathLabel_2->text();


      //Contrôles de saisies

       if (!isValidNom(nom)) {
                    QMessageBox::critical(this, tr("Error"), tr(" nom invalide!"));
                    return;
                }
       if (!isValidPrenom(prenom)) {
                    QMessageBox::critical(this, tr("Error"), tr("prenom invalide!"));
                    return;
                }

      if (!isValidEmail(email)) {
              QMessageBox::critical(this, tr("Error"), tr("Adresse email invalide. Veuillez saisir une adresse email valide."));
              return;
          }
      // mettre à jour l'objet abonne.
      abonne a(idToSearch, nom, prenom, email, paiment,image_path);

      bool test = a.modifier();

      if (test) {
           afficherAbonnes();
          QMessageBox::information(nullptr, QObject::tr("OK"),
                                   QObject::tr("Mise à jour effectuée.\n"
                                               "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
          ui->lineEdit_idChercher->clear();
                 ui->lineEdit_nom_3->clear();
                 ui->lineEdit_prenom_3->clear();
                 ui->lineEdit_email_3->clear();


}}
bool MainWindow::isValidNom(const QString &nom)
{
    QRegExp regex("^[a-zA-Z ]+$");
    bool isValid = regex.exactMatch(nom);
    qDebug() << "Nom à valider : " << nom << ", Validation : " << (isValid ? "Valide" : "Invalide");
    return isValid;
}


bool MainWindow::isValidPrenom(const QString &prenom)
{
    QRegExp regex("^[a-zA-Z]+$");
    return regex.exactMatch(prenom);
}

bool MainWindow::isValidEmail(const QString &email)
{
    QRegExp regex(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    return regex.exactMatch(email);
}
void MainWindow::on_chercherButton_clicked()
{
    int idToSearch = ui->lineEdit_idChercher->text().toInt(); // Récupérer l'id à partir de l'interface utilisateur

       abonne a;
       QSqlQueryModel *model = a.afficher();

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
               ui->lineEdit_nom_3->setText(nom);
               ui->lineEdit_prenom_3->setText(prenom);
               ui->lineEdit_email_3->setText(email);
               ui->comboBox_3->setCurrentText(paiment);


                ui->lineEdit_idChercher->setEnabled(false);// Désactiver la modification de l'ID


               break;
           }
       }

       if (!found) {

           qDebug() << "Abonné avec ID_A" << idToSearch << "non trouvé.";

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
 // Remplir le tableau avec les données du modèle
        for (int row = 0; row < model->rowCount(); ++row) {
            for (int col = 0; col < model->columnCount(); ++col) {
                QTableWidgetItem *item = new QTableWidgetItem(model->data(model->index(row, col)).toString());
                ui->tableWidget->setItem(row, col, item);
            }
        }

}

void MainWindow::on_pdf_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save document", qApp->applicationDirPath(), "*.pdf");

    if (!fileName.isEmpty()) {
        QPrinter printer;
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(fileName);
        QMargins pageMargins(20, 20, 20, 20);

        QPageLayout pageLayout;
        pageLayout.setMode(QPageLayout::StandardMode);
        pageLayout.setOrientation(QPageLayout::Portrait);
        pageLayout.setPageSize(QPageSize(QPageSize::A4));
        pageLayout.setUnits(QPageLayout::Millimeter);
        pageLayout.setMargins(QMarginsF(pageMargins));
        printer.setPageLayout(pageLayout);

        QPainter painter;
        painter.begin(&printer);

        QString logoPath = "C:/Users/benay/OneDrive/Bureau/val1/abonne/images/LOGO_DRAGONS.png";
        QPixmap logo(logoPath);
        if (!logo.isNull()) {
            QRectF logoRect(20, 20, 200, 100);
            painter.drawPixmap(logoRect.toRect(), logo.scaled(logoRect.size().toSize(), Qt::KeepAspectRatio));
        } else {
            qDebug() << "Error: Logo is null or could not be loaded.";
            painter.drawText(20, 20, "Error: Logo is null or could not be loaded.");
        }

        // Afficher la date et l'heure actuelles
        QDateTime currentDateTime = QDateTime::currentDateTime();
        QString currentDateTimeStr = currentDateTime.toString("yyyy-MM-dd HH:mm:ss");
        painter.drawText(20, 140, "Date d'enregistrement: " + currentDateTimeStr);

        // Afficher le titre
        QFont titleFont;
        titleFont.setPointSize(16);
        painter.setFont(titleFont);
        QRectF titleRect(40, 160, 800, 100);
        painter.drawText(titleRect, "La liste des abonnés", QTextOption(Qt::AlignLeft));

        // Afficher la liste des abonnés
        abonne a;
        QSqlQueryModel *model = a.afficher();
        int rows = model->rowCount();
        int cols = model->columnCount();
        int cellWidth = 150;
        int cellHeight = 80;
        int tableX = 80;
        int tableY = 200;

        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                QString cellValue = model->data(model->index(row, col)).toString();
                QRectF cellRect(tableX + col * cellWidth, tableY + row * cellHeight, cellWidth, cellHeight);
                painter.drawRect(cellRect);
                painter.drawText(cellRect, Qt::AlignCenter, cellValue);
            }
        }

        painter.end();
    }
}

void MainWindow::on_triButton_clicked()
{
    QString orderBy;
    int index = ui->comboBoxTri->currentIndex();

    switch (index) {
    case 0:
        orderBy = "id_a ASC";
        break;
    case 1:
        orderBy = "id_a DESC";
        break;
    case 2:
        orderBy = "nom ASC";
        break;
    case 3:
        orderBy = "nom DESC";
        break;
    default:
        qDebug() << "Erreur: Option de tri non gérée.";
        return;
    }

    abonne temp;
    QSqlQueryModel *model = temp.tri(orderBy);

    if (model) {
        ui->tableWidget->setRowCount(model->rowCount());
        ui->tableWidget->setColumnCount(model->columnCount());

        for (int row = 0; row < model->rowCount(); ++row) {
            for (int col = 0; col < model->columnCount(); ++col) {
                QTableWidgetItem *item = new QTableWidgetItem(model->data(model->index(row, col)).toString());
                ui->tableWidget->setItem(row, col, item);
            }
        }

        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();

        delete model;
    } else {
        qDebug() << "Erreur lors de l'obtention des données triées.";
    }
}

void MainWindow::displayPaymentStatistics() {
    abonne a;
    QSqlQueryModel *model = a.statistiquePaiement();

    if (model) {
        QPieSeries *series = new QPieSeries();
        // Ajouter des données au graphique
        for (int row = 0; row < model->rowCount(); ++row) {
            QString payment = model->index(row, 0).data().toString();
            int count = model->index(row, 1).data().toInt();
            series->append(payment, count);
        }

        // Créer un graphique à secteurs et ajouter la série de données
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Statistiques de paiement");

        // Créer une vue de graphique et l'afficher
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
        chartView->resize(400, 300); // Ajustez la taille du graphique selon vos besoins

        // Afficher le graphique dans une nouvelle fenêtre ou un widget approprié
        chartView->show();
    }
}
void MainWindow::on_lineEdit_search_textChanged(const QString &text)
{

    QString filterText = text.toLower();
    int rowCount = ui->tableWidget->rowCount();

    for (int row = 0; row < rowCount; ++row) {
        QString nom = ui->tableWidget->item(row, 1)->text().toLower();
        bool matches = nom.contains(filterText);
        ui->tableWidget->setRowHidden(row, !matches);
    }
}
void MainWindow::on_imageButton_clicked()
{

    QString imagePath = QFileDialog::getOpenFileName(this, tr("Sélectionner une image"), QDir::homePath(), tr("Images (*.png *.jpg *.jpeg *.bmp)"));
        if (!imagePath.isEmpty()) {
            ui->imagePathLabel->setText(imagePath); // Afficher le chemin de l'image sélectionnée dans un QLabel par exemple
            QPixmap image(imagePath);
            if (!image.isNull()) {
                ui->imageLabel->setPixmap(image.scaled(ui->imageLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation)); // Afficher l'image dans un QLabel nommé imageLabel
            } else {
                QMessageBox::critical(this, tr("Erreur"), tr("L'image sélectionnée n'est pas valide."));
            }
        }
    }
void MainWindow::on_refresh_clicked()
{
    afficherAbonnes();
}

void MainWindow::on_stat_clicked()
{
    QPieSeries *series =new QPieSeries();

    series->setHoleSize(0.25);



   QChart *chart = new QChart();
   chart->addSeries(series);
   chart->legend()->setVisible(true);
   chart->setTitle("statistique des abonnes ");
   //chart->setTheme(QChart::ChartTheme::ChartThemeDark);
   chart->legend()->setAlignment(Qt::AlignBottom);
   chart->setVisible(true);

   QChartView *chartview = new QChartView(chart);
   chartview->setRenderHint(QPainter::Antialiasing);
   chartview->setVisible(true);
   setCentralWidget(chartview);

   displayPaymentStatistics();

}






void MainWindow::on_MAIL_abonne_clicked()
{
    mail = new mailling(this);
          mail->show();
}

void TranslatorDialog::on_translateButton_clicked() {
    QString sourceText = ui->sourceTextEdit->toPlainText();
    if (sourceText.isEmpty()) {
        qDebug() << "Aucun texte à traduire.";
        return;
    }

    QString sourceLang = ui->sourceLanguageComboBox->currentData().toString();
    QString targetLang = ui->targetLanguageComboBox->currentData().toString();

    // Supposons que la classe Translator ait une méthode translate prenant en compte les langues
    Translator translator;
    QString translatedText = translator.translate(sourceText, sourceLang, targetLang);

    ui->targetTextEdit->setPlainText(translatedText);
}

void MainWindow::openTranslatorDialog() {
    TranslatorDialog dialog(this); // Assurez-vous que TranslatorDialog est inclus.
    dialog.exec();
}

void MainWindow::on_tableWidget_cellActivated(int row, int column)
{

}

void MainWindow::on_ajouterButton_2_clicked()
{

  int id= ui->idarduino->text().toInt();

       qDebug() << data;




               // Call the modifierquantite function
               QString result = Ar.recuperdoone(id);

               // If the result is not "0", extract name and new quantity using substring
               if (result != "0") {
                      qDebug() << "result"<<result;
                      QByteArray x=result.toUtf8();
                      qDebug() << x ;
                      Ar.write_to_arduino(x);

               }else {

                   Ar.write_to_arduino("0");
               }



}
