#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tabWidget = new QTabWidget(this);

    afficher = new QWidget(tabWidget);
        ajouter = new QWidget(tabWidget);
        modifier = new QWidget(tabWidget);
        supprimer = new QWidget(tabWidget);

        tabWidget->addTab(afficher, "Afficher");
            tabWidget->addTab(ajouter, "Ajouter");
            tabWidget->addTab(modifier, "Modifier");
            tabWidget->addTab(supprimer, "Supprimer");

             setCentralWidget(tabWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}

