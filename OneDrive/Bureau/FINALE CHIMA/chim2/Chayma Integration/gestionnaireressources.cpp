#include "gestionnaireressources.h"
#include "ui_gestionnaireressources.h"
#include<QMessageBox>
#include<QDebug>
#include <QMap>
#include<QSqlRecord>
#include "ressource.h"
gestionnaireressources::gestionnaireressources(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionnaireressources)
{
    ui->setupUi(this);

    connect(ui->buttonSubmitRequest, SIGNAL(clicked()), this, SLOT(on_buttonSubmitRequest_clicked()));
    connect(ui->on_buttonApprove, SIGNAL(clicked()), this, SLOT(on_on_buttonApprove_clicked()));
    connect(ui->on_buttonDeny, SIGNAL(clicked()), this, SLOT(on_on_buttonDeny_clicked()));
    connect(ui->on_buttonHold, SIGNAL(clicked()), this, SLOT(on_on_buttonHold_clicked()));

}

gestionnaireressources::~gestionnaireressources()
{
    delete ui;
}

void gestionnaireressources::on_buttonSubmitRequest_clicked()
{
    // Récupération de la quantité demandée et du nom de la ressource depuis l'interface utilisateur
    int quantiteDemandee = ui->lineEditQuantity->text().toInt();
       QString nomRessource = ui->comboBoxResourceType->currentText();

       // Vérifier la disponibilité de la ressource
       ressource r = getResourceAvailability(nomRessource);
       if (quantiteDemandee <= r.getQuantite()) {
           // Si la quantité demandée est disponible, mise à jour du modèle et ajout de la demande au modèle
           updateResourceModel(r.get_id_stock(), r.getQuantite() - quantiteDemandee);

           addRequestToModel(nomRessource, quantiteDemandee, "Approuvé");
       } else {
           // Sinon, ajout de la demande au modèle avec l'état "En Attente"
           addRequestToModel(nomRessource, quantiteDemandee, "En Attente");
           qDebug() << "can't update";

       }

}
void gestionnaireressources::addRequestToModel(const QString &resourceName, int quantity, const QString &status) {
    // Create new items for the resource name, quantity, and status
   /* QList<QStandardItem *> newRowItems;
    newRowItems << new QStandardItem(resourceName)
                << new QStandardItem(QString::number(quantity))
                << new QStandardItem(status);

    // Add the new row to the model
    model->appendRow(newRowItems);*/
}


void gestionnaireressources::on_on_buttonApprove_clicked()
{
    int ligne = ui->tableViewRequests->currentIndex().row();
        QString nomRessource = model->item(ligne, 0)->text();
        int quantiteDemandee = model->item(ligne, 1)->text().toInt();

        /*int quantiteDisponible = getResourceAvailability(nomRessource);
        if (quantiteDemandee <= quantiteDisponible) {
            updateResourceModel(nomRessource, quantiteDisponible - quantiteDemandee);
            model->item(ligne, 2)->setText("Approuvé");
        } else {
            QMessageBox::information(this, "Échec de l'approbation", "Pas assez de ressources disponibles.");
        }*/

}
void gestionnaireressources::updateResourceModel(int ID_STOCK, int newQuantity) {
    qDebug() << " can update ";

/*
    // Check if the resource exists and update its quantity
    if (resourceMap.contains(resourceName)) {
        resourceMap[resourceName] = newQuantity;
    } else {
        // Optionally handle the case where the resource is not found
        qDebug() << "Resource not found: " << resourceName;
    }
*/
    // Optionally, refresh your UI or model to reflect the new data
}


void gestionnaireressources::on_on_buttonDeny_clicked()
{
    int ligne = ui->tableViewRequests->currentIndex().row();
        model->item(ligne, 2)->setText("Refusé");
    }




void gestionnaireressources::on_on_buttonHold_clicked()
{
    int ligne = ui->tableViewRequests->currentIndex().row();
       model->item(ligne, 2)->setText("En Attente");

}
ressource gestionnaireressources::getResourceAvailability(const QString& resourceName)
{
    ressource r;

    QSqlRecord model = r.recupererRessoureEtStockBYname(resourceName);
    if (model.isEmpty()) {
        // Return a default ressource object
        return ressource(); // Assuming ressource has a default constructor
    } else {
        // Extract values from the record and create a ressource object
        int id = model.value(0).toInt();
        double prix = model.value(1).toDouble();
        int id_stock = model.value(2).toInt();
        int quantite = model.value(3).toInt();
        return ressource(id, prix, id_stock, quantite);
    }
}
