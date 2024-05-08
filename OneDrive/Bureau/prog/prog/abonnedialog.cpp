#include "abonnedialog.h"
#include "ui_abonnedialog.h"

abonnedialog::abonnedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::abonnedialog)
{
    ui->setupUi(this);
}

abonnedialog::~abonnedialog()
{
    delete ui;
}
