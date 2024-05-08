#include "abonnemanager.h"
#include "ui_abonnemanager.h"

AbonneManager::AbonneManager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AbonneManager)
{
    ui->setupUi(this);
}

AbonneManager::~AbonneManager()
{
    delete ui;
}
