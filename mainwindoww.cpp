#include "mainwindoww.h"
//#include "ui_main_equipement.h"
//#include "ui_Mainwindow.h"
#include "ui_mainwindoww.h"
#include "chaine_interface.h"
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
#include <QSqlQuery>
#include <QTime>
#include <QMainWindow>
#include <QComboBox>
#include <QtCharts/QChart>
#include <QtCharts/QPieSeries>
#include <QtCharts/QValueAxis>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtSql> // Inclure les en-têtes de la bibliothèque Qt SQL
#include <QtCharts>
#include <QtNetwork/QSslSocket>
#include <QtNetwork/QSslConfiguration>
#include <QtNetwork/QSslError>
#include <QMainWindow>
#include <QSqlQueryModel>
#include <QPainter>
//#include "CodeQrWindow.h"
#include "equipement.h"
#include "historique.h"
//#include"mainwindoww.ui"




equipement_interface::equipement_interface(QWidget *parent)
  :QMainWindow(parent),
    ui(new Ui::equipement_interface)

{
    ui->setupUi(this);

    ui->tab_equip->setModel(SP.afficher());
}

equipement_interface::~equipement_interface()
{
    delete ui;

}


void equipement_interface::on_pb_ajouter_clicked()
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
           QMessageBox::information(nullptr, QObject::tr("Ajout equipement"),
                             QObject::tr(" ajout equipement avec succès"), QMessageBox::Ok);
                             ui->tab_equip->setModel(Sp.afficher());
       }
       ui->lineEdit_ID->clear();
       //ui->lineEdit_type->clear();
       ui->lineEdit_prix->clear();
       ui->dateEdit->clear();

       }
           historique h;
           QString textajouter = "L'ajout d'un equipement dans le base de donnes dont l 'ID est =" + QString::number(ID) + " a ete effectuee avec success";
           h.write (textajouter);
           QMessageBox::information(this , "Ajout réussi",  "L'ajout a été effectué avec succès.");


}

//recherche
void equipement_interface::on_pb_recherche_clicked()
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

/*void equipement_interface::on_pb_recherche2_clicked()
{
    Equipement Sp;
    int ID = ui->lineEdit_ID->text().toInt();

    // Vérifie si l'équipement avec l'ID recherché existe dans la base de données
    bool existe = Sp.RechercheEquipementParID(ID);

    if (existe) {
        // Affiche uniquement l'équipement correspondant à l'ID recherché
        QSqlQueryModel* model = Sp.afficher(ID);
        ui->tab_equip->setModel(model);
    } else {
        QMessageBox::information(this, "ID non trouvé", "L'ID spécifié n'existe pas dans la base de données.");
    }

    ui->lineEdit_ID->clear(); // Efface le contenu de l'QLineEdit après la recherche
}
*/

//Trier
void equipement_interface::on_radioButton_id_clicked()
{
    Equipement *Sp = new Equipement();
     ui->tab_equip->setModel(Sp->tri_ID());
}

void equipement_interface::on_radioButton_nom_clicked()
{
    Equipement *Sp = new Equipement();
     ui->tab_equip->setModel(Sp->tri_date());
}

void equipement_interface::on_radioButton_tlf_clicked()
{
    Equipement *Sp = new Equipement();
     ui->tab_equip->setModel(Sp->tri_type());
}

void equipement_interface::on_radioButton_tarif_clicked()
{
    Equipement *Sp = new Equipement();
     ui->tab_equip->setModel(Sp->tri_prix());
}


void equipement_interface::on_pb_supp_clicked()
{
    Equipement Sp;
    Sp.set_ID(ui->le_supp->text().toInt());
    bool test=Sp.supprimer(Sp.get_ID());
    QMessageBox msgbox;

    if (test)
       {
        msgbox.setText("Suppression avec succes");
        ui->tab_equip->setModel(Sp.afficher());

        historique h;
        QString textSuppression = "La suppression d'un equipement dans le base de donnes dont l 'ID est =" + QString::number(Sp.get_ID()) + " a ete effectuee avec success";
        h.write (textSuppression);
        QMessageBox::information(this , "Suppression réussi",  "La suppression a été effectué avec succès.");

        }
    else
        msgbox.setText("failed");
        msgbox.exec();
        ui->le_supp->clear();


}
/*void equipement_interface::on_pbcode_clicked()
{
    int equipementRow = ui->tab_pro->currentIndex().row(); // Récupérer l'index de la ligne sélectionnée
    QVariant idVariant = ui->tab_pro->model()->data(ui->tab_pro->model()->index(equipementRow, 0));
    int equipementId = idVariant.toInt(); // Convertir en int

    QSqlQuery qry;
    qry.prepare("SELECT * FROM Equipement");
    qry.exec();
    QString id, datee, type, prix;

    while (qry.next()) {
        int currentId = qry.value(0).toInt();
        if (currentId == equipementId) { // Rechercher la ligne correspondante
            equipementId = currentId; // Mise à jour de la valeur equipementId
            id = qry.value(0).toString();
            datee = qry.value(1).toString();
            type = qry.value(2).toString();
            prix = qry.value(3).toString();
            break; // Sortir de la boucle une fois que la ligne est trouvée
        }
    }

    QString contenuCodeQR = "ID:\t" + id + "\nDate:\t" + datee + "\nType:\t" + type + "\nPrix:\t" + prix;

    QrCode qr = QrCode::encodeText(contenuCodeQR.toUtf8().constData(), QrCode::Ecc::HIGH);

    // Lecture des pixels en noir et blanc
    QImage im(qr.getSize(), qr.getSize(), QImage::Format_RGB888);
    for (int y = 0; y < qr.getSize(); y++) {
        for (int x = 0; x < qr.getSize(); x++) {
            int color = qr.getModule(x, y); // 0 pour blanc, 1 pour noir

            if (color == 0)
                im.setPixel(x, y, qRgb(254, 254, 254)); // Blanc
            else
                im.setPixel(x, y, qRgb(0, 0, 0)); // Noir
        }
    }
    im = im.scaled(200, 200); // Redimensionner l'image

    // Afficher l'image du code QR dans le widget QListView
    QStandardItemModel *model = new QStandardItemModel;
    QStandardItem *item = new QStandardItem;
    item->setData(QVariant(QPixmap::fromImage(im)), Qt::DecorationRole);
    model->setItem(0, 0, item);
    ui->qrcodeequipement->setModel(model);//
}*/

/*void equipement_interface::genererEtAfficherCodeQR(const Equipement& equipement)
{
    // Générer le contenu du code QR à partir des informations de l'équipement
    QString contenuCodeQR = QString("ID: %1\nDate: %2\nType: %3\nPrix: %4")
            .arg(equipement.getID()).arg(equipement.getDate().toString(Qt::ISODate))
            .arg(equipement.getType()).arg(equipement.getPrix());

    // Générer et afficher le code QR
    QImage qrImage = qrEncoder->encode(contenuCodeQR);
    ui->lbl_codeqr->setPixmap(QPixmap::fromImage(qrImage));
}*/
/*void equipement_interface::genererEtAfficherCodeQR(int equipementID)
{
    // Récupérer les informations de l'équipement depuis la base de données
    Equipement equipement = DatabaseManager::getInstance().getEquipementByID(equipementID);

    // Vérifier si l'équipement existe
    if (equipement.getID() == -1) {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("L'équipement avec cet ID n'existe pas."), QMessageBox::Ok);
        return;
    }

    // Générer le contenu du code QR à partir des informations de l'équipement
    QString contenuCodeQR = QString("ID: %1\nDate: %2\nType: %3\nPrix: %4")
            .arg(equipement.getID()).arg(equipement.getDate().toString(Qt::ISODate))
            .arg(equipement.getType()).arg(equipement.getPrix());

    // Générer le code QR
    QImage qrImage = qrEncoder->encode(contenuCodeQR);

    // Créer une fenêtre pour afficher le code QR
    CodeQrWindow *codeQrWindow = new CodeQrWindow(this);
    codeQrWindow->setCodeQR(qrImage);
    codeQrWindow->exec();  // Afficher la fenêtre modale
}*/
/*void equipement_interface::on_pb_codeQr_clicked()
{
    // Récupérer les informations d'équipement que vous souhaitez inclure dans le code QR
    int ID = ui->lineEdit_ID->text().toInt();
    QDate datee = ui->dateEdit->date();
    QString type = ui->combobox_type->currentText();
    QString prix = ui->lineEdit_prix->text();

    // Générer le contenu du code QR à partir des informations d'équipement
    QString contenuCodeQR = QString("ID: %1\nDate: %2\nType: %3\nPrix: %4")
            .arg(ID).arg(datee.toString(Qt::ISODate)).arg(type).arg(prix);

    // Générer et afficher le code QR dans une fenêtre séparée
    QImage qrImage = qrEncoder->encode(contenuCodeQR);
    CodeQrWindow *codeQrWindow = new CodeQrWindow(this);
    codeQrWindow->setCodeQR(qrImage);
    codeQrWindow->exec();  // Afficher la fenêtre modale
}*/


/*void equipement_interface::on_pb_pdf_clicked()
{
    QString strStream;
    QTextStream out(&strStream);
    const int rowCount = ui->tab_equip->model()->rowCount();
    const int columnCount = ui->tab_equip->model()->columnCount();

    out << "<html>\n"
        "<head>\n"
        "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << QString("<title>%1</title>\n").arg("Liste des équipements")
        << "</head>\n"
        "<body bgcolor=\"#fffde0\" link=\"#fffde0\">\n"
        "<h1>Liste des équipements</h1>\n"
        "<table border=\"1\" cellspacing=\"0\" cellpadding=\"2\">\n";

    // headers
    out << "<thead><tr bgcolor=\"#f2f2f2\">"; // Changé la couleur de fond pour une meilleure visibilité
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
                out << QString("<td bgcolor=\"#ffffff\">%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;")); // Corrigé 'bkcolor' à 'bgcolor'
            }
        }
        out << "</tr>\n";
    }
    out << "</table>\n"
        "</body>\n"
        "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName("mypdffile.pdf");
    document->print(&printer);

    delete document; // Ajouté pour éviter une fuite de mémoire
}*/
void equipement_interface::on_pb_modifier_clicked()
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

        historique h;
        QString textajouter = "La modification d'un equipement dans le base de donnes dont l 'ID est =" + QString::number(ID) + " a ete effectuee avec success";
        h.write (textajouter);
        QMessageBox::information(this , "Modification réussie",  "L'ajout a été effectué avec succès.");
    }


    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Erreur de modification"),
                              QObject::tr("Erreur lors de la modification de l'équipement"), QMessageBox::Ok);
    }
    QString textajouter;
    int IDR = 0;
    historique h;
    QSqlQuery qry;
    qry.prepare("select * from EQUIPEMENT");
    if(qry.exec())
    {
        while (qry.next())
    {
    IDR =qry.value(0).toInt();
        }
    }
    textajouter = "La moification d'un equipement de la base de donnes dont la ID est = "+  QString::number(IDR)+" a ete effectuee avec succees";
    h.write(textajouter);

}
void equipement_interface::on_pb_his_clicked()
{
    historique h;
    ui->textBrowser_2->show();
    ui->textBrowser_2->setPlainText(h.read());
}


void equipement_interface::on_pb_stat_clicked()
{
    Equipement Sp;
    QSqlQueryModel *model = Sp.statistiqueEquipement(); // Initialisation de model avec les données statistiques

    if (model) {
        // Le reste du code pour traiter les données et afficher le graphique
        QPieSeries *series = new QPieSeries();

        // Ajouter des données au graphique
        for (int row = 0; row < model->rowCount(); ++row) {
            QString type = model->index(row, 0).data().toString();
            int count = model->index(row, 1).data().toInt();
            series->append(type, count);
        }

        // Créer un graphique à secteurs et ajouter la série de données
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Statistiques des types d'équipement");

        // Créer une vue de graphique et l'afficher
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
        chartView->resize(400, 300); // Ajustez la taille du graphique selon vos besoins

        // Afficher le graphique dans une nouvelle fenêtre ou un widget approprié
        chartView->show();
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Erreur de statistique"),
                              QObject::tr("Erreur lors de la récupération des données de statistique"), QMessageBox::Ok);
    }
}
void equipement_interface::on_pb_pdf_clicked()
{
    /*QString strStream;
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

    // Créer un document QTextDocument à partir de strStream
    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    // Créer un objet QPrinter pour générer le PDF
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName("testpdf.pdf");

    // Imprimer le document sur l'imprimante PDF
    document->print(&printer);

    // Vérifier les erreurs
    if (printer.printerState() != QPrinter::Error) {
        qDebug() << "Le PDF a été créé avec succès.";
    } else {
        qDebug() << "Erreur lors de la création du PDF:" << printer.printerState();
    }

    // Nettoyer la mémoire en libérant le document
    delete document;*/

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

            SP.importer_pdf(printer); // Appel de la fonction d'impression

        }
}
/*bool equipement_interface::generatePdf_Equipement(const QString &sortingColumn, const QString &sortOrder) {
    QString filePath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation) + "/equipements.pdf";
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly)) {
        QSqlQuery query;
        QString sortOrderText = (sortOrder == "ASC") ? "Ascendant" : "Descendant";
        QString sortColumnText;
        if (sortingColumn == "ID_EQUIPEMENT") {
            sortColumnText = "ID de l'équipement";
        } else if (sortingColumn == "TYPE_EQUIPEMENT") {
            sortColumnText = "Type d'équipement";
        } else if (sortingColumn == "DATE_ACHAT") {
            sortColumnText = "Date d'achat";
        } else if (sortingColumn == "PRIX_EQUIPEMENT") {
            sortColumnText = "Prix de l'équipement";
        }

        QString sortInfo = "Tri " + sortOrderText + " par " + sortColumnText;

        QString htmlCode = "<html><head><title>Liste des équipements</title><style> \
                            body { font-family: Arial, sans-serif; background: linear-gradient(to bottom right, #ffffff, #e0e0e0); } \
                            table { border-collapse: collapse; width: 100%; background-color: #fff; border: 1px solid #ddd; } \
                            th, td { padding: 12px; text-align: left; border-bottom: 1px solid #ddd; } \
                            th { background-color: #4CAF50; color: white; font-weight: bold; } \
                            tr:nth-child(even) { background-color: #f2f2f2; } \
                            tr:hover { background-color: #ddd; } \
                            #logo { position: absolute; top: 20px; left: 20px; width: 100px; height: 100px; } \
                            </style></head><body><img id='logo' src=':/img/img/lollgo.png' alt='Logo'><h1 style='text-align:center;'>LISTE DES ÉQUIPEMENTS</h1><p style='text-align:center;'>" + sortInfo + "</p><table><tr><th>ID de l'équipement</th><th>Nom de l'équipement</th><th>Type d'équipement</th><th>Date d'achat</th><th>Prix de l'équipement</th></tr>";

        query.exec("SELECT ID_EQUIPEMENT, NOM_EQUIPEMENT, TYPE_EQUIPEMENT, DATE_ACHAT, PRIX_EQUIPEMENT FROM VOTRE_BASE_DE_DONNEES.TABLE_EQUIPEMENTS ORDER BY " + sortingColumn + " " + sortOrder);

        while (query.next()) {
            QString idEquipement = query.value("ID_EQUIPEMENT").toString();
            QString nomEquipement = query.value("NOM_EQUIPEMENT").toString();
            QString typeEquipement = query.value("TYPE_EQUIPEMENT").toString();
            QString dateAchat = query.value("DATE_ACHAT").toDate().toString("yyyy-MM-dd");
            QString prixEquipement = query.value("PRIX_EQUIPEMENT").toString();

            htmlCode += "<tr><td>" + idEquipement + "</td><td>" + nomEquipement + "</td><td>" + typeEquipement + "</td><td>" + dateAchat + "</td><td>" + prixEquipement + "</td></tr>";
        }

        htmlCode += "</table></body></html>";

        QTextDocument document;
        document.setHtml(htmlCode);

        QPdfWriter writer(&file);
        writer.setPageSize(QPagedPaintDevice::A4);
        writer.setPageMargins(QMarginsF(50, 0, 0, 0));
        document.print(&writer);
        file.close();
        return true;
    } else {
        return false;
    }
}*/
/*void equipement_interface::pb_pdf_clicked() {
    QString sortingColumn = "ID_EQUIPEMENT"; // Colonne par défaut pour le tri
    QString sortOrder = "ASC"; // Tri par défaut en ordre ascendant

    // Votre logique pour déterminer la colonne de tri et l'ordre (ASC ou DESC) à partir de l'interface utilisateur

    if (generatePdf_Equipement(sortingColumn, sortOrder)) {
        QMessageBox::information(this, "PDF généré", "Le PDF des équipements a été généré avec succès !");
    } else {
        QMessageBox::warning(this, "Erreur", "Une erreur s'est produite lors de la génération du PDF des équipements.");
    }
}*/



/*void equipement_interface::on_pb_code_clicked()
{
    Equipement Sp;

    QString texte = "Votre texte ici";


    QImage codeQR = Sp.genererCodeQR(texte);


    if (!codeQR.isNull()) {
        // Afficher le code QR dans une fenêtre ou un label
        QPixmap pixmap = QPixmap::fromImage(codeQR);
        ui->label_codeQR->setPixmap(pixmap);
        ui->label_codeQR->setScaledContents(true);
    } else {

        QMessageBox::critical(this, "Erreur", "Impossible de générer le code QR.");
    }
}*/

/*void equipement_interface::generateQRCode() {
    QString qrData = "Données à encoder dans le code QR";
    QZXing *qzxing = new QZXing();
    QImage qrImage = qzxing->encodeData(qrData);
    delete qzxing;

    if (!qrImage.isNull()) {
        qrLabel->setPixmap(QPixmap::fromImage(qrImage));
        qrLabel->setScaledContents(true);
    } else {
        QMessageBox::warning(this, "Erreur", "Erreur lors de la génération du code QR.");
    }
}*/

void equipement_interface::on_menu_clicked()
{
    chaine_interface *newWindow = new chaine_interface;
           newWindow->show();
           hide();
}


void equipement_interface::on_qr_clicked()
{
    int equipmentId = ui->lineEdit_ID->text().toInt();

        Equipement e;

        if (e.exists(equipmentId)) {

            QSqlQuery query;
            query.prepare("Select * from equipement");


            if(query.exec() && query.next()) {

                QString id = query.value("id").toString();
                QString date = query.value("datee").toString();
                QString type = query.value("type").toString();
                QString prix = query.value("prix").toString();



                QString equipmentDetails = "Equipment details: " + id + " " + date + " " + type + " " + prix;


                using namespace qrcodegen;
                QrCode qr = QrCode::encodeText(equipmentDetails.toUtf8().data(), QrCode::Ecc::MEDIUM);
                int scale = 10;
                int qrSize = qr.getSize() * scale;
                QImage qrImage(qrSize, qrSize, QImage::Format_RGB32);
                QRgb black = qRgb(0, 0, 0);
                QRgb white = qRgb(255, 255, 255);

                for (int y = 0; y < qrSize; ++y) {
                    for (int x = 0; x < qrSize; ++x) {

                        int moduleX = x / scale;
                        int moduleY = y / scale;
                        qrImage.setPixel(x, y, qr.getModule(moduleX, moduleY) ? black : white);
                    }
                }


                QMessageBox::information(this, "QR Code Generated", "QR Code Generated Successfully!");
                QLabel *label = new QLabel();
                label->setPixmap(QPixmap::fromImage(qrImage));
                label->setFixedSize(qrSize, qrSize);
                label->show();
            } else {
                QMessageBox::warning(this, "Equipment pas trouvé", "The specified equipment was not found in the database.");
            }
        } else {
            QMessageBox::warning(this, "Equipment pas trouvé", "The specified equipment was not found in the database.");
        }
}

void equipement_interface::on_recherche_textChanged(const QString &searchtext)
{
    ui->tab_equip->setModel(SP.search(searchtext));

}
