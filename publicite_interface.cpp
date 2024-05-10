#include "abonne_interface.h"
#include "chaine_interface.h"
#include "employe_interface.h"
#include "publicite_interface.h"
#include "emission_interface.h"
#include "ui_publicite_interface.h"
#include "publicite.h"
#include <QMessageBox>
#include <QDate>
#include <QTableView>
#include <QDebug>
#include<QPdfWriter>
#include<QPdfWriter>
#include<QFileInfo>
#include<QFileDialog>
#include<QTextStream>
#include<QTextDocument>
#include<QPainter>
#include<QSqlError>

publicite_interface::publicite_interface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::publicite_interface)
{
    ui->setupUi(this);
    Timer=new QTimer(this);
    connect(Timer,SIGNAL(timeout()),this,SLOT(Timer_TimeOut_Event_Slot()));
    Timer->setInterval(1000);
    Timer->start();
    QTimer *timeer = new QTimer(this);
        connect(timeer, SIGNAL(timeout()), this, SLOT(updateTimer()));
        timeer->start(1000);
        connect(ui->pushButton_Ignorer, SIGNAL(clicked()), this, SLOT(on_pushButton_Ignorer_clicked()));

           // Rendre le bouton "Ignorer" invisible au départ
           ui->pushButton_Ignorer->setVisible(false);


    Player = new QMediaPlayer();
    QIcon icon(":/img/img/favourite.png");

       // Définir l'icône sur le bouton
       ui->pushButton_Favourite->setIcon(icon);

       // Redimensionner l'icône si nécessaire
       ui->pushButton_Favourite->setIconSize(QSize(32, 32)); // Par exemple, redimensionner l'icône en 32x32 pixels
     connect(ui->pushButton_Favourite, &QPushButton::clicked, this, &publicite_interface::showFavouriteMessage);
    //QTimer::singleShot(5000, this, SLOT(showIgnorerButton()));
    ui->pushButton_Player_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_Stop->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    ui->pushButton_Seek_Backward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->pushButton_Seek_Forward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    ui->horizontalSlider_Volume->setMinimum(0);
    ui->horizontalSlider_Volume->setMaximum(100);
    ui->horizontalSlider_Volume->setValue(30);




    Player->setVolume(ui->horizontalSlider_Volume->value());
    connect(Player,&QMediaPlayer::durationChanged,this,&publicite_interface::durationChanged);
    connect(Player,&QMediaPlayer::positionChanged,this,&publicite_interface::positionChanged);
    ui->horizontalSlider_Duration->setRange(0,Player->duration()/1000);
    //ui->pushButton_Ignorer = new QPushButton("Ignorer", this);
    afficher();

}

publicite_interface::~publicite_interface()
{
    delete ui;
}


void publicite_interface::durationChanged(qint64 duration)
{
    mDuration =duration/1000;
    ui->horizontalSlider_Duration->setMaximum(mDuration);

}
void publicite_interface::positionChanged(qint64 duration)
{
    if(!ui->horizontalSlider_Duration->isSliderDown())
    {
        ui->horizontalSlider_Duration->setValue(duration/1000);

    }
    updateDuration(duration/1000);

}
void publicite_interface::updateDuration(qint64 Duration)
{
    if(Duration ||mDuration)
    {
        QTime currentTime((Duration/3600) %60,(Duration / 60) %60,Duration %60, (Duration *1000)%1000);
        QTime Totaltime((mDuration/3600) %60,(mDuration / 60) %60, mDuration%60 , (mDuration *1000)%1000);
        QString Format="";
        if(mDuration > 3600) Format="hh:mm:ss";
            else
            Format="mm:ss";
        ui->label_current_Time->setText(currentTime.toString(Format));
        ui->label_Total_Time->setText(Totaltime.toString(Format));
    }

}


void publicite_interface::on_pushButton_2_clicked()
{
    close();
}

void publicite_interface::on_pushButton_3_pressed()
{

}
void publicite_interface::on_pushButton_2_pressed()
{
    close();

}
void publicite_interface::on_pushButton_ajouter_clicked()
{
    publicite p;
    QString TS = ui->combobox->currentText();
    QString firstChoice = ui->combobox->itemText(0);

    if (ui->lineedit_compagnie->text().isEmpty() ||

        ui->lineedit_budget->text().isEmpty() ||
        (!ui->dateedit_db->date().isValid() || !ui->dateedit_fn->date().isValid()) ||
       TS == firstChoice ||
        ui->lineedit_DUREE->text().isEmpty()) {
        QMessageBox::critical(this, "Error", "Tous les champs sont obligatoires!", QMessageBox::Ok);
        return; // Stop further execution
    }

    p.setCOMPAGNIE(ui->lineedit_compagnie->text());
    p.setBUDGET(ui->lineedit_budget->text().toDouble());
    p.setDate_DB(ui->dateedit_db->date());
    p.setDATE_FN(ui->dateedit_fn->date());
    p.setTYPE(TS);
    p.setDUREE(ui->lineedit_DUREE->text().toDouble());
    p.setID_PUBLICITE(ui->lineedit_ID_PUBLICITE->text().toDouble());

    if (p.ajouter()) {
        QMessageBox::information(this, "Message", "Publicité ajoutée", QMessageBox::Ok);
        afficher();
    }
}

publicite *publicite_interface::rechercherParId(int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM PUBLICITE WHERE ID_PUBLICITE = :id");
    query.bindValue(":id", id);

    if (query.exec()&& query.next()) {
        int ID_PUBLICITE=query.value("ID_PUBLICITE").toInt();
        QString compagnie = query.value("COMPAGNIE").toString();
        double budget = query.value("BUDGET").toDouble();
        QDate date_db = query.value("DATE_DB").toDate();
        QDate date_fn = query.value("DATE_FN").toDate();
        QString type = query.value("TYPE").toString();
        double duree = query.value("DUREE").toDouble();
        QString frequence = query.value("FREQUENCE").toString();
        // Vous pouvez récupérer et initialiser FREQUENCE ici si nécessaire.

        // Créer un nouvel objet publicite avec les informations récupérées
        publicite *p = new publicite(ID_PUBLICITE,compagnie, budget, date_db, date_fn, type, duree, frequence);
        return p;
    } else {
        // En cas d'erreur ou si la publicité n'est pas trouvée, retourner nullptr ou gérer l'erreur selon vos besoins
        return nullptr;
    }
}

void publicite_interface::rechercherPubliciteParId(int id)
{
    publicite *p = rechercherParId(id);

    if (p != nullptr) {
        // Afficher les informations de la publicité dans les lineEdits
        ui->lineedit_compagnie->setText(p->get_COMPAGNIE());
        ui->lineedit_budget->setText(QString::number(p->get_BUDGET()));
        ui->dateedit_db->setDate(p->get_DATE_DB());
        ui->dateedit_fn->setDate(p->get_DATE_FN());
        ui->combobox->setCurrentText(p->get_TYPE());
        ui->lineedit_DUREE_2->setText(QString::number(p->get_DUREE()));
        ui->lineedit_FREQUENCE_2->setText(p->get_FREQUENCE());

        delete p; // Assurez-vous de libérer la mémoire une fois que vous avez fini d'utiliser l'objet
    } else {
        // Gérer le cas où la publicité n'est pas trouvée
        QMessageBox::warning(this, "Avertissement", "Publicité non trouvée!", QMessageBox::Ok);
    }
}

void publicite_interface::on_pushButton_rechercher_clicked()
{
    int id = ui->lineedit_rechid->text().toInt();
    rechercherPubliciteParId(id);
}

bool publicite_interface::supprimerPubliciteParId(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM PUBLICITE WHERE ID_PUBLICITE = :id");
    query.bindValue(":id", id);
    return query.exec();
}

void publicite_interface::on_pushButton_supprimer_clicked()
{
    int id = ui->lineedit_25->text().toInt();
    if (supprimerPubliciteParId(id)) {
        QMessageBox::information(this, "Information", "Publicité supprimée avec succès!", QMessageBox::Ok);
        ui->lineedit_25->clear();
        afficher();

    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la suppression de la publicité!", QMessageBox::Ok);
    }
}

void publicite_interface::on_pushButton_afficher_clicked()
{
    publicite p;
    QSqlQueryModel *model = p.afficher();

    if (model != nullptr) {
        ui->tableView_afficher->setModel(model);
        ui->tableView_afficher->resizeColumnsToContents();
    }
}
bool publicite_interface::modifierPublicite(int id)
{
    publicite *p = rechercherParId(id);

    if (p!= nullptr) {
        p->setID_PUBLICITE(ui->lineedit_rechid->text().toInt());
        p->setCOMPAGNIE(ui->lineedit_COMPAGNIE_2->text());
        p->setBUDGET(ui->lineedit_BUDGET_2->text().toInt());
        ui->combobox_2->setCurrentText(p->get_TYPE());
        p->setDate_DB(ui->dateedit_db->date());
        p->setDATE_FN(ui->dateedit_fn->date());
        p->setFREQUENCE(ui->lineedit_FREQUENCE_2->text());
        p->setDUREE(ui->lineedit_DUREE_2->text().toInt());


        bool success = p->modifier(id);

        if (success) {
            QMessageBox::information(this, "Information", "Informations publicité  modifiées avec succès!", QMessageBox::Ok);
        afficher();
        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la modification des informations de la publicité!", QMessageBox::Ok);
        }

        delete p; // Assurez-vous de libérer la mémoire une fois que vous avez fini d'utiliser l'objet
        return success;
    } else {
        // Gérer le cas où la publicité n'est pas trouvé
        QMessageBox::warning(this, "Avertissement", "Publicités  non trouvé!", QMessageBox::Ok);
        return false;
    }
}

void publicite_interface::on_pushButton_modifier_clicked()
{
    int id = ui->lineedit_rechid->text().toInt();
    modifierPublicite(id);
}
void publicite_interface::on_pushButton_6_clicked()
{


        {
            QString fileName = QFileDialog::getSaveFileName(this, "Export PDF", QString(), "*.pdf");
            if (!fileName.isEmpty()) {
                if (QFileInfo(fileName).suffix().isEmpty()) {
                    fileName.append(".pdf");
                }

                QPdfWriter writer(fileName);
                QPainter painter(&writer);

                int rowCount = ui->tableView_afficher->model()->rowCount();
                int columnCount = ui->tableView_afficher->model()->columnCount();

                // Décalage vers le bas
                int verticalOffset = 200;

                QString strStream;
                QTextStream out(&strStream);

                out <<  "<html>\n"
                    "<head>\n"
                    "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                    <<  QString("<title>%1</title>\n").arg("TITLE")
                    <<  "</head>\n"
                    "<body bgcolor=#ffffff link=#5000A0>\n"
                    // Décalage du titre
                    "<h1 style='color:#341763; font-family:Montserrat SemiBold; font-size:25px; position:absolute; top:" + QString::number(verticalOffset) + "px; left:50%; transform: translateX(-50%);'>listes des publicités</h1>\n"

                    "<table border=1 cellspacing=0 cellpadding=2 width='100%'>\n";

                // headers
                out << "<thead><tr bgcolor=#f0f0f0>";
                for (int column = 0; column < columnCount; column++)
                    if (!ui->tableView_afficher->isColumnHidden(column))
                        out << QString("<th width='%1%'>%2</th>").arg(100/columnCount).arg(ui->tableView_afficher->model()->headerData(column, Qt::Horizontal).toString());
                out << "</tr></thead>\n";

                // data table
                for (int row = 0; row < rowCount; row++) {
                    out << "<tr>";
                    for (int column = 0; column < columnCount; column++) {
                        if (!ui->tableView_afficher->isColumnHidden(column)) {
                            QString data = ui->tableView_afficher->model()->data(ui->tableView_afficher->model()->index(row, column)).toString().simplified();
                            out << QString("<td bkcolor=0 width='%1%'>%2</td>").arg(100/columnCount).arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                        }
                    }
                    out << "</tr>\n";
                }
                out <<  "</table>\n"
                    "</body>\n"
                    "</html>\n";

                QTextDocument *document = new QTextDocument();
                document->setHtml(strStream);

                // Scale the painter
                double scale = 15.0;  // Adjust the scale factor here
                painter.scale(scale, scale);

                document->drawContents(&painter);

                delete document;
            }


        }

}

void publicite_interface::on_pushButton_tri_asc_clicked()
{
    QString critere = ui->comboBox_critereRech_2->currentText(); // Récupérer le critère de tri sélectionné

    QString query = "SELECT * FROM PUBLICITE ORDER BY " + critere + " ASC"; // Construction de la requête SQL

    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery(query);

    if (model->lastError().isValid()) {
        qDebug() << "Erreur lors du tri de la liste des athlètes : " << model->lastError().text();
        delete model;
        return;
    }

    // Mettre à jour le modèle du QTableView avec les données triées
    ui->tableView_afficher->setModel(model);
    ui->tableView_afficher->resizeColumnsToContents();

}

void publicite_interface::on_pushButton_tri_desc_clicked()
{
    QString critere = ui->comboBox_critereRech_2->currentText(); // Récupérer le critère de tri sélectionné

    QString query = "SELECT * FROM PUBLICITE ORDER BY " + critere + " DESC"; // Construction de la requête SQL

    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery(query);

    if (model->lastError().isValid()) {
        qDebug() << "Erreur lors du tri de la liste des publicités : " << model->lastError().text();
        delete model;
        return;
    }

    // Mettre à jour le modèle du QTableView avec les données triées
    ui->tableView_afficher->setModel(model);
    ui->tableView_afficher->resizeColumnsToContents();

}
void publicite_interface::on_actionopen_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Select video file"), "", tr("MP4 Files (*.mp4)"));

    Video = new QVideoWidget();
    Video->setGeometry(5, 5, ui->groupBox_Video->width() - 10, ui->groupBox_Video->height() - 10);
    Video->setParent(ui->groupBox_Video);
    Player->setVideoOutput(Video);

    Player->setMedia(QUrl(FileName));

    // Afficher le widget vidéo et démarrer la lecture après avoir configuré le lecteur vidéo
    Video->show();
    Player->play();
}

void publicite_interface::on_horizontalSlider_Duration_valueChanged(int value)
{
    Player->setPosition(value * 1000);

}

void publicite_interface::Timer_TimeOut_Event_Slot()
{
    ui->label_TimeDate->setText(QDateTime::currentDateTime().toString());
    ui->statusbar->showMessage(QDateTime::currentDateTime().toString());
    qDebug() <<"Timer Event  called";

}


void publicite_interface::on_pushButton_Player_Pause_clicked()
{
    if (IS_pause == true)
    {  IS_pause = false;
        Player->play();
        ui->pushButton_Player_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }
    else
    { IS_pause=true;
        Player->pause();
        ui->pushButton_Player_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
}

}

void publicite_interface::on_pushButton_Stop_clicked()
{
    Player->stop();
}

void publicite_interface::on_pushButton_Volume_clicked()
{
    if(IS_Muted==false)
    {IS_Muted =true;
         ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
         Player->setMuted(true);
    }
    else {
        IS_Muted=false;
        ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        Player->setMuted(false);
    }

}

void publicite_interface::on_horizontalSlider_Volume_valueChanged(int value)
{
    Player->setVolume(value);

}



void publicite_interface::on_pushButton_Seek_Backward_clicked()
{
    ui->horizontalSlider_Duration->setValue(ui->horizontalSlider_Duration->value()-20);
    Player->setPosition(ui->horizontalSlider_Duration->value() * 1000);


}

void publicite_interface::on_pushButton_Seek_Forward_clicked()
{
    ui->horizontalSlider_Duration->setValue(ui->horizontalSlider_Duration->value()+20);
    Player->setPosition(ui->horizontalSlider_Duration->value() * 1000);

}
void publicite_interface::on_pushButton_Ignorer_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Fermer la vidéo", "Voulez-vous vraiment fermer la vidéo ?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        Player->stop(); // Arrêter la lecture de la vidéo
        Video->setVisible(false); // Cacher le widget de la vidéo
    }
}
void publicite_interface::showIgnorerButton()
{
    ui->pushButton_Ignorer->setVisible(true);
}
void publicite_interface::updateTimer()
{
    static int secondsElapsed = 0; // Compteur de secondes

    secondsElapsed++; // Incrémenter le compteur de secondes

    // Convertir les secondes en format de temps (mm:ss)
    int minutes = secondsElapsed / 60;
    int seconds = secondsElapsed % 60;

    // Mettre à jour l'affichage du chronomètre dans votre interface Qt
    QString timeString = QString("%1:%2").arg(minutes, 2, 10, QLatin1Char('0')).arg(seconds, 2, 10, QLatin1Char('0'));
    ui->label_Chronometer->setText(timeString);

    // Si les 5 secondes sont écoulées, rendre le bouton "Ignorer" visible
    if (secondsElapsed == 5) {
        ui->pushButton_Ignorer->setVisible(true);
    }
}
void publicite_interface::on_pushButton_Cher1_clicked()
{
    // Récupérer le texte de la barre de recherche
    QString searchString = ui->Psearch_5->text().trimmed();

    // Construire la requête SQL pour la recherche
    QString queryStr = "SELECT * FROM PUBLICITE WHERE ID_PUBLICITE LIKE '%" + searchString + "%'";

    // Exécuter la requête
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(queryStr);

    // Vérifier si la requête a réussi
    if (model->lastError().isValid()) {
        qDebug() << "Erreur lors de la recherche : " << model->lastError().text();
        delete model;
        return;
    }

    // Mettre à jour le modèle du QTableView avec les résultats de la recherche
    ui->tableView_afficher->setModel(model);
    ui->tableView_afficher->resizeColumnsToContents();
}
void publicite_interface::afficher()
{
    QString queryStr = "SELECT * FROM PUBLICITE";

    // Exécuter la requête
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(queryStr);

    // Vérifier si la requête a réussi
    if (model->lastError().isValid()) {
        qDebug() << "Erreur lors de la recherche : " << model->lastError().text();
        delete model;
        return;
    }

    // Mettre à jour le modèle du QTableView avec les résultats de la recherche
    ui->tableView_afficher->setModel(model);
    ui->tableView_afficher->resizeColumnsToContents();
}
void publicite_interface::showFavouriteMessage()
{
    QMessageBox::information(this, "Ajout aux favoris", "Vidéo ajoutée aux listes des favoris avec succès");
}








void publicite_interface::on_menu_clicked()
{
    chaine_interface *newWindow = new chaine_interface;
               newWindow->show();
               hide();
}
