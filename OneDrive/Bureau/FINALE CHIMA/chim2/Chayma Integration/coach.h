#ifndef COACH_H
#define COACH_H

#include <QString>

class Coach
{
private:
    QString nom;
    QString prenom;
    QString adresse;
    QString numero_telephone;
    QString sexe;
    QString adresse_email;
    QString mot_de_passe;
    QString image;
    QString cin;

public:
    Coach();

    void setNom(QString n);
    void setPrenom(QString n);
    void setAdresse(QString n);
    void setNumeroTelephone(QString n);
    void setSexe(QString n);
    void setAdresseEmail(QString n);
    void setMotDePasse(QString n);
    void setCIN(QString n);
    void setimage(QString n);


    QString getNom();
    QString getPrenom();
    QString getAdresse();
    QString getNumeroTelephone();
    QString getSexe();
    QString getAdresseEmail();
    QString getMotDePasse();
    QString getCIN();
    QString getimage();

};

#endif // COACH_H

