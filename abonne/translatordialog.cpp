#include "translatordialog.h"
#include "translator.h"

TranslatorDialog::TranslatorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TranslatorDialog) {
    ui->setupUi(this);

       ui->sourceLanguageComboBox->addItem("EN", "en");
       ui->sourceLanguageComboBox->addItem("FR", "fr");
       ui->targetLanguageComboBox->addItem("EN", "en");
       ui->targetLanguageComboBox->addItem("FR", "fr");


    connect(ui->translateButton, &QPushButton::clicked, this, &TranslatorDialog::on_translateButton_clicked);
}

TranslatorDialog::~TranslatorDialog() { // Assurez-vous d'inclure le destructeur pour nettoyer l'instance de l'UI.
    delete ui;
}

