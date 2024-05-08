#ifndef ETUDE_PROJET_H
#define ETUDE_PROJET_H
#include<QString>

class Etude_projet
{
public:
    void setid_Etude(QString n);
    void setid_Projet(QString n);
    void setobjectif(QString n);
    void setcompetences_necessaires(QString n);
    void setrentabilite_du_projet(QString n);
    void setfaisabilite_technique(QString n);
    void setfaisabilite_economique(QString n);
    void setpoints_forts(QString n);
    void setpoints_faibles(QString n);
    void setanalyse_du_marche(QString n);
    void setdescrip_projet(QString n);
    void setnote_ent(QString n);
    QString get_id_Etude();
    QString get_id_Projet();
    QString get_objectif();
    QString get_competences_necessaires();
    QString get_rentabilite_du_projet();
    QString get_faisabilite_technique();
    QString get_faisabilite_economique();
    QString get_points_forts();
    QString get_points_faibles();
    QString get_analyse_du_marche();
    QString get_descrip_projet();
    QString get_note_ent();

    Etude_projet();
private:
    QString id_Etude, id_Projet,objectif,competences_necessaires,
    rentabilite_du_projet,faisabilite_technique,faisabilite_economique,
    points_forts,points_faibles,analyse_du_marche,descrip_projet,note_ent;
};

#endif // ETUDE_PROJET_H
