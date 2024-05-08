#include "etude_projet.h"

Etude_projet::Etude_projet()
{
    id_Etude="";
    id_Projet="";
    objectif="";
    competences_necessaires="";
    rentabilite_du_projet="";
    faisabilite_technique="";
    faisabilite_economique="";
    points_forts="";
    points_faibles="";
    analyse_du_marche="";
    descrip_projet="";
    note_ent="";

}
void Etude_projet::setid_Etude(QString n){id_Etude=n;}
void Etude_projet::setid_Projet(QString n){id_Projet=n;}
void Etude_projet::setobjectif(QString n){objectif=n;}
void Etude_projet::setcompetences_necessaires(QString n){competences_necessaires=n;}
void Etude_projet::setrentabilite_du_projet(QString n){rentabilite_du_projet=n;}
void Etude_projet::setfaisabilite_technique(QString n){faisabilite_technique=n;}
void Etude_projet::setfaisabilite_economique(QString n){faisabilite_economique=n;}
void Etude_projet::setpoints_forts(QString n){points_forts=n;}
void Etude_projet::setpoints_faibles(QString n){points_faibles=n;}
void Etude_projet::setanalyse_du_marche(QString n){analyse_du_marche=n;}
void Etude_projet::setdescrip_projet(QString n){descrip_projet=n;}
void Etude_projet::setnote_ent(QString n){note_ent=n;}

QString Etude_projet::get_id_Etude(){return id_Etude;}
QString Etude_projet::get_id_Projet(){return id_Projet;}
QString Etude_projet::get_objectif(){return objectif;}
QString Etude_projet::get_competences_necessaires(){return competences_necessaires;}
QString Etude_projet::get_rentabilite_du_projet(){return rentabilite_du_projet;}
QString Etude_projet::get_faisabilite_technique(){return faisabilite_technique;}
QString Etude_projet::get_faisabilite_economique(){return faisabilite_economique;}
QString Etude_projet::get_points_forts(){return points_forts;}
QString Etude_projet::get_points_faibles(){return points_faibles;}
QString Etude_projet::get_analyse_du_marche(){return analyse_du_marche;}
QString Etude_projet::get_descrip_projet(){return descrip_projet;}
QString Etude_projet::get_note_ent(){return note_ent;}

