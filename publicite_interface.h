#ifndef publicite_interface_H
#define publicite_interface_H

#include <QMainWindow>
#include <QIntValidator>
#include "publicite.h"  // Inclure le fichier d'en-tête de la classe Publicite
#include<QtMultimedia>
#include <QtMultimediaWidgets>
#include<QtGui>
#include <QSqlQueryModel>
#include <QtCore>
#include <QtWidgets>
#include <QTimer>
#include <QDebug>
#include <QDateTime>
#include "mainwindoww.h"

QT_BEGIN_NAMESPACE
namespace Ui { class publicite_interface; }
QT_END_NAMESPACE

class publicite_interface : public QMainWindow
{
    Q_OBJECT

public:
    publicite_interface(QWidget *parent = nullptr);
    ~publicite_interface();
void afficher();
private slots:

    void durationChanged(qint64 duration);
    void positionChanged(qint64 duration);
    void on_actionopen_triggered();
    void on_pushButton_2_pressed();
    void on_pushButton_2_clicked();
    void on_pushButton_3_pressed();
    void on_pushButton_rechercher_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_tri_asc_clicked();
    void on_pushButton_tri_desc_clicked();
    void on_pushButton_Cher1_clicked();
     void showIgnorerButton();



    void on_pushButton_modifier_clicked();
    void on_pushButton_supprimer_clicked();
    void on_pushButton_afficher_clicked();
    void on_pushButton_ajouter_clicked();

    void on_horizontalSlider_Duration_valueChanged(int value);
    void Timer_TimeOut_Event_Slot();



    void on_pushButton_Player_Pause_clicked();
    void on_pushButton_Ignorer_clicked();



    void on_pushButton_Stop_clicked();

    void on_pushButton_Volume_clicked();

    void on_horizontalSlider_Volume_valueChanged(int value);
    void updateTimer();
   void showFavouriteMessage();



    void on_pushButton_Seek_Backward_clicked();

    void on_pushButton_Seek_Forward_clicked();

    void on_menu_clicked();

private:
    Ui::publicite_interface *ui;
    QMediaPlayer *Player;
    QVideoWidget *Video;
    QTimer *Timer;
    QTimer *timeer;
    qint64 mDuration;
    bool IS_pause= true;
    bool IS_Muted = false;
    void updateDuration (qint64 Duration);
    publicite* rechercherParId(int id);
    void rechercherPubliciteParId(int id);
    void rechercherPubliciteParId_modifier(int id);
    bool supprimerPubliciteParId(int id);
    bool modifierPublicite(int id);


    QPushButton *pushButton_Ignorer;
};
#endif // publicite_interface_H
