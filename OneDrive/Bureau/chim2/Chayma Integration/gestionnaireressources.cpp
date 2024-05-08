#include "gestionnaireressources.h"
#include "ui_gestionnaireressources.h"

gestionnaireressources::gestionnaireressources(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionnaireressources)
{
    ui->setupUi(this);
}

gestionnaireressources::~gestionnaireressources()
{
    delete ui;
}
