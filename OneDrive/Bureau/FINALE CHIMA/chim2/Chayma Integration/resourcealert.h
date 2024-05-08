#ifndef RESOURCEALERT_H
#define RESOURCEALERT_H

#include <QDialog>

namespace Ui {
class ResourceAlert;
}

class ResourceAlert : public QDialog
{
    Q_OBJECT

public:
    explicit ResourceAlert(QWidget *parent = nullptr);
    ~ResourceAlert();

private:
    Ui::ResourceAlert *ui;
};

#endif // RESOURCEALERT_H
