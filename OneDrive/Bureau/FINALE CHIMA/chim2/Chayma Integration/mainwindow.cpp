#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ressource.h"
#include "projet.h"
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QScrollArea>
#include <QFileDialog>
#include <QTimer>
#include <QChartView>
#include <QChart>
#include <QPieSeries>
#include"gestionnaireressources.h"
#include<stock.h>
#include<QSqlRecord>
#include<QTableView>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainWindow::show();
    ui->stackedWidget->setCurrentIndex(0);
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery("SELECT ID_R, NOM_R, IMAGE_R, DESCRIP_R FROM KHADIJABA.RESSOURCES");
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Les boutons de menus
void MainWindow::on_projet_menu_clicked() { ui->stackedWidget->setCurrentIndex(2); }
void MainWindow::on_etudeprojet_menu_clicked() { ui->stackedWidget->setCurrentIndex(3); }
void MainWindow::on_entrepreneurs_menu_clicked() { ui->stackedWidget->setCurrentIndex(4); }
void MainWindow::on_profil_menu_clicked() { ui->stackedWidget->setCurrentIndex(6); }
void MainWindow::on_formations_menu_clicked() { ui->stackedWidget->setCurrentIndex(5); }
void MainWindow::on_ressources_menu_clicked() { ui->stackedWidget->setCurrentIndex(7); }
void MainWindow::on_param_menu_clicked() {}

void MainWindow::on_login_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

// Gestion projet
void MainWindow::on_retour_p_clicked() { ui->stackedWidget->setCurrentIndex(1); }
void MainWindow::on_list_proj_clicked() { ui->fenetre_projets->setCurrentIndex(0); }
void MainWindow::on_returnlistproject_clicked() { ui->fenetre_projets->setCurrentIndex(0); }
void MainWindow::on_ajout_proj_clicked() { ui->fenetre_projets->setCurrentIndex(2); }
void MainWindow::on_calendrier_proj_clicked() { ui->fenetre_projets->setCurrentIndex(3); }
void MainWindow::on_stat_projet_clicked() { ui->fenetre_projets->setCurrentIndex(4); }

void MainWindow::on_out_menu_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



// Gestion etude
void MainWindow::on_retour_m_etude_clicked() { ui->stackedWidget->setCurrentIndex(1); }
void MainWindow::on_listeetude_clicked() { ui->fenetre_etudes->setCurrentIndex(0); }
void MainWindow::on_ajoutetude_clicked() { ui->fenetre_etudes->setCurrentIndex(1); }
void MainWindow::on_calendrieretude_clicked() { ui->fenetre_etudes->setCurrentIndex(2); }
void MainWindow::on_statetude_clicked() { ui->fenetre_etudes->setCurrentIndex(0); }

// Gestion entrepreneurs
void MainWindow::on_retour_m_entrepreneur_clicked() { ui->stackedWidget->setCurrentIndex(1); }
void MainWindow::on_listeentrepreneur_clicked() { ui->fenetre_entrepreneur->setCurrentIndex(0); }
void MainWindow::on_ajoutentrepreneur_clicked() { ui->fenetre_entrepreneur->setCurrentIndex(1); }
void MainWindow::on_calendrierentrepre_clicked() { ui->fenetre_entrepreneur->setCurrentIndex(2); }
void MainWindow::on_statentrepreneur_clicked() { ui->fenetre_entrepreneur->setCurrentIndex(3); }

// Gestion coachs
void MainWindow::on_retour_m_profil_clicked() { ui->stackedWidget->setCurrentIndex(1); }
void MainWindow::on_profile_2_clicked() { ui->fenetre_coach->setCurrentIndex(0); }
void MainWindow::on_message_clicked() { ui->fenetre_coach->setCurrentIndex(1); }
void MainWindow::on_list_utilisateurs_clicked() { ui->fenetre_coach->setCurrentIndex(2); }
void MainWindow::on_statprofile_clicked() { ui->fenetre_coach->setCurrentIndex(4); }

// Gestion ressources
void MainWindow::on_retour_m_ressources_clicked() { ui->stackedWidget->setCurrentIndex(1); }
void MainWindow::on_listeressources_clicked() { ui->fenetre_ressources->setCurrentIndex(0); }
void MainWindow::on_ajouter_ressource_clicked() { ui->fenetre_ressources->setCurrentIndex(1); }

// Gestion formations
void MainWindow::on_retour_m_formations_clicked() { ui->stackedWidget->setCurrentIndex(1); }
void MainWindow::on_Foramationslist_clicked() { ui->fenetre_formations->setCurrentIndex(0); }
void MainWindow::on_formateurlist_clicked() { ui->fenetre_formations->setCurrentIndex(1); }
void MainWindow::on_calendrierformations_clicked() { ui->fenetre_formations->setCurrentIndex(2); }
void MainWindow::on_statformation_clicked() { ui->fenetre_formations->setCurrentIndex(3); }





void MainWindow::afficherRessources()
{
    ressource r;
    QSqlQueryModel *model = r.afficher_ressource();
    ui->tableView->setModel(model);
}

void MainWindow::on_supprimerRessource_clicked()
{
    int idToSupprimer = ui->lineEdit_idASupprimer->text().toInt();
    ressource r;
    bool supprime = r.supprimer_ressource(idToSupprimer);
    if (supprime) {
        QMessageBox::information(this, tr("Succès"), tr("Suppression réussie."));
        afficherRessources();
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de la suppression. Vérifiez l'ID."));
    }
}

void MainWindow::on_modifierButton_clicked()
{
    int idToSearch = ui->lineEdit_idChercher->text().toInt();
    QString nom_R = ui->comboBox_nom_R_2->currentText();
    QString descrip_R = ui->lineEdit_description_R_2->text();
    QString image_path = ui->imagePathLabel_2->text();



    ressource r(idToSearch, nom_R, descrip_R, image_path);
    bool test = r.modifier_ressource();
    if (test) {
        QMessageBox::information(this, tr("Succès"), tr("Mise à jour effectuée."));
        afficherRessources();
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de la modification. Veuillez vérifier l'ID."));
    }
}

void MainWindow::on_chercherButton_clicked()
{
    int idToSearch = ui->lineEdit_idChercher->text().toInt();
    ressource r;
    QSqlQueryModel *model = r.afficher_ressource();
    bool found = false;
    for (int row = 0; row < model->rowCount(); ++row) {
        int id_R = model->index(row, 0).data().toInt();
        if (id_R == idToSearch) {
            found = true;
            QString nom_R = model->index(row, 1).data().toString();
            QString descrip_R = model->index(row, 2).data().toString();
            QString image_R = model->index(row, 3).data().toString();

            ui->comboBox_nom_R_2->currentText();
            ui->lineEdit_description_R_2->setText(descrip_R);
            ui->imagePathLabel_2->setText(image_R);
            break;
        }
    }
    if (!found) {
        QMessageBox::critical(this, tr("Erreur"), tr("ID non trouvé."));
    }
}

void MainWindow::on_ajouter_r_clicked()
{
    int id_R = ui->lineEdit_id->text().toInt();
    qDebug()<<id_R;
    QString nom_R = ui->comboBox_nom->currentText();
    QString descrip_R = ui->lineEdit_description_R->text();
    QString image_path = ui->imagePathLabel->text();


    ressource r(id_R, nom_R, image_path, descrip_R);
    if (r.ajouter_ressource()) {
        QMessageBox::information(this, tr("Succès"), tr("Ajout effectué."));
        afficherRessources();
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Ajout non effectué. Veuillez vérifier les données."));
    }

}

void MainWindow::on_modifierButton_2_clicked()
{
      ui->fenetre_ressources->setCurrentIndex(2);

}

void MainWindow::on_refresh_clicked()
{
    afficherRessources();

}

void MainWindow::on_ajjj_clicked()//button ajouter(stacked widget)
{
    ui->fenetre_ressources->setCurrentIndex(1);

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

            QString logoPath = "C:\\Users\\benay\\OneDrive\\Bureau\\chima\\Chayma Integration\\icon\\logos.png";
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
            painter.drawText(titleRect, "La liste des ressources", QTextOption(Qt::AlignLeft));

            // Afficher la liste des abonnés
            ressource r;
            QSqlQueryModel *model = r.afficher_ressource();
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



void MainWindow::on_statressources_clicked()
{
    ui->fenetre_ressources->setCurrentIndex(4);


}

void MainWindow::on_calendrierdisp_clicked()
{
    ui->fenetre_ressources->setCurrentIndex(3);

}





void MainWindow::on_pb_tri_clicked()
{
   ressource r;
        QSqlQueryModel *model = r.tri_nom_R() ;

        ui->tableView->setModel(model);

}





void MainWindow::on_openStockDialogButton_clicked() {
   stock dialog(this); // Assurez-vous que StockDialog est inclus dans MainWindow
    int result = dialog.exec(); // Exécute le dialogue modalement et attend la fermeture

    if (result == QDialog::Accepted) {
        // L'utilisateur a cliqué sur "Save" dans StockDialog
        // Ici, vous pouvez rafraîchir vos données dans MainWindow ou effectuer d'autres actions nécessaires
    } else {
        // L'utilisateur a annulé le dialogue ou l'a fermé d'une autre manière
    }
}



void MainWindow::on_buttonAjouterDemande_clicked()
{
    gestionnaireressources *gestionnaire = new gestionnaireressources(this);
        gestionnaire->setModal(true); // Optionnel : Rend la fenêtre modale
        gestionnaire->show();
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
void MainWindow::showStatistics()
{
    // Exemple de récupération de données et de comptage par catégorie
    QMap<QString, int> stats;
    QSqlQuery query("SELECT categorie, COUNT(*) FROM RESSOURCES GROUP BY categorie");
    while (query.next()) {
        QString categorie = query.value(0).toString();
        int count = query.value(1).toInt();
        stats[categorie] = count;
    }

    // Création du graphique à secteurs
    QPieSeries *series = new QPieSeries();
    for (auto it = stats.constBegin(); it != stats.constEnd(); ++it) {
        series->append(it.key(), it.value());
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des Ressources par Catégorie");

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("Statistiques");
    QVBoxLayout *layout = new QVBoxLayout(dialog);
    layout->addWidget(chartView);

    dialog->setLayout(layout);
    dialog->resize(600, 400); // Ajustez la taille selon vos besoins
    dialog->exec();
}
void MainWindow::displaystatistiquesParNom() {
    ressource r;
    QSqlQueryModel *model = r.statistiquesParNom(); // Utilisez votre méthode actuelle pour obtenir les données

    QPieSeries *series = new QPieSeries();
    // Remplir la série avec des données
    for (int i = 0; i < model->rowCount(); ++i) {
        int count = model->record(i).value(1).toInt();
        QString label = model->record(i).value(0).toString() + QStringLiteral(" [%1]").arg(count);
        QPieSlice *slice = series->append(label, count);

        // Personnalisation de la tranche
        slice->setLabelVisible();
        // Utilisez QColor pour définir une couleur personnalisée pour chaque tranche
        slice->setBrush(QColor(qrand() % 256, qrand() % 256, qrand() % 256));
    }
    QFont font;
            font.setFamily("Arial Unicode MS"); // Fonte supportant plus de caractères
            font.setPointSize(10);


    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques de ressources");
    chart->setTitleFont(font);
    chart->legend()->setFont(font);
    chart->legend()->setVisible(true);
    chart->setAnimationOptions(QChart::SeriesAnimations); // Activer les animations

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing); // Améliore la qualité du rendu

    // Configuration supplémentaire pour l'esthétique
    chartView->chart()->legend()->setAlignment(Qt::AlignRight);
    chartView->setMinimumSize(640, 480); // Définir une taille minimale pour une meilleure visibilité

    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("Statistiques des ressources");
    QVBoxLayout *layout = new QVBoxLayout(dialog);
    layout->addWidget(chartView);

    dialog->setLayout(layout);
    dialog->resize(700, 500); // Ajustez la taille du dialogue pour bien adapter le graphique
    dialog->exec();
}

void MainWindow::on_pb_stat_clicked()
{
    displaystatistiquesParNom();

}

void MainWindow::afficherToutesRessources() {
    ressource r;
    QSqlQueryModel *model = r.afficher_ressource(); // Récupérer un modèle avec toutes les données
    if (model) {
        // Définir le modèle sur le QTableView
        tableView->setModel(model);
        // Optionnel : ajuster la taille des colonnes pour adapter le contenu
        tableView->resizeColumnsToContents();
    } else {
        qDebug() << "Échec de récupération des données de la base de données.";
    }
}





