#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPushButton>
#include <QStackedWidget>
#include "abonne.h"
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
    void on_suivantButton_clicked();

    void on_precedentButton_clicked();

    void on_suivantButton_2_clicked();

    void on_ajouterButton_clicked();

    void on_chercherButton_clicked();

    void on_modifierButton_clicked();

    void on_precedentButton_2_clicked();

    void on_suivantButton_3piu_clicked();

    void on_supprimerButton_clicked();

    void on_precedentButton_3_clicked();
    void afficherAbonnes();


private:
    Ui::MainWindow *ui;
    QPushButton *ajouterButton;
        QPushButton *supprimerButton;
        QPushButton *chercherButton;
        QPushButton *modifierButton;
        QPushButton *afficherButton;
        QStackedWidget *stackedWidget;
        QWidget *pageAfficher;
        QWidget *pageAjouter;
        QWidget *pageModifier;
        QWidget *pageSupprimer;
         std::vector<abonne> abonneList;
          QTableWidget *tableWidget;
          abonne* abonneToModify;
};
#endif // MAINWINDOW_H
