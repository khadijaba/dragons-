#include "alert.h"
#include "ui_alert.h"

alert::alert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alert)
{
    ui->setupUi(this);
}

alert::~alert()
{
    delete ui;
}
