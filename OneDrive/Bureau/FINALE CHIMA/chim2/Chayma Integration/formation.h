#ifndef FORMATION_H
#define FORMATION_H

#include <string>
using namespace std;

class formation
{
private:
    string titre_fr;
    string duree_fr;
    string date_d_fr;
    string date_f_fr;
    string capacite_fr;
    string participant_fr;
    string statut_fr;

public:
    formation();
    formation(const string& titre, const string& duree, const string& dateDebut, const string& dateFin,
              const string& capacite, const string& participant, const string& statut);

};

#endif // FORMATION_H
