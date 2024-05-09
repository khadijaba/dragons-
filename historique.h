/*#ifndef HISTORIQUE_H
#define HISTORIQUE_H

#include <QString>
#include <QObject>
#include "equipement.h" // Assurez-vous d'inclure le fichier d'en-tête de la classe Equipement ici

class historique
{
public:
    historique();
    void writeEquipement(const Equipement &equipement); // Méthode pour écrire des données d'équipement dans l'historique
    QString read(); // Méthode pour lire l'historique

private:
    QString mFilename;
};

#endif // HISTORIQUE_H
*/





#ifndef HISTORIQUE_H
#define HISTORIQUE_H

#include <QString>
#include <QObject>

class historique
{
public:
    historique();
    void write(const QString &text); // Méthode pour écrire des données d'équipement dans l'historique
    QString read(); // Méthode pour lire l'historique

private:
    QString mFilename;
};

#endif // HISTORIQUE_H
