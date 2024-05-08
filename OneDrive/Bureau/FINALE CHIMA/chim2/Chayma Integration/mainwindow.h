#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QtCharts>
#include "ressource.h"
#include<QMainWindow>
#include<QtWidgets/QStackedWidget>
#include "connection.h"
#include<QSqlDatabase>
#include<QDebug>
#include <QTableWidget>
#include <QToolButton>
#include<QtCore>
#include<QtGui>
#include<QtWidgets>
#include <QtCharts>  // Assurez-vous d'inclure cet en-tête
#include <QDialog>
#include <QVBoxLayout>
#include <QSqlQuery>
#include <QMap>
#include <QLocale>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:

    void on_projet_menu_clicked();

    void on_ajout_proj_clicked();

    void on_calendrier_proj_clicked();

    void on_stat_projet_clicked();

    void on_retour_p_clicked();

    void on_out_menu_clicked();


    void on_etudeprojet_menu_clicked();

    void on_entrepreneurs_menu_clicked();

    void on_profil_menu_clicked();

    void on_formations_menu_clicked();

    void on_ressources_menu_clicked();

    void on_param_menu_clicked();

    void on_login_2_clicked();



    void on_list_proj_clicked();

    void on_retour_m_etude_clicked();

    void on_listeetude_clicked();

    void on_ajoutetude_clicked();

    void on_calendrieretude_clicked();

    void on_statetude_clicked();

    void on_retour_m_entrepreneur_clicked();

    void on_listeentrepreneur_clicked();

    void on_ajoutentrepreneur_clicked();

    void on_calendrierentrepre_clicked();

    void on_statentrepreneur_clicked();

    void on_retour_m_profil_clicked();

    void on_profile_2_clicked();



    void on_message_clicked();

    void on_list_utilisateurs_clicked();

    void on_statprofile_clicked();

    void on_retour_m_ressources_clicked();

    void on_listeressources_clicked();

    void on_retour_m_formations_clicked();

    void on_Foramationslist_clicked();

    void on_formateurlist_clicked();

    void on_calendrierformations_clicked();

    void on_statformation_clicked();

    void on_returnlistproject_clicked();


    void on_ajouter_ressource_clicked();
    void on_supprimerRessource_clicked();

    void afficherRessources();
    void on_pdf_clicked();

    void on_modifierButton_2_clicked();

    void on_modifierButton_clicked();



    void on_chercherButton_clicked();


    void on_refresh_clicked();

    void on_ajjj_clicked();



    void on_statressources_clicked();
    void afficherToutesRessources();

    void on_calendrierdisp_clicked();





     void on_pb_tri_clicked();
     void displaystatistiquesParNom();

      void on_ajouter_r_clicked();







     void on_pb_stat_clicked();

     void on_openStockDialogButton_clicked();

     void on_buttonAjouterDemande_clicked();

     void on_imageButton_clicked();

private:
    Ui::MainWindow *ui;
    QStackedWidget* stackedWidget;
    QStackedWidget* fenetre_projets;
    QStackedWidget* fenetre_etudes;
    QStackedWidget* fenetre_formations;
    QStackedWidget* fenetre_entrepreneur;
    QStackedWidget* fenetre_coach;
     QTableView *tableView;
    ressource temp;

    ressource Rtmp;
    void showStatistics();
};
#endif // MAINWINDOW_H
