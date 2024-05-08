#ifndef ALERT_H
#define ALERT_H

#include <QDialog>

namespace Ui {
class alert;
}

class alert : public QDialog
{
    Q_OBJECT

public:
    explicit alert(QWidget *parent = nullptr);
    ~alert();

private:
    Ui::alert *ui;
};

#endif // ALERT_H
