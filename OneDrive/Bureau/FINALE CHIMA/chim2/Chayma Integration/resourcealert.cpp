#include "ResourceAlert.h"
#include "ui_ResourceAlert.h"

ResourceAlert::ResourceAlert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ResourceAlert)
{
    ui->setupUi(this);
}

ResourceAlert::~ResourceAlert()
{
    delete ui;
}
