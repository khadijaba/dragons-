#include "entrepreneur.h"

entrepreneur::entrepreneur()
{
    name_entrepreneur="";
    firestName_entrepreneur="";
    mailAdress_entrepreneur="";
    phoneNumber_entrepreneur="";
    companyName_entrepreneur="";
    fieldActivity_entrepreneur="";
    legalStatus_entrepreneur="";
    collaboration_entrepreneur="";
    note_entrepreneur="";
}

void entrepreneur::setname_entrepreneur(QString n)
{
    name_entrepreneur=n;
}

void entrepreneur::setfirestName_entrepreneur(QString n)
{
    firestName_entrepreneur=n;
}

void entrepreneur::setmailAdress_entrepreneur(QString n)
{
    mailAdress_entrepreneur=n;
}

void entrepreneur::setphoneNumber_entrepreneur(QString n)
{
    phoneNumber_entrepreneur=n;
}

void entrepreneur::setcompanyName_entrepreneur(QString n)
{
    companyName_entrepreneur=n;
}

void entrepreneur::setfieldActivity_entrepreneur(QString n)
{
    fieldActivity_entrepreneur=n;
}

void entrepreneur::setlegalStatus_entrepreneur(QString n)
{
    legalStatus_entrepreneur=n;
}

void entrepreneur::setcollaboration_entrepreneur(QString n)
{
    collaboration_entrepreneur=n;
}

void entrepreneur::setnote_entrepreneur(QString n)
{
    note_entrepreneur=n;
}

QString entrepreneur::get_name_entrepreneur()
{
    return name_entrepreneur;
}

QString entrepreneur::get_firestName_entrepreneur()
{
    return firestName_entrepreneur;
}

QString entrepreneur::get_mailAdress_entrepreneur()
{
    return mailAdress_entrepreneur;
}

QString entrepreneur::get_phoneNumber_entrepreneur()
{
    return phoneNumber_entrepreneur;
}

QString entrepreneur::get_companyName_entrepreneur()
{
    return companyName_entrepreneur;
}

QString entrepreneur::get_fieldActivity_entrepreneur()
{
    return fieldActivity_entrepreneur;
}

QString entrepreneur::get_legalStatus_entrepreneur()
{
    return legalStatus_entrepreneur;
}

QString entrepreneur::get_collaboration_entrepreneur()
{
    return collaboration_entrepreneur;
}

QString entrepreneur::get_note_entrepreneur()
{
    return note_entrepreneur;
}
