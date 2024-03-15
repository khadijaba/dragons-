#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPushButton>
#include "abonne.h"
#include<QSqlDatabase>
#include<QDebug>
#include <QTableWidget>
#include <QToolButton>

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

private:
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

};
#endif // MAINWINDOW_H
