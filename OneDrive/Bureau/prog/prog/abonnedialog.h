#ifndef ABONNEDIALOG_H
#define ABONNEDIALOG_H

#include <QDialog>

namespace Ui {
class abonnedialog;
}

class abonnedialog : public QDialog
{
    Q_OBJECT

public:
    explicit abonnedialog(QWidget *parent = nullptr);
    ~abonnedialog();

private:
    Ui::abonnedialog *ui;
};

#endif // ABONNEDIALOG_H
