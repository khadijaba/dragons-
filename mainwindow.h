#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Connexion.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QPushButton>
#include <QStackedWidget>
#include "employe.h"
#include<QSqlDatabase>
#include<QDebug>
#include <QTableWidget>
#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ajouterButton_clicked();
    void on_pushButton_recherchcer_clicked();
    void on_pushButton_modifier_clicked();
    void on_supprimerButton_clicked();
    void afficheremploye();

private:
    Ui::MainWindow *ui;
        QPushButton *ajouterButton;
        QPushButton *supprimerbutton;
        QPushButton *rechercherButton;
        QPushButton *modifierButton;
        QPushButton *afficherButton;
        QTabWidget *TabWidget;
        QWidget *pageAfficher;
        QWidget *pageAjouter;
        QWidget *pageModifier;
        QWidget *pageSupprimer;
        QTableWidget *tableWidget;
        employe* employeToModify;
        employe* chercher(int Id);
        void rechercher(int Id);
        bool modifier(int Id);
        void rechercher_modifier(int Id);



};
#endif // MAINWINDOW_H
