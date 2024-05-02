#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPushButton>
#include "abonne.h"
#include "connexion.h"
#include<QSqlDatabase>
#include<QDebug>
#include <QTableWidget>
#include <QToolButton>
#include<QtCore>
#include<QtGui>
#include<QtWidgets>
#include<QtCharts>
#include "smtpclient.h"
#include "emailadress.h"
#include "mailling.h"
#include"arduino.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // Add this line inside the private section of the Ui::MainWindow class
signals:
    void notificationSignal(const QString &message);


private slots:
    void on_ajouterButton_clicked();

    void on_chercherButton_clicked();

    void on_modifierButton_clicked();
    bool isValidPrenom(const QString &prenom);
    bool isValidNom(const QString &nom);
    bool isValidEmail(const QString &email);
    void on_supprimerButton_clicked();
    void afficherAbonnes();
    void on_pdf_clicked();
    void on_stat_clicked();
    void on_triButton_clicked();
    void on_imageButton_clicked();
    void displayPaymentStatistics();

    void on_refresh_clicked();
    void on_lineEdit_search_textChanged(const QString &text);





    void on_MAIL_abonne_clicked();

    void on_openTranslatorDialogButton_clicked();
    void openTranslatorDialog();

    void on_tableWidget_cellActivated(int row, int column);

    void on_ajouterButton_2_clicked();

private:
    SMTPClient *smtp;
    mailling *mail ;
    Ui::MainWindow *ui;
    QPushButton *ajouterButton;
        QPushButton *supprimerButton;
        QPushButton *chercherButton;
        QPushButton *modifierButton;
        QPushButton *afficherButton;
        QTabWidget *tabWidget;
        QWidget *pageAfficher;
        QWidget *pageAjouter;
        QWidget *pageModifier;
        QWidget *pageSupprimer;
         std::vector<abonne> abonneList;
          abonne temp;
          abonne* abonneToModify;
          QTableWidget *tableWidget;
           abonne *abonneModel;
            QToolButton *triButton;

            Arduino Ar;
            QByteArray data;
};
#endif // MAINWINDOW_H
