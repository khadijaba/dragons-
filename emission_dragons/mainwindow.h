#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "arduino.h"
#include <QMainWindow>
#include <QPushButton>
#include<QDebug>
#include <QTableWidget>
#include <QToolButton>
#include "emission.h"
#include<QSqlDatabase>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QCamera>
#include <QScopedPointer>
#include <QMediaRecorder>

#include <QSerialPort>
#include <QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateTableForDate(const QDate& date);
    void setupCalendar();
    QSqlQueryModel* getDataForDate(const QDate& date);


private slots:

    void on_ajouterButton_clicked();
    void afficherEmissions();

    void on_chercherButton_clicked();

    void on_supprimerButton_clicked();



    void on_modifierButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_triParIdButton_clicked();
    void on_triParTitreButton_clicked();


    void on_stat_clicked();
    void displayCategorieStatistics();

    void on_stop_clicked();

    void on_play_clicked();

    void on_calendarWidget_2_clicked(const QDate &date);


    void checkEmployeePassword();
    void on_comfirmer_mdp_clicked();
    void handleArduinoData();


    void on_b1_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

    void on_b9_clicked();

    void on_b0_clicked();

    void on_bdieze_clicked();

    void on_betoile_clicked();

    void on_bC_clicked();

    void on_bA_clicked();

    void on_bB_clicked();

    void on_bD_clicked();





private:
    void start_cam();
    void stop_cam();
    void readData(QSerialPort& serial);

private:
    Ui::MainWindow *ui;



        QTabWidget *tabWidget;
        QWidget *pageAfficher;
        QWidget *pageAjouter;
        QWidget *pageModifier;
        QWidget *pageSupprimer;
         std::vector<emission> emissionList;
          emission temp;
          emission* emissionToModify;
          QTableWidget *tableWidget;
           emission *emissionModel;
            QScopedPointer<QCamera> M_Camera;
            QScopedPointer<QMediaRecorder> m_mediaRecorder;
            QString currentVideoFilePath;


            //QSerialPort *arduino;
            //QSerialPort serial;
            QByteArray data;
            Arduino A;
            QTimer timer;


    //
};
#endif // MAINWINDOW_H
