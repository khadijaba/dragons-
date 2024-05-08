#ifndef ENTREPRENEUR_H
#define ENTREPRENEUR_H
#include<QString>


class entrepreneur
{
public:
    entrepreneur();
    bool createentrepreneur();

    void setname_entrepreneur(QString n);
    void setfirestName_entrepreneur(QString n);
    void setmailAdress_entrepreneur(QString n);
    void setphoneNumber_entrepreneur(QString n);
    void setcompanyName_entrepreneur(QString n);
    void setfieldActivity_entrepreneur(QString n);
    void setlegalStatus_entrepreneur(QString n);
    void setcollaboration_entrepreneur(QString n);
    void setnote_entrepreneur(QString n);

    QString get_name_entrepreneur();
    QString get_firestName_entrepreneur();
    QString get_mailAdress_entrepreneur();
    QString get_phoneNumber_entrepreneur();
    QString get_companyName_entrepreneur();
    QString get_fieldActivity_entrepreneur();
    QString get_legalStatus_entrepreneur();
    QString get_collaboration_entrepreneur();
    QString get_note_entrepreneur();

private:
    QString name_entrepreneur, firestName_entrepreneur, mailAdress_entrepreneur, phoneNumber_entrepreneur, companyName_entrepreneur, fieldActivity_entrepreneur, legalStatus_entrepreneur, collaboration_entrepreneur,  note_entrepreneur;
};

#endif // ENTREPRENEUR_H
