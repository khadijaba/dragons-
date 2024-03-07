#include "main_equipement.h"
#include "ui_main_equipement.h"
#include <QIntValidator>
#include<QMessageBox>
#include "equipement.h"
#include <iostream>
#include <string>
#include <QTextStream>
#include <QFile>
#include <QDataStream>
#include<QTextDocument>
#include<QtPrintSupport/QPrinter>
#include "equipement.h"
#include "main_equipement.h"
#include <QSqlQuery>
#include <QTime>
#include <QMainWindow>
#include <QComboBox>
#include "equipement.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);




    ui->tab_equip->setModel(SP.afficher());






}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pb_ajouter_clicked()
{
     Equipement Sp;
    int ID=ui->lineEdit_ID->text().toInt();
    QDate datee=ui->dateEdit->date();
    QString type = ui->combobox_type->currentText();
    QString prix=ui->lineEdit_prix->text();

      int x=0;

       std::string str_id = std::to_string(ID);

       if (ID==0) {
           QMessageBox::critical(nullptr, QObject::tr("WARNING"),
                               QObject::tr("id n'est pas vide"), QMessageBox::Ok);

                        x++;}

       QSqlQuery query;
           query.prepare("SELECT ID FROM Equipement WHERE ID = :id");
           query.bindValue(":id", ID);

           if (query.exec() && query.next()) {
               // Si l'ID existe déjà, afficher un message
               QMessageBox::critical(nullptr, QObject::tr("WARNING"),
                                     QObject::tr("L'ID existe déjà dans la base de données."), QMessageBox::Ok);
               x++;
           }

       else  if (type=="")
       {
           QMessageBox::critical(nullptr, QObject::tr("WARNING"),
                       QObject::tr("type n'est pas vide"), QMessageBox::Ok);
                 x++;
        }
       else if (prix=="")
       {
           QMessageBox::critical(nullptr, QObject::tr("WARNING"),
                       QObject::tr("pPRIX NEST PAS VIDEDEEE"), QMessageBox::Ok);
                 x++;
        }


       else if(x==0)
       {
       Equipement Sp(ID,datee,type,prix);
       bool toTest =Sp.Ajouter();
       if(toTest)
       {
           QMessageBox::information(nullptr, QObject::tr("Ajout sponsor"),
                             QObject::tr(" ajout equipement avec succès"), QMessageBox::Ok);
                             ui->tab_equip->setModel(Sp.afficher());
       }
       ui->lineEdit_ID->clear();
       //ui->lineEdit_type->clear();
       ui->lineEdit_prix->clear();
       ui->dateEdit->clear();

       }

}

//recherche
void MainWindow::on_pb_recherche_clicked()
{
    Equipement Sp;
    Sp.set_ID(ui->lineEdit_recherche->text().toInt());
    bool test=Sp.RechercheEquipementParID(Sp.get_ID());
    QMessageBox msgbox;

    if (test)
       {
        msgbox.setText("ID existe");
        ui->tab_equip->setModel(Sp.afficher());
        }
    else
        msgbox.setText("ID n'existe pas");
        msgbox.exec();
        ui->lineEdit_recherche->clear();
}



//Trier
void MainWindow::on_radioButton_id_clicked()
{
    Equipement *Sp = new Equipement();
     ui->tab_equip->setModel(Sp->tri_ID());
}

void MainWindow::on_radioButton_nom_clicked()
{
    Equipement *Sp = new Equipement();
     ui->tab_equip->setModel(Sp->tri_date());
}

void MainWindow::on_radioButton_tlf_clicked()
{
    Equipement *Sp = new Equipement();
     ui->tab_equip->setModel(Sp->tri_type());
}

void MainWindow::on_radioButton_tarif_clicked()
{
    Equipement *Sp = new Equipement();
     ui->tab_equip->setModel(Sp->tri_prix());
}


void MainWindow::on_pb_supprimer_clicked()
{
    Equipement Sp;
    Sp.set_ID(ui->le_supp->text().toInt());
    bool test=Sp.supprimer(Sp.get_ID());
    QMessageBox msgbox;

    if (test)
       {
        msgbox.setText("Suppression avec succes");
        ui->tab_equip->setModel(Sp.afficher());
        }
    else
        msgbox.setText("failed");
        msgbox.exec();
        ui->le_supp->clear();

}
void MainWindow::on_pb_pdf_clicked()
{
    QString strStream;
    QTextStream out(&strStream);
    const int rowCount = ui->tab_equip->model()->rowCount();
    const int columnCount = ui->tab_equip->model()->columnCount();

    out <<  "<html>\n"
            "<head>\n"
            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
            <<  QString("<title>%1</title>\n").arg("Liste des équipements")
            <<  "</head>\n"
            "<body bgcolor=\"#fffde0\" link=\"#fffde0\">\n"
            "<h1>Liste des équipements</h1>\n"
            "<table border=\"1\" cellspacing=\"0\" cellpadding=\"2\">\n";

    // headers
    out << "<thead><tr bgcolor=\"#fffde0\">";
    for (int column = 0; column < columnCount; column++) {
        if (!ui->tab_equip->isColumnHidden(column)) {
            out << QString("<th>%1</th>").arg(ui->tab_equip->model()->headerData(column, Qt::Horizontal).toString());
        }
    }
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tab_equip->isColumnHidden(column)) {
                QString data = ui->tab_equip->model()->data(ui->tab_equip->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
           "</body>\n"
           "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName("mypdffile.pdf");
    document->print(&printer);
}


void MainWindow::on_pb_modifier_clicked()
{
    int ID = ui->lineEdit_ID->text().toInt();
    QDate datee = ui->dateEdit->date();
    QString type = ui->combobox_type->currentText();
    QString prix = ui->lineEdit_prix->text();  // Modifier pour prendre en compte les prix non entiers

    // Vérifier si le prix n'est pas vide
    if (prix.isEmpty())
    {
        QMessageBox::critical(nullptr, QObject::tr("ATTENTION"),
                              QObject::tr("Le champ prix ne doit pas être vide"), QMessageBox::Ok);
        return;  // Sortir de la fonction si le prix est vide
    }

    // Créer une instance de Equipement avec les valeurs actuelles
    Equipement Sp(ID, datee, type, prix);

    // Appeler la fonction modifier de Equipement
    bool toTest = Sp.modifier();

    // Afficher un message en fonction du résultat de la modification
    if (toTest)
    {
        QMessageBox::information(nullptr, QObject::tr("Modification d'équipement"),
                                 QObject::tr("Équipement modifié avec succès"), QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Erreur de modification"),
                              QObject::tr("Erreur lors de la modification de l'équipement"), QMessageBox::Ok);
    }
}
