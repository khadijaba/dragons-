#include "mailling.h"
#include "ui_mailling.h"

mailling::mailling(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mailling)
{
    ui->setupUi(this);

    client_ = NULL;
    ui->lineEditEmailCredentials_2->hide();
    ui->lineEditPasswordCredentials_2->setEchoMode(QLineEdit::Password);
    ui->lineEditPasswordCredentials_2->hide();
       // Connect all signals and slots
       connect(ui->pushButtonSend, SIGNAL(clicked(bool)), this, SLOT(sendEmail()));
}

mailling::~mailling()
{
    delete ui;
}
void mailling::sendEmail()
{
    // Create the email object
    Email email = createEmail();

    // Create the SMTPClient
    client_ = new SMTPClient(ui->lineEditHost_2->text());
                             //ui->lineEdit_port->value());

    // Connection used to receive the results
    connect(client_, SIGNAL(status(Status::e, QString)),
            this, SLOT(onStatus(Status::e, QString)), Qt::UniqueConnection);

    // Try to send the email
    client_->sendEmail(email);
}
Email mailling::createEmail()
{


    // Create the credentials EmailAddress
    EmailAddress credentials(ui->lineEditEmailCredentials_2->text(), ui->lineEditPasswordCredentials_2->text());

    // Create the from EmailAddress
    EmailAddress from(ui->lineEditEmailFrom_2->text());

    // Create the to EmailAddress
    EmailAddress to(ui->lineEditEmailTo_2->text());

    // Create the email
    Email email(credentials,
                from,
                to,
                ui->lineEditSubject_2->text(),
                ui->textEditContent_2->toPlainText());

    return email;
}
void mailling::onStatus(Status::e status, QString errorMessage)
{
    // Show a message based on the Status
    switch (status)
    {
    case Status::Success:
        QMessageBox::information(NULL, tr("SMTPClient"), tr("Message successfully sent!"));
        break;
    case Status::Failed:
    {
        QMessageBox::warning(NULL, tr("SMTPClient"), tr("Could not send the message!"));
        qCritical() << errorMessage;
    }
        break;
    default:
        break;
    }

    // Delete the client pointer
    client_->deleteLater();
}

