#ifndef MAILLING_H
#define MAILLING_H

#include <QString>
#include <QMessageBox>
#include <QMainWindow>
#include "email.h"
#include "emailadress.h"
#include "smtpclient.h"
namespace Ui {
class mailling;
}

class mailling : public QMainWindow
{
    Q_OBJECT

public:
    explicit mailling(QWidget *parent = nullptr);
    ~mailling();

private slots:
    void sendEmail();
    //void clearFields();

    void onStatus(Status::e status, QString errorMessage);

    void on_pushButtonSend_clicked();

private:
    Email createEmail();

private:
    Ui::mailling *ui;
    SMTPClient *client_;
};



#endif // MAILLING_H
