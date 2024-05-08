#ifndef GESTIONNAIRERESSOURCES_H
#define GESTIONNAIRERESSOURCES_H

#include <QDialog>
#include <QStandardItemModel>
#include "ressource.h"
namespace Ui {
class gestionnaireressources;
}

class gestionnaireressources : public QDialog
{
    Q_OBJECT

public:
    explicit gestionnaireressources(QWidget *parent = nullptr);
    ~gestionnaireressources();

private slots:
    void on_buttonSubmitRequest_clicked();

    void on_on_buttonApprove_clicked();

    void on_on_buttonDeny_clicked();

    void on_on_buttonHold_clicked();
    void updateResourceModel(int idStock, int newQuantity);
    void addRequestToModel(const QString &resourceName, int quantity, const QString &status);




private:
    Ui::gestionnaireressources *ui;
    QStandardItemModel *model;
    //int getResourceAvailability(const QString &resourceName);
    ressource getResourceAvailability(const QString& resourceName);
};

#endif // GESTIONNAIRERESSOURCES_H
