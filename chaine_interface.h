#ifndef chaine_interface_H
#define chaine_interface_H
#include "chaine.h"
#include "connection.h"
#include <QMainWindow>
#include "ui_chaine_interface.h"
#include <QButtonGroup>

QT_BEGIN_NAMESPACE
namespace Ui { class chaine_interface; }
QT_END_NAMESPACE

class chaine_interface : public QMainWindow
{
    Q_OBJECT

public:
    chaine_interface(QWidget *parent = nullptr);
    ~chaine_interface();

private slots:
     //void onCommandLinkButtonClicked();


    void on_suivant_clicked();


    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_gestion_chaines_clicked();

    void on_gestion_employes_clicked();

    void on_gestion_equipements_clicked();

    void on_gestion_abonnes_clicked();

    void on_gestion_publicites_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_2_clicked();

    void on_gestion_emissions_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_11_clicked();

    void afficherchaine();

    void on_pushButton_17_clicked();

    void on_recherche_1_clicked();

    void on_tri_clicked();

    void on_pdf_clicked();



    void on_stats_clicked();

private:
    Ui::chaine_interface *ui;
    Chaine temp;

};

#endif // chaine_interface_H


