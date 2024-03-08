#include "chaine_interface.h"
#include "employe_interface.h"
#include "equipement_interface.h"
#include "abonne_interface.h"
#include "publicite_interface.h"
#include "emission_interface.h"
#include "ui_chaine_interface.h"
#include "chaine.h"
#include <QDialog>
#include <QRadioButton>
#include <QDebug>
#include <QLabel>
#include <QVBoxLayout>
#include <QStackedWidget>
#include <QMessageBox>
#include <QFileDialog>

int index = 1;

chaine_interface::chaine_interface(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::chaine_interface)
{
    ui->setupUi(this);
    ui->chaineid->setValidator  (new QIntValidator(0,999, this));
    ui->sr->setValidator  (new QIntValidator(0,999, this));
    ui->frequence->setValidator  (new QIntValidator(0,999, this));
    ui->polarisation->setValidator  (new QIntValidator(0,999, this));
    ui->fec->setValidator  (new QRegExpValidator(QRegExp("[A-Za-z]+"), this));
    ui->type->setValidator  (new QRegExpValidator(QRegExp("[A-Za-z]+"), this));
    ui->nom->setValidator  (new QRegExpValidator(QRegExp("[A-Za-z]+"), this));
    afficherchaine();


}

chaine_interface::~chaine_interface()
{
    delete ui;
}

void chaine_interface::on_suivant_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void chaine_interface::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void chaine_interface::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void chaine_interface::on_gestion_chaines_clicked()
{
    chaine_interface *newWindow = new chaine_interface;
    ui->stackedWidget->setCurrentIndex(0);
    newWindow->show();
    hide();
}

void chaine_interface::on_gestion_employes_clicked()
{
    employe_interface *newWindow = new employe_interface;
    newWindow->show();
    hide();
}

void chaine_interface::on_gestion_equipements_clicked()
{
    equipement_interface *newWindow = new equipement_interface;
    newWindow->show();
    hide();
}

void chaine_interface::on_gestion_abonnes_clicked()
{
    abonne_interface *newWindow = new abonne_interface;
    newWindow->show();
    hide();

}

void chaine_interface::on_gestion_publicites_clicked()
{
    publicite_interface *newWindow = new publicite_interface;
    newWindow->show();
    hide();
}

void chaine_interface::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    afficherchaine();
}

void chaine_interface::on_pushButton_7_clicked()
{
    int id = ui->lineEdit_14->text().toInt();
    Chaine temp;
    if(temp.supprimer(id)){
        QMessageBox::information(this, tr("Success"), tr("Ajout effectué."));
    }
    ui->stackedWidget->setCurrentIndex(1);

}

void chaine_interface::on_pushButton_16_clicked()
{
    int id = ui->modifier_id->text().toInt();
    int polarisation = ui->modifier_polarisation->text().toInt();
    int frequence = ui->modifier_frequence->text().toInt();
    int sr = ui->modifier_sr->text().toInt();
    //QString nom = ui->modifier_nom->text();
    QString type = ui->modifier_type->text();
    QString fec = ui->modifier_fec->text();
    QString satellite = ui->modifier_satellite->currentText();
    Chaine c =Chaine(id,satellite,NULL,frequence,polarisation,sr,fec,type,NULL);
    if(c.modifier(id))
    {
        QMessageBox::information(this, tr("Success"), tr("modification effectué."));
    }



    ui->stackedWidget->setCurrentIndex(1);
}

void chaine_interface::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void chaine_interface::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void chaine_interface::on_gestion_emissions_clicked()
{
    emission_interface *newWindow = new emission_interface;
    newWindow->show();
    hide();
}

void chaine_interface::on_pushButton_41_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void chaine_interface::on_pushButton_43_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void chaine_interface::on_pushButton_11_clicked()
{
    qApp->quit();
}
void chaine_interface::on_pushButton_2_clicked()
{

    int id = ui->chaineid->text().toInt();

    int polarisation = ui->polarisation->text().toInt();
    int frequence = ui->frequence->text().toInt();
    int sr = ui->sr->text().toInt();
    QString nom = ui->nom->text();
    QString type = ui->type->text();
    QString fec = ui->fec->text();
    QString satellite = ui->satellite->currentText();

    Chaine c =Chaine(id,satellite,nom,frequence,polarisation,sr,fec,type,NULL);
    if(c.ajouter()){
        afficherchaine();
                QMessageBox::information(this, tr("Success"), tr("Ajout effectué."));
                ui->chaineid->clear();
                ui->nom->clear();
                ui->type->clear();
                ui->frequence->clear();
                ui->polarisation->clear();
                ui->fec->clear();
                ui->sr->clear();


    }


}
void chaine_interface::afficherchaine()
{
    Chaine c;
    QSqlQueryModel *model = c.afficher();

    //ui->tableWidget->clearContents();

    ui->tableWidget->setRowCount(model->rowCount());
    ui->tableWidget->setColumnCount(model->columnCount());

    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < model->columnCount(); ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(model->data(model->index(row, col)).toString());
            ui->tableWidget->setItem(row, col, item);

        }
    }
}

void chaine_interface::on_pushButton_17_clicked()
{
    int idToSearch = ui->modifier_id->text().toInt();


      Chaine c;
      QSqlQueryModel *model = c.afficher();



      for (int row = 0; row < model->rowCount(); ++row) {
          int id = model->index(row, 0).data().toInt(); // Récupérer l'id_a à partir du modèle

          if (id== idToSearch) {



              QString nom = model->index(row, 5).data().toString();
              QString type = model->index(row, 3).data().toString();
              QString sr  = model->index(row, 1).data().toString();
              QString frequence = model->index(row, 4).data().toString();
              QString polarisation = model->index(row, 7).data().toString();
              QString fec = model->index(row, 8).data().toString();





              ui->modifier_nom->setText(nom);
              ui->modifier_type->setText(type);
              ui->modifier_sr->setText(sr);
              ui->modifier_polarisation->setText(polarisation);
              ui->modifier_fec->setText(fec);
              ui->modifier_frequence->setText(frequence);


          }
      }
}

void chaine_interface::on_recherche_1_clicked()
{
    QString search = ui->recherche->text();
        QSqlQueryModel *model = temp.recherche(search);
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
}



void chaine_interface::on_tri_clicked()
{

        QSqlQueryModel *model = temp.tri();
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

}




void chaine_interface::on_pdf_clicked()
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

void chaine_interface::on_stats_clicked()
{
    QtCharts::QChartView* chartView = temp.stats();

    // Créez une fenêtre de dialogue pour afficher le graphique
    QDialog* chartDialog = new QDialog(this);
    chartDialog->setWindowTitle("Comparaison des types de chaînes");
    chartDialog->resize(800, 600);

    // Ajoutez le graphique à la fenêtre de dialogue
    QVBoxLayout* layout = new QVBoxLayout(chartDialog);
    layout->addWidget(chartView);

    // Configurez la fenêtre de dialogue
    chartDialog->setModal(true);

    // Affichez la fenêtre de dialogue
    chartDialog->exec();

    // Libérez la mémoire
    delete chartDialog;
}
