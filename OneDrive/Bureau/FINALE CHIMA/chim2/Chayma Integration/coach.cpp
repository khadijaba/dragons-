#include "coach.h"

Coach::Coach()
{
    nom = "";
    prenom = "";
    adresse = "";
    numero_telephone = "";
    sexe = "";
    adresse_email = "";
    mot_de_passe = "";
    cin = "";
    image = "";

}

void Coach::setNom(QString n){ nom = n; }
void Coach::setPrenom(QString n){ prenom = n; }
void Coach::setAdresse(QString n){ adresse = n; }
void Coach::setNumeroTelephone(QString n){ numero_telephone = n; }
void Coach::setSexe(QString n){ sexe = n; }
void Coach::setAdresseEmail(QString n){ adresse_email = n; }
void Coach::setMotDePasse(QString n){ mot_de_passe = n; }
void Coach::setCIN(QString n){ cin = n; }
void Coach::setimage(QString n){ cin = n; }


QString Coach::getNom(){ return nom; }
QString Coach::getPrenom(){ return prenom; }
QString Coach::getAdresse(){ return adresse; }
QString Coach::getNumeroTelephone(){ return numero_telephone; }
QString Coach::getSexe(){ return sexe; }
QString Coach::getAdresseEmail(){ return adresse_email; }
QString Coach::getMotDePasse(){ return mot_de_passe; }
QString Coach::getCIN(){ return cin; }
QString Coach::getimage(){ return cin; }

