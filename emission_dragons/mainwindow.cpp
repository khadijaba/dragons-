#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "emission.h"
#include "employe.h"
#include "connexion.h"
#include "arduino.h"
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QTableView>
#include<QDebug>
#include <QSqlError>
#include<QMessageBox>
#include <QPainter>
#include <QFileDialog>
#include<QtCharts>
#include <QDate>
#include <QDateTime>
#include <QMediaRecorder>
#include <QUrl>
#include <QDir>
#include <QFile>
#include <QStandardPaths>
#include <QCalendarWidget>

#include <QTimer>
#include <QSerialPort>
#include <QSerialPortInfo>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      M_Camera(nullptr),
      m_mediaRecorder(nullptr)
{
    ui->setupUi(this);


    // Initialize camera
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    if (cameras.isEmpty()) {
        qDebug() << "No cameras available.";
        return;
    }
    for(const QCameraInfo &infor : QCameraInfo::availableCameras())
    {
    qDebug()<< "Available camera: "<<infor.description();
    }
    M_Camera.reset(new QCamera(QCameraInfo::defaultCamera()));
    M_Camera->setViewfinder(ui->widget_Camera_View);
    // Initialize media recorder
    m_mediaRecorder.reset(new QMediaRecorder(M_Camera.data()));
    if (!m_mediaRecorder) {
        qDebug() << "Failed to create media recorder.";
        return;
    }

    m_mediaRecorder->setOutputLocation(QUrl::fromLocalFile(QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss") + ".mp4"));

    // Set audio settings
    QAudioEncoderSettings audioSettings;
    audioSettings.setCodec("audio/mpeg");
    audioSettings.setQuality(QMultimedia::HighQuality);
    m_mediaRecorder->setAudioSettings(audioSettings);

    // Set video settings
       QVideoEncoderSettings videoSettings;
       videoSettings.setCodec("video/mp4");
       videoSettings.setQuality(QMultimedia::HighQuality);
       m_mediaRecorder->setVideoSettings(videoSettings);


       //connection arduino
           int ret=A.connect_arduino();
           switch(ret){
           case(0):qDebug()<<"arduino connected to :"<<A.getarduino_port_name();
               break;
           case(1):qDebug()<<"arduino is available but not connected to:"<<A.getarduino_port_name();
               break;
           case(-1):qDebug()<<"arduino is not available";
           }
           QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(comfirmer_mdp()));

           connect(&timer, &QTimer::timeout, this, &MainWindow::handleArduinoData);
           timer.start(100);




           //connection sql
    QSqlDatabase db = QSqlDatabase::addDatabase("QOCI");
    db.setHostName("localhost");
    db.setPort(1521);
    db.setDatabaseName("test");
    db.setUserName("khouloud");
    db.setPassword("khouloud");

    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();
    }







}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ajouterButton_clicked()
{
    QString idText = ui->lineEdit_id->text();
    QString titre = ui->lineEdit_titre->text();
    QString description = ui->plainTextEdit->toPlainText();
    QString categorie = ui->comboBox_categorie->currentText();
    QTime duree = ui->timeEdit_duree->time();

    // Vérification de la validité de l'ID
    bool idOk;
    int idEmission = idText.toInt(&idOk);
    if (!idOk || idText.length() > 4) {
        QMessageBox::critical(this, tr("Erreur"), tr("L'ID doit être un entier de 4 chiffres au maximum."));
        return;
    }

    // Vérification de la longueur du titre
    if (titre.length() > 100) {
        QMessageBox::critical(this, tr("Erreur"), tr("Le titre ne doit pas dépasser 100 caractères."));
        return;
    }

    // Forcer la date de diffusion à la date courante
    ui->dateEdit_diffusion->setDate(QDate::currentDate());

    // Vérification de la date de diffusion
    QDate dateDiffusion = ui->dateEdit_diffusion->date();
    if (dateDiffusion < QDate::currentDate()) {
        QMessageBox::critical(this, tr("Erreur"), tr("La date de diffusion doit être égale ou postérieure à la date actuelle."));
        return;
    }

    // Création de l'objet emission
    emission e(idEmission, titre, description, dateDiffusion, categorie, duree);

    if (e.ajouter()) {
        afficherEmissions(); // Remplacez cette fonction par la fonction qui actualise l'affichage des émissions
        QMessageBox::information(this, tr("Success"), tr("Ajout effectué."));
        ui->lineEdit_id->clear();
        ui->lineEdit_titre->clear();
        ui->plainTextEdit->clear();
        ui->dateEdit_diffusion->setDate(QDate::currentDate());
        ui->comboBox_categorie->setCurrentIndex(0);
        ui->timeEdit_duree->setTime(QTime(0, 0));

    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Ajout non effectué. Veuillez vérifier les données."));
    }
}

void MainWindow::afficherEmissions()
{
    emission e;
    QSqlQueryModel *model = e.afficher();
    ui->tableWidget->clear();
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

void MainWindow::on_chercherButton_clicked()
{
    int idToSearch = ui->lineEdit_idChercher_3->text().toInt();
    emission e;
    QSqlQueryModel *model = e.afficher();
    bool found = false;
    for (int row = 0; row < model->rowCount(); ++row) {
        int idEmission = model->index(row, 0).data().toInt();
        if (idEmission == idToSearch) {
            found = true;

            QString titre = model->index(row, 1).data().toString();
            QString description = model->index(row, 2).data().toString();
            QDate dateDiffusion = model->index(row, 3).data().toDate();
            QString categorie = model->index(row, 4).data().toString();

            ui->lineEdit_titre_5->setText(titre);
            ui->plainTextEdit_4->setPlainText(description);
            ui->dateEdit_diffusion_5->setDate(dateDiffusion);
            ui->comboBox_categorie_5->setCurrentText(categorie);
            ui->lineEdit_idChercher_3->setEnabled(false);
            break;
        }
    }
    if (!found) {
        qDebug() << "Émission avec ID_EMISSION" << idToSearch << "non trouvée.";
        QMessageBox::critical(this, tr("Erreur"), tr(" Veuillez vérifier l'ID."));
    }
    ui->lineEdit_idChercher_3->setEnabled(true);
    ui->lineEdit_idChercher_3->clear();
}


void MainWindow::on_modifierButton_clicked()
{
    // Récupérez les données
    int idToSearch = ui->lineEdit_idChercher_3->text().toInt();
    QString titre = ui->lineEdit_titre_5->text();
    QString description = ui->plainTextEdit_4->toPlainText(); // Assurez-vous d'utiliser le bon plainTextEdit pour la description
    QDate dateDiffusion = ui->dateEdit_diffusion_5->date();
    QString categorie = ui->comboBox_categorie_5->currentText();
    QTime duree = ui->timeEdit_duree_5->time();

    // Créez un objet emission avec les données récupérées
    emission e(idToSearch, titre, description, dateDiffusion, categorie, duree);

    // Tentez de modifier l'émission dans la base de données
    bool test = e.modifier();

    if (test) {
        // Si la modification a réussi, rafraîchissez l'affichage et informez l'utilisateur
        afficherEmissions();
        QMessageBox::information(nullptr, QObject::tr("Succès"), QObject::tr("Mise à jour effectuée avec succès."));
        ui->lineEdit_idChercher_3->clear();
        ui->lineEdit_titre_5->clear();
        ui->plainTextEdit_4->clear();
        ui->dateEdit_diffusion_5->setDate(QDate::currentDate());
        ui->comboBox_categorie_5->setCurrentIndex(0);
        ui->timeEdit_duree_5->setTime(QTime(0, 0));
    } else {
        // En cas d'échec, affichez une erreur et vérifiez les logs pour plus de détails
        qDebug() << "Échec de la mise à jour : " << e.getLastSqlError(); // Assurez-vous que la classe emission a une méthode pour récupérer la dernière erreur SQL
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de la mise à jour. Vérifiez les logs pour plus de détails."));
    }
}




void MainWindow::on_supprimerButton_clicked()
{
    int idToSupprimer = ui->lineEdit_idASupprimer->text().toInt();

    // Créez un objet emission et appelez la fonction de suppression
    emission e;
    bool supprime = e.supprimer(idToSupprimer);

    if (supprime) {
        afficherEmissions(); // Remplacez cette fonction par la fonction qui actualise l'affichage des émissions
        QMessageBox::information(this, tr("Succès"), tr("Suppression réussie."));
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de la suppression. Vérifiez l'ID."));
    }

}



void MainWindow::on_pushButton_clicked()
{
    afficherEmissions();
}

void MainWindow::on_pushButton_5_clicked()
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

            // Afficher le logo
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
            titleFont.setPointSize(9);
            painter.setFont(titleFont);
            QRectF titleRect(40, 160, 800, 100);
            painter.drawText(titleRect, "La liste des émissions", QTextOption(Qt::AlignLeft));

            // Afficher la liste des émissions
            QSqlQueryModel *model = new QSqlQueryModel();
            model->setQuery("SELECT * FROM KHOULOUD.EMISSION");

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

void MainWindow::on_triParIdButton_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
       model->setQuery("SELECT * FROM KHOULOUD.EMISSION ORDER BY ID_EMISSION");

       // Effacer les données actuellement affichées dans le QTableWidget
       ui->tableWidget->clearContents();
       // Mettre à jour les données affichées dans le QTableWidget avec les nouvelles données triées
       for (int row = 0; row < model->rowCount(); ++row) {
           for (int col = 0; col < model->columnCount(); ++col) {
               QTableWidgetItem *item = new QTableWidgetItem(model->data(model->index(row, col)).toString());
               ui->tableWidget->setItem(row, col, item);
           }
       }

}

void MainWindow::on_triParTitreButton_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery("SELECT * FROM KHOULOUD.EMISSION ORDER BY TITRE");

        // Effacer les données actuellement affichées dans le QTableWidget
        ui->tableWidget->clearContents();
        // Mettre à jour les données affichées dans le QTableWidget avec les nouvelles données triées
        for (int row = 0; row < model->rowCount(); ++row) {
            for (int col = 0; col < model->columnCount(); ++col) {
                QTableWidgetItem *item = new QTableWidgetItem(model->data(model->index(row, col)).toString());
                ui->tableWidget->setItem(row, col, item);
            }
        }

}


void MainWindow::on_stat_clicked() {
    qDebug() << "Button stat clicked.";
        displayCategorieStatistics();
}
void MainWindow::displayCategorieStatistics() {
    emission e;
    QSqlQueryModel *model = e.statistiqueCategorie();

    if (model && model->rowCount() > 0) {
        QPieSeries *series = new QPieSeries();

        for (int row = 0; row < model->rowCount(); ++row) {
            QString category = model->index(row, 0).data().toString();
            int count = model->index(row, 1).data().toInt();
            series->append(category, count);
        }

        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Statistiques de categories");

        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
        chartView->resize(400, 300);
        chartView->show();

        // Ne pas supprimer series et chart ici car ils sont encore utilisés par chartView.
    } else {
        QMessageBox::information(this, tr("Information"), tr("No data available for category statistics."));
    }

    // Supprimez le modèle après utilisation
    delete model;
}


void saveVideoURL(const QString &url) {
    QSqlQuery query;
    query.prepare("INSERT INTO KHOULOUD.EMISSION (ID_EMISSION, LIVE_PATH) VALUES ((SELECT COALESCE(MAX(ID_EMISSION), 0) + 1 FROM KHOULOUD.EMISSION), :live_path)");
    query.bindValue(":live_path", url);
    if (!query.exec()) {
        qDebug() << "Error saving video URL:" << query.lastError().text();
    } else {
        qDebug() << "Video URL saved to database:" << url;
    }
}


QString generateVideoFilePath() {
    QString videoFileName = QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss") + ".mp4";
    QString defaultPath = QStandardPaths::writableLocation(QStandardPaths::MoviesLocation) + "/" + videoFileName;

    QString selectedPath = QFileDialog::getSaveFileName(nullptr, "Save Video", defaultPath, "Video Files (*.mp4)");
    if (selectedPath.isEmpty())
        return "";

    return selectedPath;
}

void MainWindow::start_cam()
{
    if(M_Camera && m_mediaRecorder) {
        QString videoFilePath = generateVideoFilePath();
        if (videoFilePath.isEmpty()) {
            qDebug() << "Video saving process canceled.";
            return;
        }
        m_mediaRecorder->setOutputLocation(QUrl::fromLocalFile(videoFilePath));
        M_Camera->start();
        m_mediaRecorder->record();
        if(m_mediaRecorder)
            qDebug() << "recorded";
        else
            qDebug() << "not recorded";
        // Saving the current video file path for later retrieval
        currentVideoFilePath = videoFilePath;
    }
    else {
        qDebug() << "Camera or media recorder not properly initialized.";
    }
}

void MainWindow::stop_cam()
{
    if (M_Camera && m_mediaRecorder) {
        m_mediaRecorder->stop();
        M_Camera->stop();
        if (!currentVideoFilePath.isEmpty()) {
            // Correct the file path to be saved
            QString videoUrl = currentVideoFilePath;
            saveVideoURL(videoUrl);
            qDebug() << "Video saved to path:" << currentVideoFilePath;
        }
    } else {
        qDebug() << "Camera or media recorder not properly initialized.";
    }
}


void MainWindow::on_play_clicked()
{
    start_cam();
}

void MainWindow::on_stop_clicked()
{
    stop_cam();
}



void MainWindow::on_calendarWidget_2_clicked(const QDate &date)
{
    emission e;
    qDebug() << "Date selected:" << date.toString("dd-MMM-yy");
    QSqlQueryModel *model = e.afficherEmisionsByDate(date);

    if (model) {
        //ui->tableWidget->clearContents();
        ui->tableWidget_2->setRowCount(model->rowCount());
        ui->tableWidget_2->setColumnCount(model->columnCount());

        if (model->lastError().isValid()) {
            qDebug() << "Query execution failed:" << model->lastError().text();
        } else {
            qDebug() << "Query executed successfully. Rows:" << model->rowCount();
            for (int row = 0; row < model->rowCount(); ++row) {
                for (int col = 0; col < model->columnCount(); ++col) {
                    QString data = model->data(model->index(row, col)).toString();
                    QTableWidgetItem *item = new QTableWidgetItem(data);
                    ui->tableWidget_2->setItem(row, col, item); // Changed from ui->tableWidget_2 to ui->tableWidget
                    qDebug() << "Row:" << row << "Column:" << col << "Data:" << data;
                }
            }
        }

        delete model;
    }
}


void MainWindow::handleArduinoData()
{
    QByteArray data = A.read_from_arduino(); // Read data from Arduino
    if (!data.isEmpty()) {
        qDebug() << "Data received from Arduino:" << data;
        QString keypadInput = QString(data).trimmed(); // Convert QByteArray to QString and remove leading/trailing whitespace
        ui->tap_mdp->setText(keypadInput); // Update tap_mdp field with keypad input
    }
}



void MainWindow::checkEmployeePassword() {
    data = A.read_from_arduino();
    QString enteredPassword = ui->tap_mdp->text();

    qDebug() << "Received Data from Arduino:" << data;
    qDebug() << "Entered Password:" << enteredPassword;

    QSqlQuery query;
    query.prepare("SELECT ID FROM KHOULOUD.EMPLOYE WHERE ID = ?");
    query.addBindValue(enteredPassword);

    if (!query.exec()) {
        qDebug() << "Error executing SQL query:" << query.lastError().text();
        return;
    }

    if (query.next()) {
        QString employeeID = query.value(0).toString(); // Get the ID from the query result

        // Compare the retrieved ID with the entered password
        if (!employeeID.isEmpty() && employeeID == enteredPassword) {
            A.write_to_arduino("0");
            qDebug() << "Password correct for employee ID:" << employeeID;
            QMessageBox::information(this, "Authentication", "Password correct. Employee ID: " + employeeID);
        }
    } else {
        A.write_to_arduino("1");
        qDebug() << "No employee found with the entered password.";
        QMessageBox::critical(this, "Authentication Error", "Incorrect password. Please try again.");    }
}










void MainWindow::on_comfirmer_mdp_clicked()
{

    checkEmployeePassword();
}


/*
//implémentation du slot button
void MainWindow::on_b1_clicked()
{
A.write_to_arduino("1");
}

void MainWindow::on_b2_clicked()
{
A.write_to_arduino("2");
}

void MainWindow::on_b3_clicked()
{
A.write_to_arduino("3");
}

void MainWindow::on_b4_clicked()
{
A.write_to_arduino("4");
}

void MainWindow::on_b5_clicked()
{
A.write_to_arduino("5");
}

void MainWindow::on_b6_clicked()
{
A.write_to_arduino("6");
}

void MainWindow::on_b7_clicked()
{
A.write_to_arduino("7");
}

void MainWindow::on_b8_clicked()
{
A.write_to_arduino("8");
}

void MainWindow::on_b9_clicked()
{
A.write_to_arduino("9");
}

void MainWindow::on_b0_clicked()
{
A.write_to_arduino("0");
}


void MainWindow::on_bA_clicked()
{
A.write_to_arduino("A");
}

void MainWindow::on_bB_clicked()
{
A.write_to_arduino("B");
}

void MainWindow::on_bC_clicked()
{
A.write_to_arduino("C");
}

void MainWindow::on_bD_clicked()
{
A.write_to_arduino("D");
}

void MainWindow::on_bdieze_clicked()
{
A.write_to_arduino("#");
}

void MainWindow::on_betoile_clicked()
{
A.write_to_arduino("*");
}

*/
