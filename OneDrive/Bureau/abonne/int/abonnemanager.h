#ifndef ABONNEMANAGER_H
#define ABONNEMANAGER_H

#include <QDialog>

namespace Ui {
class AbonneManager;
}

class AbonneManager : public QDialog
{
    Q_OBJECT

public:
    explicit AbonneManager(QWidget *parent = nullptr);
    ~AbonneManager();

private:
    Ui::AbonneManager *ui;
};

#endif // ABONNEMANAGER_H
