#ifndef GESTIONNAIRERESSOURCES_H
#define GESTIONNAIRERESSOURCES_H

#include <QDialog>

namespace Ui {
class gestionnaireressources;
}

class gestionnaireressources : public QDialog
{
    Q_OBJECT

public:
    explicit gestionnaireressources(QWidget *parent = nullptr);
    ~gestionnaireressources();

private:
    Ui::gestionnaireressources *ui;
};

#endif // GESTIONNAIRERESSOURCES_H
