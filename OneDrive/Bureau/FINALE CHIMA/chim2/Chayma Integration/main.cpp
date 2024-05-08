#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QMessageBox>
#include "connection.h"
int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling); // Active l'échelle automatique
       QApplication app(argc, argv);

    MainWindow w;
    connexion c;
    bool test=c.createconnection();
    if(test)
    {
        w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return app.exec();
}
