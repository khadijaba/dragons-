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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *pageAfficher;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label_10;
    QPushButton *pdf;
    QPushButton *stat;
    QPushButton *triButton;
    QWidget *pageAjouter;
    QLabel *label_4;
    QLabel *label_11;
    QPushButton *ajouterButton;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_id;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *id_a;
    QLabel *nom;
    QLabel *prenom;
    QLabel *email;
    QLabel *paiment;
    QWidget *pageModifier;
    QLabel *label_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *idToSearch;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEdit_idChercher;
    QLineEdit *lineEdit_nom_2;
    QLineEdit *lineEdit_prenom_2;
    QLineEdit *lineEdit_email_2;
    QComboBox *comboBox_2;
    QPushButton *chercherButton;
    QPushButton *modifierButton;
    QWidget *pageSupprimer;
    QLabel *label;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_idASupprimer;
    QPushButton *supprimerButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1100, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1091, 651));
        tabWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: transparent; /* Couleur de fond de la table */\n"
"    border: none; /* Pas de bordure */\n"
"    gridline-color: #d3d3d3; /* Couleur des lignes de grille */\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 5px; /* Espace int\303\251rieur des cellules */\n"
"    border-bottom: 1px solid #d3d3d3; /* Bordure basse de chaque cellule */\n"
"    border-right: 1px solid #d3d3d3; /* Bordure droite de chaque cellule */\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #a6a6a6; /* Couleur de fond lorsqu'une cellule est s\303\251lectionn\303\251e */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #2e2e2e; /* Couleur de fond de l'en-t\303\252te */\n"
"    color: white; /* Couleur du texte de l'en-t\303\252te */\n"
"    padding: 5px; /* Espace int\303\251rieur de l'en-t\303\252te */\n"
"    border: none; /* Pas de bordure pour l'en-t\303\252te */\n"
"}\n"
"\n"
"QHeaderView::section:pressed {\n"
"    background-color: #4a4a4a; /* Couleur de f"
                        "ond lorsqu'une en-t\303\252te est press\303\251e */\n"
"}\n"
""));
        pageAfficher = new QWidget();
        pageAfficher->setObjectName(QStringLiteral("pageAfficher"));
        label_2 = new QLabel(pageAfficher);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 1061, 601));
        label_2->setPixmap(QPixmap(QString::fromUtf8("images/backg.jpg.jpg")));
        label_2->setScaledContents(true);
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
        tableWidget->setGeometry(QRect(240, 200, 541, 192));
        label_10 = new QLabel(pageAfficher);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 70, 401, 91));
        QPalette palette;
        QLinearGradient gradient(0, 0, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(0, 0, 102, 255));
        gradient.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QLinearGradient gradient1(0, 0, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(0, 0, 102, 255));
        gradient1.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient1.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient1.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QLinearGradient gradient2(0, 0, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(0, 0, 102, 255));
        gradient2.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient2.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient2.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QLinearGradient gradient3(0, 0, 1, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(0, 0, 102, 255));
        gradient3.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient3.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient3.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush3(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        QLinearGradient gradient4(0, 0, 1, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(0, 0, 102, 255));
        gradient4.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient4.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient4.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush4(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QLinearGradient gradient5(0, 0, 1, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(0, 0, 102, 255));
        gradient5.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient5.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient5.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush5(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QLinearGradient gradient6(0, 0, 1, 0);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(0, 0, 102, 255));
        gradient6.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient6.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient6.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush6(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        QLinearGradient gradient7(0, 0, 1, 0);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(0, 0, 102, 255));
        gradient7.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient7.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient7.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush7(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        QLinearGradient gradient8(0, 0, 1, 0);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(0, 0, 102, 255));
        gradient8.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient8.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient8.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush8(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        label_10->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("MS Serif"));
        font.setPointSize(16);
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("font-size: 16pt;\n"
"font-family: \"MS Serif\";\n"
""));
        label_10->setTextFormat(Qt::AutoText);
        pdf = new QPushButton(pageAfficher);
        pdf->setObjectName(QStringLiteral("pdf"));
        pdf->setGeometry(QRect(860, 30, 93, 81));
        pdf->setStyleSheet(QString::fromUtf8("/* Style pour tous les boutons dans l'interface utilisateur */\n"
"QPushButton {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: purple; /* Couleur de fond mauve par d\303\251faut */\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e par d\303\251faut */\n"
"    color: #ecf0f1; /* Couleur du texte par d\303\251faut */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat survol\303\251 */\n"
"QPushButton:hover {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond blanche lorsqu'il est survol\303\251 */\n"
"    border: 2px solid #3498db; /* Bordure bleue lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat press\303\251 (cliqu\303\251) */\n"
"QPushButton:pressed {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond rouge lorsqu'il est press\303\251 */\n"
"    border: 2px solid #2980b9; /* Bordu"
                        "re bleue plus fonc\303\251e lorsqu'il est press\303\251 */\n"
"}\n"
"\n"
""));
        stat = new QPushButton(pageAfficher);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(770, 30, 91, 81));
        stat->setStyleSheet(QString::fromUtf8("/* Style pour tous les boutons dans l'interface utilisateur */\n"
"QPushButton {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: purple; /* Couleur de fond mauve par d\303\251faut */\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e par d\303\251faut */\n"
"    color: #ecf0f1; /* Couleur du texte par d\303\251faut */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat survol\303\251 */\n"
"QPushButton:hover {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond blanche lorsqu'il est survol\303\251 */\n"
"    border: 2px solid #3498db; /* Bordure bleue lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat press\303\251 (cliqu\303\251) */\n"
"QPushButton:pressed {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond rouge lorsqu'il est press\303\251 */\n"
"    border: 2px solid #2980b9; /* Bordu"
                        "re bleue plus fonc\303\251e lorsqu'il est press\303\251 */\n"
"}\n"
"\n"
""));
        triButton = new QPushButton(pageAfficher);
        triButton->setObjectName(QStringLiteral("triButton"));
        triButton->setGeometry(QRect(680, 30, 91, 81));
        triButton->setStyleSheet(QString::fromUtf8("/* Style pour tous les boutons dans l'interface utilisateur */\n"
"QPushButton {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: purple; /* Couleur de fond mauve par d\303\251faut */\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e par d\303\251faut */\n"
"    color: #ecf0f1; /* Couleur du texte par d\303\251faut */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat survol\303\251 */\n"
"QPushButton:hover {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond blanche lorsqu'il est survol\303\251 */\n"
"    border: 2px solid #3498db; /* Bordure bleue lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat press\303\251 (cliqu\303\251) */\n"
"QPushButton:pressed {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond rouge lorsqu'il est press\303\251 */\n"
"    border: 2px solid #2980b9; /* Bordu"
                        "re bleue plus fonc\303\251e lorsqu'il est press\303\251 */\n"
"}\n"
"\n"
""));
        tabWidget->addTab(pageAfficher, QString());
        pageAjouter = new QWidget();
        pageAjouter->setObjectName(QStringLiteral("pageAjouter"));
        label_4 = new QLabel(pageAjouter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 1091, 611));
        label_4->setStyleSheet(QString::fromUtf8("QTabWidget {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(30, 144, 255, 255), stop:1 rgba(0, 70, 128, 255)); /* D\303\251grad\303\251 de bleu fonc\303\251 \303\240 bleu clair */\n"
"}\n"
"\n"
"/* Style des onglets */\n"
"QTabBar::tab {\n"
"    background-color: #00BCD4; /* Couleur d'arri\303\250re-plan de l'onglet - bleu turquoise */\n"
"    color: #ffffff; /* Couleur du texte de l'onglet - blanc */\n"
"    border: 2px solid #00BCD4; /* Bordure de l'onglet - bleu turquoise */\n"
"    padding: 12px 20px; /* Espacement interne - ajustez selon vos besoins */\n"
"}\n"
"\n"
"/* Style des onglets lorsqu'ils sont survol\303\251s */\n"
"QTabBar::tab:hover {\n"
"    background-color: #0097A7; /* Couleur d'arri\303\250re-plan au survol - bleu plus fonc\303\251 */\n"
"}\n"
"\n"
"/* Style des onglets actifs */\n"
"QTabBar::tab:selected {\n"
"    background-color: #ffffff; /* Couleur d'arri\303\250re-plan de l'onglet actif - blanc */\n"
"    color: #00BCD4; /* Couleur du texte de l'on"
                        "glet actif - bleu turquoise */\n"
"    border-bottom: 2px solid #00BCD4; /* Bordure en bas de l'onglet actif - bleu turquoise */\n"
"}\n"
"\n"
"/* Style du contenu des onglets */\n"
"QTabWidget::pane {\n"
"    border: 2px solid #00BCD4; /* Bordure du contenu des onglets - bleu turquoise */\n"
"    border-top: 0; /* Supprimer la bordure sup\303\251rieure */\n"
"}\n"
"\n"
"/* Style des boutons de fermeture des onglets */\n"
"QTabBar::close-button {\n"
"    image: url(close.png); /* Remplacez par le chemin de votre ic\303\264ne de fermeture */\n"
"    subcontrol-position: right; /* Position \303\240 droite du texte de l'onglet */\n"
"}\n"
"\n"
"QTabBar::close-button:hover {\n"
"    image: url(close-hover.png); /* Ic\303\264ne de fermeture au survol */\n"
"}\n"
"\n"
"/* Ajustement de la police */\n"
"QTabBar {\n"
"    font-size: 16px; /* Taille de la police pour les onglets */\n"
"    qproperty-drawBase: 0; /* D\303\251sactiver le dessin de la base (fond) de l'onglet */\n"
"}"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("images/backg.jpg.jpg")));
        label_4->setScaledContents(true);
        label_11 = new QLabel(pageAjouter);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(140, 30, 401, 91));
        QPalette palette1;
        QLinearGradient gradient9(0, 0, 1, 0);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(0, 0, 102, 255));
        gradient9.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient9.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient9.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush9(gradient9);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QLinearGradient gradient10(0, 0, 1, 0);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(0, 0, 102, 255));
        gradient10.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient10.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient10.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush10(gradient10);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        QLinearGradient gradient11(0, 0, 1, 0);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(0, 0, 102, 255));
        gradient11.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient11.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient11.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush11(gradient11);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush11);
        QLinearGradient gradient12(0, 0, 1, 0);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(0, 0, 102, 255));
        gradient12.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient12.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient12.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush12(gradient12);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        QLinearGradient gradient13(0, 0, 1, 0);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(0, 0, 102, 255));
        gradient13.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient13.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient13.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush13(gradient13);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        QLinearGradient gradient14(0, 0, 1, 0);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(0, 0, 102, 255));
        gradient14.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient14.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient14.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush14(gradient14);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        QLinearGradient gradient15(0, 0, 1, 0);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(0, 0, 102, 255));
        gradient15.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient15.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient15.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush15(gradient15);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        QLinearGradient gradient16(0, 0, 1, 0);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(0, 0, 102, 255));
        gradient16.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient16.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient16.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush16(gradient16);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        QLinearGradient gradient17(0, 0, 1, 0);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(0, 0, 102, 255));
        gradient17.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient17.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient17.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush17(gradient17);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        label_11->setPalette(palette1);
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("font-size: 16pt;\n"
"font-family: \"MS Serif\";\n"
""));
        label_11->setTextFormat(Qt::AutoText);
        ajouterButton = new QPushButton(pageAjouter);
        ajouterButton->setObjectName(QStringLiteral("ajouterButton"));
        ajouterButton->setGeometry(QRect(892, 517, 121, 41));
        ajouterButton->setStyleSheet(QString::fromUtf8("/* Style pour tous les boutons dans l'interface utilisateur */\n"
"QPushButton {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: purple; /* Couleur de fond mauve par d\303\251faut */\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e par d\303\251faut */\n"
"    color: #ecf0f1; /* Couleur du texte par d\303\251faut */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat survol\303\251 */\n"
"QPushButton:hover {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond blanche lorsqu'il est survol\303\251 */\n"
"    border: 2px solid #3498db; /* Bordure bleue lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat press\303\251 (cliqu\303\251) */\n"
"QPushButton:pressed {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond rouge lorsqu'il est press\303\251 */\n"
"    border: 2px solid #2980b9; /* Bordu"
                        "re bleue plus fonc\303\251e lorsqu'il est press\303\251 */\n"
"}\n"
"\n"
""));
        groupBox = new QGroupBox(pageAjouter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 120, 551, 441));
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 3px solid #ffffff;\n"
"    border-radius: 25px;\n"
"    padding: 5px;\n"
"    margin-top: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QGroupBox:title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left: 10px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"    background-color: #f0f0f0;\n"
"    font-weight: bold;\n"
"}"));
        groupBox->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(230, 380, 291, 31));
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
"QComboBox::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(230, 290, 301, 31));
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
        lineEdit_prenom = new QLineEdit(groupBox);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(230, 200, 291, 31));
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
        lineEdit_nom = new QLineEdit(groupBox);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(230, 130, 291, 31));
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
        lineEdit_id = new QLineEdit(groupBox);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(230, 50, 291, 31));
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
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 221, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        id_a = new QLabel(verticalLayoutWidget);
        id_a->setObjectName(QStringLiteral("id_a"));
        id_a->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        id_a->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(id_a);

        nom = new QLabel(verticalLayoutWidget);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        nom->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(nom);

        prenom = new QLabel(verticalLayoutWidget);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        prenom->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(prenom);

        email = new QLabel(verticalLayoutWidget);
        email->setObjectName(QStringLiteral("email"));
        email->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        email->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(email);

        paiment = new QLabel(verticalLayoutWidget);
        paiment->setObjectName(QStringLiteral("paiment"));
        paiment->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        paiment->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(paiment);

        tabWidget->addTab(pageAjouter, QString());
        pageModifier = new QWidget();
        pageModifier->setObjectName(QStringLiteral("pageModifier"));
        label_3 = new QLabel(pageModifier);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 1041, 601));
        label_3->setPixmap(QPixmap(QString::fromUtf8("images/backg.jpg.jpg")));
        label_3->setScaledContents(true);
        verticalLayoutWidget_2 = new QWidget(pageModifier);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(70, 150, 221, 421));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        idToSearch = new QLabel(verticalLayoutWidget_2);
        idToSearch->setObjectName(QStringLiteral("idToSearch"));
        idToSearch->setStyleSheet(QLatin1String("QLabel {\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));

        verticalLayout_2->addWidget(idToSearch);

        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("QLabel {\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));

        verticalLayout_2->addWidget(label_13);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("QLabel {\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
"font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(label_14);

        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QLatin1String("QLabel {\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));

        verticalLayout_2->addWidget(label_15);

        label_16 = new QLabel(verticalLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QLatin1String("QLabel {\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
"font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(label_16);

        label_17 = new QLabel(pageModifier);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(80, 30, 401, 91));
        QPalette palette2;
        QLinearGradient gradient18(0, 0, 1, 0);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(0, 0, 102, 255));
        gradient18.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient18.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient18.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush18(gradient18);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush18);
        QLinearGradient gradient19(0, 0, 1, 0);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0, QColor(0, 0, 102, 255));
        gradient19.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient19.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient19.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush19(gradient19);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush19);
        QLinearGradient gradient20(0, 0, 1, 0);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(0, 0, 102, 255));
        gradient20.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient20.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient20.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush20(gradient20);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush20);
        QLinearGradient gradient21(0, 0, 1, 0);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(0, 0, 102, 255));
        gradient21.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient21.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient21.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush21(gradient21);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush21);
        QLinearGradient gradient22(0, 0, 1, 0);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0, QColor(0, 0, 102, 255));
        gradient22.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient22.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient22.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush22(gradient22);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush22);
        QLinearGradient gradient23(0, 0, 1, 0);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0, QColor(0, 0, 102, 255));
        gradient23.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient23.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient23.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush23(gradient23);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush23);
        QLinearGradient gradient24(0, 0, 1, 0);
        gradient24.setSpread(QGradient::PadSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0, QColor(0, 0, 102, 255));
        gradient24.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient24.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient24.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush24(gradient24);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        QLinearGradient gradient25(0, 0, 1, 0);
        gradient25.setSpread(QGradient::PadSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(0, QColor(0, 0, 102, 255));
        gradient25.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient25.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient25.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush25(gradient25);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush25);
        QLinearGradient gradient26(0, 0, 1, 0);
        gradient26.setSpread(QGradient::PadSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0, QColor(0, 0, 102, 255));
        gradient26.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient26.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient26.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush26(gradient26);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush26);
        label_17->setPalette(palette2);
        label_17->setFont(font);
        label_17->setStyleSheet(QLatin1String("font-size: 16pt;\n"
"font-family: \"MS Serif\";\n"
""));
        label_17->setTextFormat(Qt::AutoText);
        lineEdit_idChercher = new QLineEdit(pageModifier);
        lineEdit_idChercher->setObjectName(QStringLiteral("lineEdit_idChercher"));
        lineEdit_idChercher->setGeometry(QRect(300, 180, 161, 31));
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
        lineEdit_nom_2 = new QLineEdit(pageModifier);
        lineEdit_nom_2->setObjectName(QStringLiteral("lineEdit_nom_2"));
        lineEdit_nom_2->setGeometry(QRect(310, 270, 161, 31));
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
        lineEdit_prenom_2 = new QLineEdit(pageModifier);
        lineEdit_prenom_2->setObjectName(QStringLiteral("lineEdit_prenom_2"));
        lineEdit_prenom_2->setGeometry(QRect(310, 350, 161, 31));
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
        lineEdit_email_2 = new QLineEdit(pageModifier);
        lineEdit_email_2->setObjectName(QStringLiteral("lineEdit_email_2"));
        lineEdit_email_2->setGeometry(QRect(310, 430, 161, 31));
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
        comboBox_2 = new QComboBox(pageModifier);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(320, 520, 171, 31));
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
"QComboBox::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        chercherButton = new QPushButton(pageModifier);
        chercherButton->setObjectName(QStringLiteral("chercherButton"));
        chercherButton->setGeometry(QRect(540, 180, 93, 28));
        chercherButton->setStyleSheet(QString::fromUtf8("/* Style pour tous les boutons dans l'interface utilisateur */\n"
"QPushButton {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: purple; /* Couleur de fond mauve par d\303\251faut */\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e par d\303\251faut */\n"
"    color: #ecf0f1; /* Couleur du texte par d\303\251faut */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat survol\303\251 */\n"
"QPushButton:hover {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond blanche lorsqu'il est survol\303\251 */\n"
"    border: 2px solid #3498db; /* Bordure bleue lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat press\303\251 (cliqu\303\251) */\n"
"QPushButton:pressed {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond rouge lorsqu'il est press\303\251 */\n"
"    border: 2px solid #2980b9; /* Bordu"
                        "re bleue plus fonc\303\251e lorsqu'il est press\303\251 */\n"
"}\n"
"\n"
""));
        modifierButton = new QPushButton(pageModifier);
        modifierButton->setObjectName(QStringLiteral("modifierButton"));
        modifierButton->setGeometry(QRect(820, 540, 93, 28));
        modifierButton->setStyleSheet(QString::fromUtf8("/* Style pour tous les boutons dans l'interface utilisateur */\n"
"QPushButton {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: purple; /* Couleur de fond mauve par d\303\251faut */\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e par d\303\251faut */\n"
"    color: #ecf0f1; /* Couleur du texte par d\303\251faut */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat survol\303\251 */\n"
"QPushButton:hover {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond blanche lorsqu'il est survol\303\251 */\n"
"    border: 2px solid #3498db; /* Bordure bleue lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat press\303\251 (cliqu\303\251) */\n"
"QPushButton:pressed {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond rouge lorsqu'il est press\303\251 */\n"
"    border: 2px solid #2980b9; /* Bordu"
                        "re bleue plus fonc\303\251e lorsqu'il est press\303\251 */\n"
"}\n"
"\n"
""));
        tabWidget->addTab(pageModifier, QString());
        pageSupprimer = new QWidget();
        pageSupprimer->setObjectName(QStringLiteral("pageSupprimer"));
        label = new QLabel(pageSupprimer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 1081, 601));
        label->setPixmap(QPixmap(QString::fromUtf8("images/backg.jpg.jpg")));
        label->setScaledContents(true);
        label_18 = new QLabel(pageSupprimer);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(70, 150, 219, 79));
        label_18->setStyleSheet(QLatin1String("QLabel {\n"
"    color: white;\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        label_19 = new QLabel(pageSupprimer);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 50, 401, 91));
        QPalette palette3;
        QLinearGradient gradient27(0, 0, 1, 0);
        gradient27.setSpread(QGradient::PadSpread);
        gradient27.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient27.setColorAt(0, QColor(0, 0, 102, 255));
        gradient27.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient27.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient27.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush27(gradient27);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush27);
        QLinearGradient gradient28(0, 0, 1, 0);
        gradient28.setSpread(QGradient::PadSpread);
        gradient28.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient28.setColorAt(0, QColor(0, 0, 102, 255));
        gradient28.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient28.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient28.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush28(gradient28);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush28);
        QLinearGradient gradient29(0, 0, 1, 0);
        gradient29.setSpread(QGradient::PadSpread);
        gradient29.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient29.setColorAt(0, QColor(0, 0, 102, 255));
        gradient29.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient29.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient29.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush29(gradient29);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush29);
        QLinearGradient gradient30(0, 0, 1, 0);
        gradient30.setSpread(QGradient::PadSpread);
        gradient30.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient30.setColorAt(0, QColor(0, 0, 102, 255));
        gradient30.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient30.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient30.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush30(gradient30);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush30);
        QLinearGradient gradient31(0, 0, 1, 0);
        gradient31.setSpread(QGradient::PadSpread);
        gradient31.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient31.setColorAt(0, QColor(0, 0, 102, 255));
        gradient31.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient31.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient31.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush31(gradient31);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush31);
        QLinearGradient gradient32(0, 0, 1, 0);
        gradient32.setSpread(QGradient::PadSpread);
        gradient32.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient32.setColorAt(0, QColor(0, 0, 102, 255));
        gradient32.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient32.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient32.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush32(gradient32);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush32);
        QLinearGradient gradient33(0, 0, 1, 0);
        gradient33.setSpread(QGradient::PadSpread);
        gradient33.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient33.setColorAt(0, QColor(0, 0, 102, 255));
        gradient33.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient33.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient33.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush33(gradient33);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush33);
        QLinearGradient gradient34(0, 0, 1, 0);
        gradient34.setSpread(QGradient::PadSpread);
        gradient34.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient34.setColorAt(0, QColor(0, 0, 102, 255));
        gradient34.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient34.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient34.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush34(gradient34);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush34);
        QLinearGradient gradient35(0, 0, 1, 0);
        gradient35.setSpread(QGradient::PadSpread);
        gradient35.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient35.setColorAt(0, QColor(0, 0, 102, 255));
        gradient35.setColorAt(0.25, QColor(0, 0, 102, 255));
        gradient35.setColorAt(0.75, QColor(173, 216, 230, 255));
        gradient35.setColorAt(1, QColor(173, 216, 230, 255));
        QBrush brush35(gradient35);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush35);
        label_19->setPalette(palette3);
        label_19->setFont(font);
        label_19->setStyleSheet(QLatin1String("font-size: 16pt;\n"
"font-family: \"MS Serif\";\n"
""));
        label_19->setTextFormat(Qt::AutoText);
        lineEdit_idASupprimer = new QLineEdit(pageSupprimer);
        lineEdit_idASupprimer->setObjectName(QStringLiteral("lineEdit_idASupprimer"));
        lineEdit_idASupprimer->setGeometry(QRect(130, 170, 161, 31));
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
        supprimerButton->setGeometry(QRect(250, 330, 93, 28));
        supprimerButton->setStyleSheet(QString::fromUtf8("/* Style pour tous les boutons dans l'interface utilisateur */\n"
"QPushButton {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: purple; /* Couleur de fond mauve par d\303\251faut */\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e par d\303\251faut */\n"
"    color: #ecf0f1; /* Couleur du texte par d\303\251faut */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat survol\303\251 */\n"
"QPushButton:hover {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond blanche lorsqu'il est survol\303\251 */\n"
"    border: 2px solid #3498db; /* Bordure bleue lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"/* Style pour tous les boutons en \303\251tat press\303\251 (cliqu\303\251) */\n"
"QPushButton:pressed {\n"
"    font-size: 14px; /* Ajoutez un point-virgule ici */\n"
"    background-color: red; /* Couleur de fond rouge lorsqu'il est press\303\251 */\n"
"    border: 2px solid #2980b9; /* Bordu"
                        "re bleue plus fonc\303\251e lorsqu'il est press\303\251 */\n"
"}\n"
"\n"
""));
        tabWidget->addTab(pageSupprimer, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QString());
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
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Serif'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#ffaa00;\">:Afficher un abonne</span></p></body></html>", Q_NULLPTR));
        pdf->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        stat->setText(QApplication::translate("MainWindow", "STAT", Q_NULLPTR));
        triButton->setText(QApplication::translate("MainWindow", "TRI", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageAfficher), QApplication::translate("MainWindow", "pageAfficher", Q_NULLPTR));
        label_4->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Serif'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#ffaa00;\">:Ajouter un abonne</span></p></body></html>", Q_NULLPTR));
        ajouterButton->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        groupBox->setTitle(QString());
        id_a->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        nom->setText(QApplication::translate("MainWindow", "nom:", Q_NULLPTR));
        prenom->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        email->setText(QApplication::translate("MainWindow", "adresse email", Q_NULLPTR));
        paiment->setText(QApplication::translate("MainWindow", "methode de paiment", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageAjouter), QApplication::translate("MainWindow", "pageAjouter", Q_NULLPTR));
        label_3->setText(QString());
        idToSearch->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "nom:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "adresse email", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "methode de paiment", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Serif'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#ffaa00;\">:modifier un abonne</span></p></body></html>", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "carte bancaire", Q_NULLPTR)
         << QApplication::translate("MainWindow", "cheque", Q_NULLPTR)
         << QApplication::translate("MainWindow", "espece", Q_NULLPTR)
        );
        chercherButton->setText(QApplication::translate("MainWindow", "chercher", Q_NULLPTR));
        modifierButton->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageModifier), QApplication::translate("MainWindow", "pageModifier", Q_NULLPTR));
        label->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Serif'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#ffaa00;\">:supprimer un abonne</span></p></body></html>", Q_NULLPTR));
        supprimerButton->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageSupprimer), QApplication::translate("MainWindow", "pageSupprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
