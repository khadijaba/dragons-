/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *pageAfficher;
    QLabel *label;
    QLabel *label_5;
    QTableWidget *tableWidget;
    QPushButton *suivantButton;
    QWidget *pageAjouter;
    QLabel *label_2;
    QLabel *label_6;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *id_a;
    QLabel *nom;
    QLabel *prenom;
    QLabel *label_9;
    QLabel *paiment;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_email;
    QPushButton *precedentButton;
    QPushButton *suivantButton_2;
    QPushButton *ajouterButton;
    QComboBox *comboBox;
    QWidget *pageModifier;
    QLabel *label_3;
    QLabel *label_12;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *idToSearch;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEdit_idChercher;
    QLineEdit *lineEdit_email_2;
    QLineEdit *lineEdit_prenom_2;
    QLineEdit *lineEdit_nom_2;
    QComboBox *comboBox_2;
    QPushButton *precedentButton_2;
    QPushButton *suivantButton_3piu;
    QPushButton *chercherButton;
    QPushButton *modifierButton;
    QWidget *pageSupprimer;
    QLabel *label_4;
    QLabel *label_18;
    QLabel *idToSupprimer;
    QLineEdit *lineEdit_idASupprimer;
    QPushButton *supprimerButton;
    QPushButton *precedentButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1333, 530);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 0, 1001, 451));
        pageAfficher = new QWidget();
        pageAfficher->setObjectName(QStringLiteral("pageAfficher"));
        label = new QLabel(pageAfficher);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1011, 431));
        label->setPixmap(QPixmap(QString::fromUtf8("images/backg.jpg.jpg")));
        label_5 = new QLabel(pageAfficher);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 30, 331, 41));
        label_5->setStyleSheet(QLatin1String("font-size: 27pt;\n"
"color: rgb(255, 170, 0);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));
        tableWidget = new QTableWidget(pageAfficher);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(220, 110, 531, 211));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 8px; /* Espacement interne des cellules */\n"
"    border-bottom: 1px solid #3498db; /* Bordure basse de chaque cellule */\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair lorsqu'une cellule est s\303\251lectionn\303\251e */\n"
"    color: #ecf0f1; /* Couleur du texte lorsqu'une cellule est s\303\251lectionn\303\251e */\n"
"}\n"
"\n"
"QTableWidget::item:hover {\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'une cellule est survol\303\251e */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(44, 62, 80, 0.8); /* Fond bleu fonc\303\251"
                        " plus clair pour l'en-t\303\252te */\n"
"    color: #ecf0f1; /* Couleur du texte de l'en-t\303\252te */\n"
"    padding: 5px; /* Espacement interne de l'en-t\303\252te */\n"
"    border: 1px solid #3498db; /* Bordure de l'en-t\303\252te */\n"
"}\n"
"\n"
"QTableWidget::horizontalHeader {\n"
"    border-bottom: 2px solid #3498db; /* Bordure basse de l'en-t\303\252te horizontal */\n"
"}\n"
"\n"
"QTableWidget::verticalHeader {\n"
"    border-right: 2px solid #3498db; /* Bordure droite de l'en-t\303\252te vertical */\n"
"}\n"
"\n"
"QTableWidget::horizontalHeader::section,\n"
"QTableWidget::verticalHeader::section {\n"
"    border-radius: 0; /* Pas de coins arrondis pour les coins des sections d'en-t\303\252te */\n"
"}\n"
"\n"
"QTableWidget QScrollBar:vertical {\n"
"    width: 8px; /* Largeur de la barre de d\303\251filement verticale */\n"
"    background-color: rgba(44, 62, 80, 0.8); /* Fond bleu fonc\303\251 plus clair pour la barre de d\303\251filement verticale */\n"
"}\n"
"\n"
"QTableWidget QScrollBar::handle:"
                        "vertical {\n"
"    background-color: #3498db; /* Couleur de la poign\303\251e de la barre de d\303\251filement verticale */\n"
"    border-radius: 4px; /* Coins arrondis pour la poign\303\251e de la barre de d\303\251filement verticale */\n"
"}\n"
""));
        suivantButton = new QPushButton(pageAfficher);
        suivantButton->setObjectName(QStringLiteral("suivantButton"));
        suivantButton->setGeometry(QRect(830, 370, 93, 28));
        stackedWidget->addWidget(pageAfficher);
        pageAjouter = new QWidget();
        pageAjouter->setObjectName(QStringLiteral("pageAjouter"));
        label_2 = new QLabel(pageAjouter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, -10, 1011, 451));
        label_2->setPixmap(QPixmap(QString::fromUtf8("images/backg.jpg.jpg")));
        label_6 = new QLabel(pageAjouter);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 30, 331, 41));
        label_6->setStyleSheet(QLatin1String("font-size: 27pt;\n"
"color: rgb(255, 170, 0);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));
        verticalLayoutWidget = new QWidget(pageAjouter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 90, 278, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        id_a = new QLabel(verticalLayoutWidget);
        id_a->setObjectName(QStringLiteral("id_a"));
        id_a->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout->addWidget(id_a);

        nom = new QLabel(verticalLayoutWidget);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout->addWidget(nom);

        prenom = new QLabel(verticalLayoutWidget);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout->addWidget(prenom);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout->addWidget(label_9);

        paiment = new QLabel(verticalLayoutWidget);
        paiment->setObjectName(QStringLiteral("paiment"));
        paiment->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout->addWidget(paiment);

        lineEdit_id = new QLineEdit(pageAjouter);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(330, 110, 113, 31));
        lineEdit_id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_nom = new QLineEdit(pageAjouter);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(320, 180, 113, 31));
        lineEdit_nom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_prenom = new QLineEdit(pageAjouter);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(320, 250, 113, 31));
        lineEdit_prenom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_email = new QLineEdit(pageAjouter);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(330, 310, 113, 31));
        lineEdit_email->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        precedentButton = new QPushButton(pageAjouter);
        precedentButton->setObjectName(QStringLiteral("precedentButton"));
        precedentButton->setGeometry(QRect(750, 390, 93, 28));
        suivantButton_2 = new QPushButton(pageAjouter);
        suivantButton_2->setObjectName(QStringLiteral("suivantButton_2"));
        suivantButton_2->setGeometry(QRect(850, 390, 93, 28));
        ajouterButton = new QPushButton(pageAjouter);
        ajouterButton->setObjectName(QStringLiteral("ajouterButton"));
        ajouterButton->setGeometry(QRect(760, 210, 93, 28));
        comboBox = new QComboBox(pageAjouter);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(330, 390, 131, 31));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QComboBox::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QComboBox::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence pour la liste d\303\251roulante */\n"
"    border: 2px solid #3498db; /* Bordure bleue pour la liste d\303\251roulante */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection dans la liste d\303\251roulante */\n"
"    color: #ecf0f1; /* Couleur du texte dans la liste d\303\251roulante */\n"
"}\n"
""));
        stackedWidget->addWidget(pageAjouter);
        pageModifier = new QWidget();
        pageModifier->setObjectName(QStringLiteral("pageModifier"));
        label_3 = new QLabel(pageModifier);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 1001, 541));
        label_3->setPixmap(QPixmap(QString::fromUtf8("images/backg.jpg.jpg")));
        label_12 = new QLabel(pageModifier);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(40, 30, 331, 41));
        label_12->setStyleSheet(QLatin1String("font-size: 27pt;\n"
"color: rgb(255, 170, 0);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));
        verticalLayoutWidget_2 = new QWidget(pageModifier);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(30, 90, 278, 341));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        idToSearch = new QLabel(verticalLayoutWidget_2);
        idToSearch->setObjectName(QStringLiteral("idToSearch"));
        idToSearch->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_2->addWidget(idToSearch);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_2->addWidget(label_14);

        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_2->addWidget(label_15);

        label_16 = new QLabel(verticalLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_2->addWidget(label_16);

        label_17 = new QLabel(verticalLayoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_2->addWidget(label_17);

        lineEdit_idChercher = new QLineEdit(pageModifier);
        lineEdit_idChercher->setObjectName(QStringLiteral("lineEdit_idChercher"));
        lineEdit_idChercher->setGeometry(QRect(330, 110, 113, 31));
        lineEdit_idChercher->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_email_2 = new QLineEdit(pageModifier);
        lineEdit_email_2->setObjectName(QStringLiteral("lineEdit_email_2"));
        lineEdit_email_2->setGeometry(QRect(330, 320, 113, 31));
        lineEdit_email_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_prenom_2 = new QLineEdit(pageModifier);
        lineEdit_prenom_2->setObjectName(QStringLiteral("lineEdit_prenom_2"));
        lineEdit_prenom_2->setGeometry(QRect(330, 250, 113, 31));
        lineEdit_prenom_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_nom_2 = new QLineEdit(pageModifier);
        lineEdit_nom_2->setObjectName(QStringLiteral("lineEdit_nom_2"));
        lineEdit_nom_2->setGeometry(QRect(330, 170, 113, 31));
        lineEdit_nom_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        comboBox_2 = new QComboBox(pageModifier);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(330, 390, 141, 31));
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QComboBox::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QComboBox::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence pour la liste d\303\251roulante */\n"
"    border: 2px solid #3498db; /* Bordure bleue pour la liste d\303\251roulante */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection dans la liste d\303\251roulante */\n"
"    color: #ecf0f1; /* Couleur du texte dans la liste d\303\251roulante */\n"
"}\n"
""));
        precedentButton_2 = new QPushButton(pageModifier);
        precedentButton_2->setObjectName(QStringLiteral("precedentButton_2"));
        precedentButton_2->setGeometry(QRect(760, 410, 93, 28));
        suivantButton_3piu = new QPushButton(pageModifier);
        suivantButton_3piu->setObjectName(QStringLiteral("suivantButton_3piu"));
        suivantButton_3piu->setGeometry(QRect(850, 410, 93, 28));
        chercherButton = new QPushButton(pageModifier);
        chercherButton->setObjectName(QStringLiteral("chercherButton"));
        chercherButton->setGeometry(QRect(510, 120, 93, 28));
        modifierButton = new QPushButton(pageModifier);
        modifierButton->setObjectName(QStringLiteral("modifierButton"));
        modifierButton->setGeometry(QRect(720, 230, 93, 28));
        stackedWidget->addWidget(pageModifier);
        pageSupprimer = new QWidget();
        pageSupprimer->setObjectName(QStringLiteral("pageSupprimer"));
        label_4 = new QLabel(pageSupprimer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 10, 1001, 451));
        label_4->setPixmap(QPixmap(QString::fromUtf8("images/backg.jpg.jpg")));
        label_18 = new QLabel(pageSupprimer);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 30, 401, 41));
        label_18->setStyleSheet(QLatin1String("font-size: 27pt;\n"
"color: rgb(255, 170, 0);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));
        idToSupprimer = new QLabel(pageSupprimer);
        idToSupprimer->setObjectName(QStringLiteral("idToSupprimer"));
        idToSupprimer->setGeometry(QRect(40, 120, 276, 63));
        idToSupprimer->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));
        lineEdit_idASupprimer = new QLineEdit(pageSupprimer);
        lineEdit_idASupprimer->setObjectName(QStringLiteral("lineEdit_idASupprimer"));
        lineEdit_idASupprimer->setGeometry(QRect(130, 140, 151, 31));
        lineEdit_idASupprimer->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        supprimerButton = new QPushButton(pageSupprimer);
        supprimerButton->setObjectName(QStringLiteral("supprimerButton"));
        supprimerButton->setGeometry(QRect(260, 220, 93, 28));
        precedentButton_3 = new QPushButton(pageSupprimer);
        precedentButton_3->setObjectName(QStringLiteral("precedentButton_3"));
        precedentButton_3->setGeometry(QRect(550, 400, 93, 28));
        stackedWidget->addWidget(pageSupprimer);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1333, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "afficher un abonne:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "email", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "paiment", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        suivantButton->setText(QApplication::translate("MainWindow", "suivant", Q_NULLPTR));
        label_2->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "ajouter un abonne:", Q_NULLPTR));
        id_a->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        nom->setText(QApplication::translate("MainWindow", "nom:", Q_NULLPTR));
        prenom->setText(QApplication::translate("MainWindow", "prenom:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "adresse email", Q_NULLPTR));
        paiment->setText(QApplication::translate("MainWindow", "methode de paiment", Q_NULLPTR));
        precedentButton->setText(QApplication::translate("MainWindow", "pr\303\251c\303\251dent", Q_NULLPTR));
        suivantButton_2->setText(QApplication::translate("MainWindow", "suivant", Q_NULLPTR));
        ajouterButton->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        label_3->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "modifier un abonne:", Q_NULLPTR));
        idToSearch->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "nom:", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "prenom:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "adresse email", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "methode de paiment", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "cheque", Q_NULLPTR)
         << QApplication::translate("MainWindow", "espece", Q_NULLPTR)
         << QApplication::translate("MainWindow", "carte bancaire", Q_NULLPTR)
        );
        precedentButton_2->setText(QApplication::translate("MainWindow", "pr\303\251c\303\251dent", Q_NULLPTR));
        suivantButton_3piu->setText(QApplication::translate("MainWindow", "suivant", Q_NULLPTR));
        chercherButton->setText(QApplication::translate("MainWindow", "chercher", Q_NULLPTR));
        modifierButton->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_4->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "supprimer un abonne:", Q_NULLPTR));
        idToSupprimer->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        supprimerButton->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        precedentButton_3->setText(QApplication::translate("MainWindow", "pr\303\251c\303\251dent", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
