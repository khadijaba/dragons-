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
#include <QtWidgets/QTextEdit>
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
    QPushButton *pdf;
    QPushButton *stat;
    QLabel *label_5;
    QPushButton *refresh;
    QComboBox *comboBoxTri;
    QPushButton *triButton;
    QLineEdit *lineEdit_search;
    QWidget *tab_2;
    QLineEdit *idarduino;
    QPushButton *ajouterButton_2;
    QWidget *pageAjouter;
    QLabel *label_4;
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
    QLabel *label_6;
    QPushButton *imageButton;
    QLabel *imageLabel;
    QLabel *imagePathLabel;
    QPushButton *MAIL_abonne;
    QPushButton *openTranslatorDialogButton;
    QWidget *pageModifier;
    QLabel *label_3;
    QPushButton *chercherButton;
    QPushButton *modifierButton;
    QGroupBox *groupBox_2;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_email_3;
    QLineEdit *lineEdit_prenom_3;
    QLineEdit *lineEdit_nom_3;
    QLineEdit *lineEdit_idChercher;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *id_a_3;
    QLabel *nom_3;
    QLabel *prenom_3;
    QLabel *email_3;
    QLabel *paiment_3;
    QLabel *label_7;
    QLabel *imagePathLabel_2;
    QWidget *pageSupprimer;
    QLabel *label;
    QLineEdit *lineEdit_idASupprimer;
    QPushButton *supprimerButton;
    QLabel *id_a_4;
    QLabel *label_8;
    QWidget *tab;
    QLabel *label_9;
    QLineEdit *rcpt;
    QLineEdit *subject;
    QLineEdit *file;
    QPushButton *browseBtn;
    QTextEdit *msg;
    QPushButton *sendBtn;
    QLineEdit *fromLineEdit;
    QLabel *label_11;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1100, 700);
        MainWindow->setStyleSheet(QLatin1String("/* QTabWidget style */\n"
"QTabWidget {\n"
"    background-color: #87CEEB;    /* Light blue background */\n"
"    color: #333333;               /* Dark gray text color */\n"
"    border: 1px solid #d0d0d0;    /* Light gray border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"}\n"
"\n"
"/* QTabBar style */\n"
"QTabBar::tab {\n"
"    background-color: #00BFFF;    /* Light blue background color for tabs */\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #00BFFF;    /* Light blue border */\n"
"    border-top-left-radius: 5px;   /* Rounded corners for the top-left tab */\n"
"    border-top-right-radius: 5px;  /* Rounded corners for the top-right tab */\n"
"    padding: 5px 10px;            /* Padding */\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: #1E90FF;    /* Darker light blue for the selected tab */\n"
"}\n"
"\n"
"/* QTabWidget content area style */\n"
"QTabWidget::pane {\n"
"    border: 1px solid #d0d0d0;    /* Light gray border fo"
                        "r the content area */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    background-color: #ffffff;     /* White background color */\n"
"}\n"
"\n"
"/* QTabWidget content area when tab is selected style */\n"
"QTabWidget::tab:selected::pane {\n"
"    background-color: #f0f0f0;    /* Light gray background for the selected tab content */\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1091, 651));
        tabWidget->setStyleSheet(QStringLiteral(""));
        pageAfficher = new QWidget();
        pageAfficher->setObjectName(QStringLiteral("pageAfficher"));
        label_2 = new QLabel(pageAfficher);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, -30, 1091, 681));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../doujzz.jpg")));
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
        tableWidget->setGeometry(QRect(150, 230, 541, 201));
        tableWidget->setStyleSheet(QLatin1String("/* QTableWidget style */\n"
"QTableWidget {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    alternate-background-color: #d3e8f5;  /* Alternate row background color */\n"
"    selection-background-color: #3fb5d0;  /* Light blue selection background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"}\n"
"\n"
"/* Header style */\n"
"QHeaderView::section {\n"
"    background-color: #3fb5d0;      /* Light blue background color for header */\n"
"    color: white;                   /* White text color */\n"
"    padding: 5px;                   /* Padding for header */\n"
"    border: 1px solid #3fb5d0;      /* Light blue border for header */\n"
"}\n"
"\n"
"/* Horizontal header style */\n"
"QHeaderView::section:horizontal {\n"
"    border-top-left-radius: 5px;    /* Rounded corners for the top-left header */\n"
"    border-top-righ"
                        "t-radius: 5px;   /* Rounded corners for the top-right header */\n"
"}\n"
"\n"
"/* Vertical header style */\n"
"QHeaderView::section:vertical {\n"
"    border-bottom-left-radius: 5px; /* Rounded corners for the bottom-left header */\n"
"    border-top-left-radius: 5px;    /* Rounded corners for the top-left header */\n"
"}\n"
"\n"
"/* Cell style */\n"
"QTableWidget::item {\n"
"    padding: 5px;                   /* Padding for cell */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border for cell */\n"
"}\n"
"\n"
"/* Selected cell style */\n"
"QTableWidget::item:selected {\n"
"    background-color: #329bb0;      /* Slightly darker blue background color for selected cell */\n"
"    color: white;                   /* White text color for selected cell */\n"
"}\n"
""));
        pdf = new QPushButton(pageAfficher);
        pdf->setObjectName(QStringLiteral("pdf"));
        pdf->setGeometry(QRect(920, 530, 171, 81));
        pdf->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
"    background-color: #87CEEB;    /* Light blue background color */\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        stat = new QPushButton(pageAfficher);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(980, 30, 91, 81));
        stat->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
"    background-color: #87CEEB;    /* Light blue background color */\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        label_5 = new QLabel(pageAfficher);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 40, 401, 61));
        label_5->setStyleSheet(QLatin1String("font: 81 16pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);"));
        refresh = new QPushButton(pageAfficher);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(710, 290, 81, 71));
        refresh->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
"    background-color: #87CEEB;    /* Light blue background color */\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        comboBoxTri = new QComboBox(pageAfficher);
        comboBoxTri->setObjectName(QStringLiteral("comboBoxTri"));
        comboBoxTri->setGeometry(QRect(130, 520, 241, 31));
        comboBoxTri->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
        triButton = new QPushButton(pageAfficher);
        triButton->setObjectName(QStringLiteral("triButton"));
        triButton->setGeometry(QRect(30, 510, 91, 51));
        triButton->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
"    background-color: #87CEEB;    /* Light blue background color */\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        lineEdit_search = new QLineEdit(pageAfficher);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(230, 180, 271, 41));
        lineEdit_search->setStyleSheet(QLatin1String("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 2px solid #ccc;\n"
"    border-radius: 5px;\n"
"    background-color: #f5f5f5;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"    background-color: #fff;\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    border-color: #999;\n"
"}\n"
""));
        tabWidget->addTab(pageAfficher, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        idarduino = new QLineEdit(tab_2);
        idarduino->setObjectName(QStringLiteral("idarduino"));
        idarduino->setGeometry(QRect(220, 300, 291, 31));
        idarduino->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        ajouterButton_2 = new QPushButton(tab_2);
        ajouterButton_2->setObjectName(QStringLiteral("ajouterButton_2"));
        ajouterButton_2->setGeometry(QRect(610, 290, 121, 71));
        ajouterButton_2->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
"    background-color: #87CEEB;    /* Light blue background color */\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        tabWidget->addTab(tab_2, QString());
        pageAjouter = new QWidget();
        pageAjouter->setObjectName(QStringLiteral("pageAjouter"));
        label_4 = new QLabel(pageAjouter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, -30, 1091, 651));
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
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../doujzz.jpg")));
        label_4->setScaledContents(true);
        ajouterButton = new QPushButton(pageAjouter);
        ajouterButton->setObjectName(QStringLiteral("ajouterButton"));
        ajouterButton->setGeometry(QRect(892, 517, 121, 71));
        ajouterButton->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
"    background-color: #87CEEB;    /* Light blue background color */\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
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
"	color: rgb(0, 0, 0);\n"
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
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
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
"    \n"
"	color: rgb(0, 0, 0);\n"
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
"	color: rgb(0, 0, 0);\n"
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
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        paiment->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(paiment);

        label_6 = new QLabel(pageAjouter);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 30, 401, 61));
        label_6->setStyleSheet(QLatin1String("font: 81 16pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);"));
        imageButton = new QPushButton(pageAjouter);
        imageButton->setObjectName(QStringLiteral("imageButton"));
        imageButton->setGeometry(QRect(820, 30, 93, 91));
        imageLabel = new QLabel(pageAjouter);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setGeometry(QRect(920, 30, 121, 91));
        imageLabel->setScaledContents(true);
        imagePathLabel = new QLabel(pageAjouter);
        imagePathLabel->setObjectName(QStringLiteral("imagePathLabel"));
        imagePathLabel->setGeometry(QRect(840, 130, 56, 16));
        MAIL_abonne = new QPushButton(pageAjouter);
        MAIL_abonne->setObjectName(QStringLiteral("MAIL_abonne"));
        MAIL_abonne->setGeometry(QRect(640, 50, 91, 41));
        MAIL_abonne->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding: 6px 12px; /* Espace int\303\251rieur du bouton */\n"
"    border: 3px solid #ccc; /* Bordure grise */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    background-color: #fff; /* Couleur de fond */\n"
"    transition: background-color 0.3s, border-color 0.3s; /* Transition douce pour le survol */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border-color: #555; /* Couleur de la bordure lors du survol */\n"
"    background-color: #eee; /* Nouvelle couleur de fond lors du survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* Couleur de fond lorsque le bouton est enfonc\303\251 */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none; /* Supprime l'effet de focus par d\303\251faut */\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/email.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MAIL_abonne->setIcon(icon);
        MAIL_abonne->setIconSize(QSize(30, 30));
        openTranslatorDialogButton = new QPushButton(pageAjouter);
        openTranslatorDialogButton->setObjectName(QStringLiteral("openTranslatorDialogButton"));
        openTranslatorDialogButton->setGeometry(QRect(680, 150, 91, 41));
        openTranslatorDialogButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding: 6px 12px; /* Espace int\303\251rieur du bouton */\n"
"    border: 3px solid #ccc; /* Bordure grise */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    background-color: #fff; /* Couleur de fond */\n"
"    transition: background-color 0.3s, border-color 0.3s; /* Transition douce pour le survol */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border-color: #555; /* Couleur de la bordure lors du survol */\n"
"    background-color: #eee; /* Nouvelle couleur de fond lors du survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* Couleur de fond lorsque le bouton est enfonc\303\251 */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none; /* Supprime l'effet de focus par d\303\251faut */\n"
"}\n"
""));
        openTranslatorDialogButton->setIcon(icon);
        openTranslatorDialogButton->setIconSize(QSize(30, 30));
        tabWidget->addTab(pageAjouter, QString());
        pageModifier = new QWidget();
        pageModifier->setObjectName(QStringLiteral("pageModifier"));
        label_3 = new QLabel(pageModifier);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-10, -50, 1091, 681));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../doujzz.jpg")));
        label_3->setScaledContents(true);
        chercherButton = new QPushButton(pageModifier);
        chercherButton->setObjectName(QStringLiteral("chercherButton"));
        chercherButton->setGeometry(QRect(650, 140, 93, 41));
        chercherButton->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
"    background-color: #87CEEB;    /* Light blue background color */\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        modifierButton = new QPushButton(pageModifier);
        modifierButton->setObjectName(QStringLiteral("modifierButton"));
        modifierButton->setGeometry(QRect(910, 550, 93, 51));
        modifierButton->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
"    background-color: #87CEEB;    /* Light blue background color */\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        groupBox_2 = new QGroupBox(pageModifier);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 100, 551, 441));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
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
        groupBox_2->setAlignment(Qt::AlignCenter);
        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(230, 380, 291, 31));
        comboBox_3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
        lineEdit_email_3 = new QLineEdit(groupBox_2);
        lineEdit_email_3->setObjectName(QStringLiteral("lineEdit_email_3"));
        lineEdit_email_3->setGeometry(QRect(230, 290, 301, 31));
        lineEdit_email_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_prenom_3 = new QLineEdit(groupBox_2);
        lineEdit_prenom_3->setObjectName(QStringLiteral("lineEdit_prenom_3"));
        lineEdit_prenom_3->setGeometry(QRect(230, 200, 291, 31));
        lineEdit_prenom_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_nom_3 = new QLineEdit(groupBox_2);
        lineEdit_nom_3->setObjectName(QStringLiteral("lineEdit_nom_3"));
        lineEdit_nom_3->setGeometry(QRect(230, 130, 291, 31));
        lineEdit_nom_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_idChercher = new QLineEdit(groupBox_2);
        lineEdit_idChercher->setObjectName(QStringLiteral("lineEdit_idChercher"));
        lineEdit_idChercher->setGeometry(QRect(230, 50, 291, 31));
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
        verticalLayoutWidget_3 = new QWidget(groupBox_2);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 221, 421));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        id_a_3 = new QLabel(verticalLayoutWidget_3);
        id_a_3->setObjectName(QStringLiteral("id_a_3"));
        id_a_3->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        id_a_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(id_a_3);

        nom_3 = new QLabel(verticalLayoutWidget_3);
        nom_3->setObjectName(QStringLiteral("nom_3"));
        nom_3->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        nom_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(nom_3);

        prenom_3 = new QLabel(verticalLayoutWidget_3);
        prenom_3->setObjectName(QStringLiteral("prenom_3"));
        prenom_3->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"    \n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        prenom_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(prenom_3);

        email_3 = new QLabel(verticalLayoutWidget_3);
        email_3->setObjectName(QStringLiteral("email_3"));
        email_3->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        email_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(email_3);

        paiment_3 = new QLabel(verticalLayoutWidget_3);
        paiment_3->setObjectName(QStringLiteral("paiment_3"));
        paiment_3->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        paiment_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(paiment_3);

        label_7 = new QLabel(pageModifier);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 30, 401, 61));
        label_7->setStyleSheet(QLatin1String("font: 81 16pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);"));
        imagePathLabel_2 = new QLabel(pageModifier);
        imagePathLabel_2->setObjectName(QStringLiteral("imagePathLabel_2"));
        imagePathLabel_2->setGeometry(QRect(900, 50, 56, 16));
        tabWidget->addTab(pageModifier, QString());
        pageSupprimer = new QWidget();
        pageSupprimer->setObjectName(QStringLiteral("pageSupprimer"));
        label = new QLabel(pageSupprimer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -90, 1101, 701));
        label->setPixmap(QPixmap(QString::fromUtf8("../../doujzz.jpg")));
        label->setScaledContents(true);
        lineEdit_idASupprimer = new QLineEdit(pageSupprimer);
        lineEdit_idASupprimer->setObjectName(QStringLiteral("lineEdit_idASupprimer"));
        lineEdit_idASupprimer->setGeometry(QRect(200, 200, 161, 31));
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
        supprimerButton->setGeometry(QRect(170, 270, 93, 41));
        supprimerButton->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
"    background-color: #87CEEB;    /* Light blue background color */\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        id_a_4 = new QLabel(pageSupprimer);
        id_a_4->setObjectName(QStringLiteral("id_a_4"));
        id_a_4->setGeometry(QRect(30, 170, 219, 79));
        id_a_4->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        id_a_4->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(pageSupprimer);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 30, 401, 61));
        label_8->setStyleSheet(QLatin1String("font: 81 16pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);"));
        tabWidget->addTab(pageSupprimer, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 1091, 611));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../doujzz.jpg")));
        label_9->setScaledContents(true);
        rcpt = new QLineEdit(tab);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(40, 240, 421, 31));
        rcpt->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        subject = new QLineEdit(tab);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(40, 290, 551, 31));
        file = new QLineEdit(tab);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(40, 340, 421, 31));
        browseBtn = new QPushButton(tab);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(470, 340, 71, 31));
        msg = new QTextEdit(tab);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(40, 390, 641, 181));
        sendBtn = new QPushButton(tab);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(690, 580, 93, 28));
        fromLineEdit = new QLineEdit(tab);
        fromLineEdit->setObjectName(QStringLiteral("fromLineEdit"));
        fromLineEdit->setGeometry(QRect(40, 190, 421, 31));
        fromLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(280, 30, 401, 61));
        label_11->setStyleSheet(QLatin1String("font: 81 16pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);"));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


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
        pdf->setText(QApplication::translate("MainWindow", "EXPORT PDF", Q_NULLPTR));
        stat->setText(QApplication::translate("MainWindow", "STAT", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "afficher un abonne:", Q_NULLPTR));
        refresh->setText(QApplication::translate("MainWindow", "refresh", Q_NULLPTR));
        comboBoxTri->clear();
        comboBoxTri->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "id_a ASC", Q_NULLPTR)
         << QApplication::translate("MainWindow", "nom DESC", Q_NULLPTR)
         << QApplication::translate("MainWindow", "nom ASC", Q_NULLPTR)
         << QApplication::translate("MainWindow", "id_a DESC", Q_NULLPTR)
        );
        triButton->setText(QApplication::translate("MainWindow", "TRI", Q_NULLPTR));
        lineEdit_search->setInputMask(QString());
        lineEdit_search->setText(QApplication::translate("MainWindow", "chercher par le nom", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageAfficher), QApplication::translate("MainWindow", "pageAfficher", Q_NULLPTR));
        ajouterButton_2->setText(QApplication::translate("MainWindow", "rechercher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "arduino", Q_NULLPTR));
        label_4->setText(QString());
        ajouterButton->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        groupBox->setTitle(QString());
        id_a->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        nom->setText(QApplication::translate("MainWindow", "nom:", Q_NULLPTR));
        prenom->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        email->setText(QApplication::translate("MainWindow", "adresse email", Q_NULLPTR));
        paiment->setText(QApplication::translate("MainWindow", "methode de paiment", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "ajouter un abonne:", Q_NULLPTR));
        imageButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        imageLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        imagePathLabel->setText(QApplication::translate("MainWindow", "path", Q_NULLPTR));
        MAIL_abonne->setText(QString());
        openTranslatorDialogButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(pageAjouter), QApplication::translate("MainWindow", "pageAjouter", Q_NULLPTR));
        label_3->setText(QString());
        chercherButton->setText(QApplication::translate("MainWindow", "chercher", Q_NULLPTR));
        modifierButton->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "carte bancaire", Q_NULLPTR)
         << QApplication::translate("MainWindow", "espece", Q_NULLPTR)
         << QApplication::translate("MainWindow", "cheque", Q_NULLPTR)
        );
        id_a_3->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        nom_3->setText(QApplication::translate("MainWindow", "nom:", Q_NULLPTR));
        prenom_3->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        email_3->setText(QApplication::translate("MainWindow", "adresse email", Q_NULLPTR));
        paiment_3->setText(QApplication::translate("MainWindow", "methode de paiment", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "modifier un abonne:", Q_NULLPTR));
        imagePathLabel_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageModifier), QApplication::translate("MainWindow", "pageModifier", Q_NULLPTR));
        label->setText(QString());
        supprimerButton->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        id_a_4->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "supprimer un abonne:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageSupprimer), QApplication::translate("MainWindow", "pageSupprimer", Q_NULLPTR));
        label_9->setText(QString());
        rcpt->setText(QApplication::translate("MainWindow", "to", Q_NULLPTR));
        subject->setText(QApplication::translate("MainWindow", "subject", Q_NULLPTR));
        file->setText(QApplication::translate("MainWindow", "Joindre des fichiers", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("MainWindow", "Browse...", Q_NULLPTR));
        msg->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">compse email</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow", "ENVOYER", Q_NULLPTR));
        fromLineEdit->setText(QApplication::translate("MainWindow", "from", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "compose your email:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "mailing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
