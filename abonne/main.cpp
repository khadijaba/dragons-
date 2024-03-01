#include "mainwindow.h"
#include "connexion.h"
#include <QApplication>
#include<QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connexion c;
        bool test = c.createconnect();

            if (test) {
                w.show();
                QMessageBox::information(nullptr, QObject::tr("La base de données est ouverte"),
                                         QObject::tr("Connexion réussie.\n"
                                                     "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
                return a.exec();
            } else {
                QMessageBox::critical(nullptr, QObject::tr("La base de données n'est pas ouverte"),
                                      QObject::tr("Échec de la connexion.\n"
                                                  "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
                return -1; // ou tout autre code de sortie que vous préférez
            }
        }


