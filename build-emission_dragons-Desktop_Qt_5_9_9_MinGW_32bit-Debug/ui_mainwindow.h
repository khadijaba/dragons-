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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcameraviewfinder.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *pageAfficher;
    QLabel *label;
    QLabel *label_6;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label_11;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *stat;
    QPushButton *triParIdButton;
    QPushButton *triParTitreButton;
    QPushButton *pushButton_5;
    QWidget *pageAjouter;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_12;
    QPushButton *ajouterButton;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_titre;
    QLineEdit *lineEdit_id;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *id_a_2;
    QLabel *nom_2;
    QLabel *email_2;
    QLabel *paiment_3;
    QLabel *paiment_4;
    QLabel *lineEdit_description;
    QDateEdit *dateEdit_diffusion;
    QComboBox *comboBox_categorie;
    QPlainTextEdit *plainTextEdit;
    QTimeEdit *timeEdit_duree;
    QTimeEdit *timeEdit_4;
    QLabel *paiment_7;
    QLabel *paiment_8;
    QWidget *pageModifier;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_13;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_titre_5;
    QLineEdit *lineEdit_idChercher_3;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *id_a_6;
    QLabel *nom_5;
    QLabel *email_5;
    QLabel *paiment_11;
    QLabel *paiment_12;
    QLabel *prenom_5;
    QDateEdit *dateEdit_diffusion_5;
    QComboBox *comboBox_categorie_5;
    QPlainTextEdit *plainTextEdit_4;
    QTimeEdit *timeEdit_duree_5;
    QTimeEdit *timeEdit_8;
    QLabel *paiment_19;
    QLabel *paiment_20;
    QPushButton *modifierButton;
    QPushButton *chercherButton;
    QWidget *pageSupprimer;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *id_a_3;
    QPushButton *supprimerButton;
    QLineEdit *lineEdit_idASupprimer;
    QLabel *label_14;
    QWidget *LIVE;
    QLabel *label_5;
    QLabel *label_15;
    QLabel *label_10;
    QPushButton *stop;
    QPushButton *play;
    QCameraViewfinder *widget_Camera_View;
    QWidget *widget;
    QLabel *label_34;
    QCalendarWidget *calendarWidget_2;
    QLabel *label_33;
    QTableWidget *tableWidget_2;
    QWidget *mdp;
    QLabel *label_16;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *b6;
    QPushButton *b5;
    QPushButton *b4;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b9;
    QPushButton *b0;
    QPushButton *bdieze;
    QPushButton *betoile;
    QPushButton *bA;
    QPushButton *bB;
    QPushButton *bC;
    QPushButton *bD;
    QPushButton *comfirmer_mdp;
    QLineEdit *tap_mdp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1057, 679);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1061, 711));
        pageAfficher = new QWidget();
        pageAfficher->setObjectName(QStringLiteral("pageAfficher"));
        label = new QLabel(pageAfficher);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -70, 1061, 741));
        label->setPixmap(QPixmap(QString::fromUtf8("../emission/Design sans titre.jpg")));
        label_6 = new QLabel(pageAfficher);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 81, 71));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../emission/logo.png")));
        pushButton = new QPushButton(pageAfficher);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(940, 110, 93, 41));
        pushButton->setStyleSheet(QLatin1String("/* QPushButton style */\n"
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
        tableWidget = new QTableWidget(pageAfficher);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(220, 170, 731, 331));
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
        label_11 = new QLabel(pageAfficher);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(330, 60, 401, 61));
        label_11->setStyleSheet(QLatin1String("font: 81 16pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);"));
        verticalLayoutWidget = new QWidget(pageAfficher);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 170, 160, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stat = new QPushButton(verticalLayoutWidget);
        stat->setObjectName(QStringLiteral("stat"));
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

        verticalLayout->addWidget(stat);

        triParIdButton = new QPushButton(verticalLayoutWidget);
        triParIdButton->setObjectName(QStringLiteral("triParIdButton"));
        triParIdButton->setStyleSheet(QLatin1String("/* QPushButton style */\n"
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

        verticalLayout->addWidget(triParIdButton);

        triParTitreButton = new QPushButton(verticalLayoutWidget);
        triParTitreButton->setObjectName(QStringLiteral("triParTitreButton"));
        triParTitreButton->setStyleSheet(QLatin1String("/* QPushButton style */\n"
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

        verticalLayout->addWidget(triParTitreButton);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QLatin1String("/* QPushButton style */\n"
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

        verticalLayout->addWidget(pushButton_5);

        tabWidget->addTab(pageAfficher, QString());
        pageAjouter = new QWidget();
        pageAjouter->setObjectName(QStringLiteral("pageAjouter"));
        label_2 = new QLabel(pageAjouter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, -70, 1061, 741));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../emission/Design sans titre.jpg")));
        label_7 = new QLabel(pageAjouter);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 81, 71));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../emission/logo.png")));
        label_12 = new QLabel(pageAjouter);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(330, 10, 401, 61));
        label_12->setStyleSheet(QLatin1String("font: 81 16pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);"));
        ajouterButton = new QPushButton(pageAjouter);
        ajouterButton->setObjectName(QStringLiteral("ajouterButton"));
        ajouterButton->setGeometry(QRect(810, 320, 93, 41));
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
        groupBox_2 = new QGroupBox(pageAjouter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(180, 80, 551, 471));
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
        lineEdit_titre = new QLineEdit(groupBox_2);
        lineEdit_titre->setObjectName(QStringLiteral("lineEdit_titre"));
        lineEdit_titre->setGeometry(QRect(230, 110, 291, 31));
        lineEdit_titre->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
""));
        lineEdit_id = new QLineEdit(groupBox_2);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(230, 30, 291, 31));
        lineEdit_id->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
""));
        verticalLayoutWidget_3 = new QWidget(groupBox_2);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 221, 451));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        id_a_2 = new QLabel(verticalLayoutWidget_3);
        id_a_2->setObjectName(QStringLiteral("id_a_2"));
        id_a_2->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        id_a_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(id_a_2);

        nom_2 = new QLabel(verticalLayoutWidget_3);
        nom_2->setObjectName(QStringLiteral("nom_2"));
        nom_2->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        nom_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(nom_2);

        email_2 = new QLabel(verticalLayoutWidget_3);
        email_2->setObjectName(QStringLiteral("email_2"));
        email_2->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        email_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(email_2);

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

        paiment_4 = new QLabel(verticalLayoutWidget_3);
        paiment_4->setObjectName(QStringLiteral("paiment_4"));
        paiment_4->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        paiment_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(paiment_4);

        lineEdit_description = new QLabel(verticalLayoutWidget_3);
        lineEdit_description->setObjectName(QStringLiteral("lineEdit_description"));
        lineEdit_description->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"    \n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        lineEdit_description->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_description);

        dateEdit_diffusion = new QDateEdit(groupBox_2);
        dateEdit_diffusion->setObjectName(QStringLiteral("dateEdit_diffusion"));
        dateEdit_diffusion->setGeometry(QRect(230, 190, 81, 22));
        dateEdit_diffusion->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
"\n"
"/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdo"
                        "wn arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue backg"
                        "round color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: trans"
                        "parent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        comboBox_categorie = new QComboBox(groupBox_2);
        comboBox_categorie->setObjectName(QStringLiteral("comboBox_categorie"));
        comboBox_categorie->setGeometry(QRect(230, 260, 81, 31));
        comboBox_categorie->setStyleSheet(QLatin1String("/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'dow"
                        "n-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;"
                        "      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(230, 396, 291, 61));
        plainTextEdit->setStyleSheet(QLatin1String("/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'dow"
                        "n-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;"
                        "      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        timeEdit_duree = new QTimeEdit(groupBox_2);
        timeEdit_duree->setObjectName(QStringLiteral("timeEdit_duree"));
        timeEdit_duree->setGeometry(QRect(290, 340, 81, 22));
        timeEdit_duree->setStyleSheet(QLatin1String("/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'dow"
                        "n-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;"
                        "      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        timeEdit_4 = new QTimeEdit(groupBox_2);
        timeEdit_4->setObjectName(QStringLiteral("timeEdit_4"));
        timeEdit_4->setGeometry(QRect(440, 340, 91, 22));
        timeEdit_4->setStyleSheet(QLatin1String("/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'dow"
                        "n-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;"
                        "      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        paiment_7 = new QLabel(groupBox_2);
        paiment_7->setObjectName(QStringLiteral("paiment_7"));
        paiment_7->setGeometry(QRect(390, 330, 31, 51));
        paiment_7->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        paiment_7->setAlignment(Qt::AlignCenter);
        paiment_8 = new QLabel(groupBox_2);
        paiment_8->setObjectName(QStringLiteral("paiment_8"));
        paiment_8->setGeometry(QRect(240, 330, 31, 51));
        paiment_8->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        paiment_8->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(pageAjouter, QString());
        pageModifier = new QWidget();
        pageModifier->setObjectName(QStringLiteral("pageModifier"));
        label_3 = new QLabel(pageModifier);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, -70, 1061, 741));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../emission/Design sans titre.jpg")));
        label_8 = new QLabel(pageModifier);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 81, 71));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../emission/logo.png")));
        label_13 = new QLabel(pageModifier);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(260, 10, 401, 61));
        label_13->setStyleSheet(QLatin1String("font: 81 16pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);"));
        groupBox_3 = new QGroupBox(pageModifier);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(150, 90, 551, 471));
        groupBox_3->setStyleSheet(QLatin1String("QGroupBox {\n"
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
        groupBox_3->setAlignment(Qt::AlignCenter);
        lineEdit_titre_5 = new QLineEdit(groupBox_3);
        lineEdit_titre_5->setObjectName(QStringLiteral("lineEdit_titre_5"));
        lineEdit_titre_5->setGeometry(QRect(230, 110, 291, 31));
        lineEdit_titre_5->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
"\n"
"/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdo"
                        "wn arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue backg"
                        "round color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: trans"
                        "parent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        lineEdit_idChercher_3 = new QLineEdit(groupBox_3);
        lineEdit_idChercher_3->setObjectName(QStringLiteral("lineEdit_idChercher_3"));
        lineEdit_idChercher_3->setGeometry(QRect(230, 30, 291, 31));
        lineEdit_idChercher_3->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
"\n"
"/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdo"
                        "wn arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue backg"
                        "round color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: trans"
                        "parent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        verticalLayoutWidget_6 = new QWidget(groupBox_3);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(10, 10, 221, 451));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        id_a_6 = new QLabel(verticalLayoutWidget_6);
        id_a_6->setObjectName(QStringLiteral("id_a_6"));
        id_a_6->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        id_a_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(id_a_6);

        nom_5 = new QLabel(verticalLayoutWidget_6);
        nom_5->setObjectName(QStringLiteral("nom_5"));
        nom_5->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        nom_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(nom_5);

        email_5 = new QLabel(verticalLayoutWidget_6);
        email_5->setObjectName(QStringLiteral("email_5"));
        email_5->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        email_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(email_5);

        paiment_11 = new QLabel(verticalLayoutWidget_6);
        paiment_11->setObjectName(QStringLiteral("paiment_11"));
        paiment_11->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        paiment_11->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(paiment_11);

        paiment_12 = new QLabel(verticalLayoutWidget_6);
        paiment_12->setObjectName(QStringLiteral("paiment_12"));
        paiment_12->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        paiment_12->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(paiment_12);

        prenom_5 = new QLabel(verticalLayoutWidget_6);
        prenom_5->setObjectName(QStringLiteral("prenom_5"));
        prenom_5->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"    \n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        prenom_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(prenom_5);

        dateEdit_diffusion_5 = new QDateEdit(groupBox_3);
        dateEdit_diffusion_5->setObjectName(QStringLiteral("dateEdit_diffusion_5"));
        dateEdit_diffusion_5->setGeometry(QRect(240, 190, 81, 22));
        dateEdit_diffusion_5->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
"\n"
"/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdo"
                        "wn arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue backg"
                        "round color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: trans"
                        "parent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        comboBox_categorie_5 = new QComboBox(groupBox_3);
        comboBox_categorie_5->setObjectName(QStringLiteral("comboBox_categorie_5"));
        comboBox_categorie_5->setGeometry(QRect(240, 260, 81, 31));
        comboBox_categorie_5->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
"\n"
"/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdo"
                        "wn arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue backg"
                        "round color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: trans"
                        "parent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        plainTextEdit_4 = new QPlainTextEdit(groupBox_3);
        plainTextEdit_4->setObjectName(QStringLiteral("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(240, 396, 291, 61));
        plainTextEdit_4->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
"\n"
"/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdo"
                        "wn arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue backg"
                        "round color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: trans"
                        "parent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        timeEdit_duree_5 = new QTimeEdit(groupBox_3);
        timeEdit_duree_5->setObjectName(QStringLiteral("timeEdit_duree_5"));
        timeEdit_duree_5->setGeometry(QRect(280, 350, 81, 22));
        timeEdit_duree_5->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
"\n"
"/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdo"
                        "wn arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue backg"
                        "round color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: trans"
                        "parent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        timeEdit_8 = new QTimeEdit(groupBox_3);
        timeEdit_8->setObjectName(QStringLiteral("timeEdit_8"));
        timeEdit_8->setGeometry(QRect(450, 350, 81, 22));
        timeEdit_8->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
"\n"
"/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdo"
                        "wn arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue backg"
                        "round color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: trans"
                        "parent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        paiment_19 = new QLabel(groupBox_3);
        paiment_19->setObjectName(QStringLiteral("paiment_19"));
        paiment_19->setGeometry(QRect(240, 330, 31, 51));
        paiment_19->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        paiment_19->setAlignment(Qt::AlignCenter);
        paiment_20 = new QLabel(groupBox_3);
        paiment_20->setObjectName(QStringLiteral("paiment_20"));
        paiment_20->setGeometry(QRect(390, 330, 31, 51));
        paiment_20->setStyleSheet(QLatin1String("QLabel {\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 14pt \"Times New Roman\";\n"
"\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        paiment_20->setAlignment(Qt::AlignCenter);
        modifierButton = new QPushButton(pageModifier);
        modifierButton->setObjectName(QStringLiteral("modifierButton"));
        modifierButton->setGeometry(QRect(760, 330, 93, 41));
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
        chercherButton = new QPushButton(pageModifier);
        chercherButton->setObjectName(QStringLiteral("chercherButton"));
        chercherButton->setGeometry(QRect(750, 110, 93, 41));
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
        tabWidget->addTab(pageModifier, QString());
        pageSupprimer = new QWidget();
        pageSupprimer->setObjectName(QStringLiteral("pageSupprimer"));
        label_4 = new QLabel(pageSupprimer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, -70, 1061, 741));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../emission/Design sans titre.jpg")));
        label_9 = new QLabel(pageSupprimer);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 81, 71));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../emission/logo.png")));
        id_a_3 = new QLabel(pageSupprimer);
        id_a_3->setObjectName(QStringLiteral("id_a_3"));
        id_a_3->setGeometry(QRect(260, 280, 219, 70));
        id_a_3->setStyleSheet(QLatin1String("QLabel {\n"
"	font: 75 14pt \"Times New Roman\";\n"
"	color: rgb(0, 0, 0);\n"
"    border: none;            \n"
"    border-radius: 0px;      \n"
"    background: transparent;\n"
"}\n"
""));
        id_a_3->setAlignment(Qt::AlignCenter);
        supprimerButton = new QPushButton(pageSupprimer);
        supprimerButton->setObjectName(QStringLiteral("supprimerButton"));
        supprimerButton->setGeometry(QRect(720, 360, 93, 41));
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
        lineEdit_idASupprimer = new QLineEdit(pageSupprimer);
        lineEdit_idASupprimer->setObjectName(QStringLiteral("lineEdit_idASupprimer"));
        lineEdit_idASupprimer->setGeometry(QRect(400, 300, 291, 31));
        lineEdit_idASupprimer->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
"\n"
"/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdo"
                        "wn arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue backg"
                        "round color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: trans"
                        "parent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        label_14 = new QLabel(pageSupprimer);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(270, 180, 401, 61));
        label_14->setStyleSheet(QLatin1String("font: 81 16pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);"));
        tabWidget->addTab(pageSupprimer, QString());
        LIVE = new QWidget();
        LIVE->setObjectName(QStringLiteral("LIVE"));
        label_5 = new QLabel(LIVE);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, -70, 1061, 741));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../emission/Design sans titre.jpg")));
        label_15 = new QLabel(LIVE);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(-250, 40, 1161, 561));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../emission/strr.png")));
        label_10 = new QLabel(LIVE);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 10, 81, 71));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../emission/logo.png")));
        stop = new QPushButton(LIVE);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(820, 530, 51, 51));
        QIcon icon;
        icon.addFile(QStringLiteral("../emission/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stop->setIcon(icon);
        stop->setIconSize(QSize(50, 50));
        play = new QPushButton(LIVE);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(750, 530, 51, 51));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../emission/play.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        play->setIcon(icon1);
        play->setIconSize(QSize(50, 50));
        widget_Camera_View = new QCameraViewfinder(LIVE);
        widget_Camera_View->setObjectName(QStringLiteral("widget_Camera_View"));
        widget_Camera_View->setGeometry(QRect(90, 90, 791, 401));
        tabWidget->addTab(LIVE, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        label_34 = new QLabel(widget);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 10, 81, 71));
        label_34->setPixmap(QPixmap(QString::fromUtf8("../emission/logo.png")));
        calendarWidget_2 = new QCalendarWidget(widget);
        calendarWidget_2->setObjectName(QStringLiteral("calendarWidget_2"));
        calendarWidget_2->setGeometry(QRect(10, 280, 701, 241));
        calendarWidget_2->setStyleSheet(QLatin1String("background-color: rgb(236, 244, 249);\n"
"alternate-background-color: rgb(60, 168, 184);\n"
"selection-background-color: rgb(62, 122, 162);"));
        label_33 = new QLabel(widget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(0, -70, 1061, 741));
        label_33->setPixmap(QPixmap(QString::fromUtf8("../emission/Design sans titre.jpg")));
        tableWidget_2 = new QTableWidget(widget);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(350, 0, 711, 281));
        tableWidget_2->setStyleSheet(QLatin1String("/* QTableWidget style */\n"
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
        tabWidget->addTab(widget, QString());
        label_33->raise();
        label_34->raise();
        calendarWidget_2->raise();
        tableWidget_2->raise();
        mdp = new QWidget();
        mdp->setObjectName(QStringLiteral("mdp"));
        label_16 = new QLabel(mdp);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(-20, -60, 1061, 741));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../emission/Design sans titre.jpg")));
        b1 = new QPushButton(mdp);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setGeometry(QRect(400, 160, 41, 41));
        b1->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(31, 31, 165);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        b2 = new QPushButton(mdp);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setGeometry(QRect(450, 160, 41, 41));
        b2->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(31, 31, 165);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        b3 = new QPushButton(mdp);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setGeometry(QRect(500, 160, 41, 41));
        b3->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(31, 31, 165);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        b6 = new QPushButton(mdp);
        b6->setObjectName(QStringLiteral("b6"));
        b6->setGeometry(QRect(500, 210, 41, 41));
        b6->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(31, 31, 165);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        b5 = new QPushButton(mdp);
        b5->setObjectName(QStringLiteral("b5"));
        b5->setGeometry(QRect(450, 210, 41, 41));
        b5->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(31, 31, 165);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        b4 = new QPushButton(mdp);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setGeometry(QRect(400, 210, 41, 41));
        b4->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(31, 31, 165);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        b7 = new QPushButton(mdp);
        b7->setObjectName(QStringLiteral("b7"));
        b7->setGeometry(QRect(400, 260, 41, 41));
        b7->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(31, 31, 165);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        b8 = new QPushButton(mdp);
        b8->setObjectName(QStringLiteral("b8"));
        b8->setGeometry(QRect(450, 260, 41, 41));
        b8->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(31, 31, 165);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        b9 = new QPushButton(mdp);
        b9->setObjectName(QStringLiteral("b9"));
        b9->setGeometry(QRect(500, 260, 41, 41));
        b9->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(31, 31, 165);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        b0 = new QPushButton(mdp);
        b0->setObjectName(QStringLiteral("b0"));
        b0->setGeometry(QRect(450, 310, 41, 41));
        b0->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(31, 31, 165);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        bdieze = new QPushButton(mdp);
        bdieze->setObjectName(QStringLiteral("bdieze"));
        bdieze->setGeometry(QRect(400, 310, 41, 41));
        bdieze->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(194, 21, 6);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        betoile = new QPushButton(mdp);
        betoile->setObjectName(QStringLiteral("betoile"));
        betoile->setGeometry(QRect(500, 310, 41, 41));
        betoile->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(194, 21, 6);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        bA = new QPushButton(mdp);
        bA->setObjectName(QStringLiteral("bA"));
        bA->setGeometry(QRect(550, 160, 41, 41));
        bA->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(194, 21, 6);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        bB = new QPushButton(mdp);
        bB->setObjectName(QStringLiteral("bB"));
        bB->setGeometry(QRect(550, 210, 41, 41));
        bB->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(194, 21, 6);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        bC = new QPushButton(mdp);
        bC->setObjectName(QStringLiteral("bC"));
        bC->setGeometry(QRect(550, 260, 41, 41));
        bC->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(194, 21, 6);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        bD = new QPushButton(mdp);
        bD->setObjectName(QStringLiteral("bD"));
        bD->setGeometry(QRect(550, 310, 41, 41));
        bD->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"QPushButton {\n"
" 	background-color: rgb(194, 21, 6);    /* Light blue background color */\n"
"\n"
"    color: white;                 /* White text color */\n"
"    border: 2px solid #87CEEB;    /* Light blue border */\n"
"    border-radius: 5px;           /* Rounded corners */\n"
"    padding: 5px 10px;             /* Padding */\n"
"	font: 8pt \"MS PGothic\";\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5F9EA0;    /* Darker light blue on hover */\n"
"}\n"
""));
        comfirmer_mdp = new QPushButton(mdp);
        comfirmer_mdp->setObjectName(QStringLiteral("comfirmer_mdp"));
        comfirmer_mdp->setGeometry(QRect(470, 370, 61, 51));
        comfirmer_mdp->setStyleSheet(QLatin1String("/* QPushButton style */\n"
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
        tap_mdp = new QLineEdit(mdp);
        tap_mdp->setObjectName(QStringLiteral("tap_mdp"));
        tap_mdp->setGeometry(QRect(150, 370, 291, 31));
        tap_mdp->setStyleSheet(QLatin1String("/* Line Edit style */\n"
"QLineEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3fb5d0;          /* Light blue border color when focused */\n"
"}\n"
"\n"
"/* Combo Box style */\n"
"QComboBox {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdo"
                        "wn arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: transparent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
"\n"
"/* Time Edit style */\n"
"QTimeEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"/* Plain Text Edit style */\n"
"QPlainTextEdit {\n"
"    background-color: #ecf4f9;      /* Light blue backg"
                        "round color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 5px;                   /* Padding */\n"
"}\n"
"\n"
"/* Date Edit style */\n"
"QDateEdit {\n"
"    background-color: #ecf4f9;      /* Light blue background color */\n"
"    color: #333333;                 /* Dark gray text color */\n"
"    border: 1px solid #b5d0e4;      /* Light blue border */\n"
"    border-radius: 5px;             /* Rounded corners */\n"
"    padding: 3px;                   /* Padding */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;                    /* Width of the dropdown arrow */\n"
"    border-left-width: 1px;         /* Thickness of the border */\n"
"    border-left-color: #b5d0e4;     /* Color of the border */\n"
"    border-left-style: solid;\n"
"    background-color: trans"
                        "parent;  /* Transparent background */\n"
"    border-top-right-radius: 5px;   /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 5px;/* Rounded bottom-right corner */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(down-arrow.png);     /* Replace 'down-arrow.png' with your arrow image */\n"
"}\n"
""));
        tabWidget->addTab(mdp, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1057, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_6->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "refresh", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "titre", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "date_diffusion", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "categorie", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "duree", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Afficher Emission:", Q_NULLPTR));
        stat->setText(QApplication::translate("MainWindow", "STAT", Q_NULLPTR));
        triParIdButton->setText(QApplication::translate("MainWindow", "TRI_ID", Q_NULLPTR));
        triParTitreButton->setText(QApplication::translate("MainWindow", "TRI_TITRE", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "EXPORT PDF", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageAfficher), QApplication::translate("MainWindow", "pageAfficher", Q_NULLPTR));
        label_2->setText(QString());
        label_7->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Ajouter Emission:", Q_NULLPTR));
        ajouterButton->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        id_a_2->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        nom_2->setText(QApplication::translate("MainWindow", "titre:", Q_NULLPTR));
        email_2->setText(QApplication::translate("MainWindow", "date_diffusion", Q_NULLPTR));
        paiment_3->setText(QApplication::translate("MainWindow", "categorie", Q_NULLPTR));
        paiment_4->setText(QApplication::translate("MainWindow", "duree", Q_NULLPTR));
        lineEdit_description->setText(QApplication::translate("MainWindow", "description:", Q_NULLPTR));
        comboBox_categorie->clear();
        comboBox_categorie->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "publicite", Q_NULLPTR)
         << QApplication::translate("MainWindow", "film", Q_NULLPTR)
         << QApplication::translate("MainWindow", "serie", Q_NULLPTR)
         << QApplication::translate("MainWindow", "documentaire", Q_NULLPTR)
         << QApplication::translate("MainWindow", "anime", Q_NULLPTR)
         << QApplication::translate("MainWindow", "dessin anime", Q_NULLPTR)
         << QApplication::translate("MainWindow", "educatif", Q_NULLPTR)
         << QApplication::translate("MainWindow", "emission de jeu", Q_NULLPTR)
        );
        paiment_7->setText(QApplication::translate("MainWindow", "\303\240", Q_NULLPTR));
        paiment_8->setText(QApplication::translate("MainWindow", "de", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageAjouter), QApplication::translate("MainWindow", "pageAjouter", Q_NULLPTR));
        label_3->setText(QString());
        label_8->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "Modifier Emission:", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        id_a_6->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        nom_5->setText(QApplication::translate("MainWindow", "titre:", Q_NULLPTR));
        email_5->setText(QApplication::translate("MainWindow", "date_diffusion", Q_NULLPTR));
        paiment_11->setText(QApplication::translate("MainWindow", "categorie", Q_NULLPTR));
        paiment_12->setText(QApplication::translate("MainWindow", "duree", Q_NULLPTR));
        prenom_5->setText(QApplication::translate("MainWindow", "description:", Q_NULLPTR));
        comboBox_categorie_5->clear();
        comboBox_categorie_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "publicite", Q_NULLPTR)
         << QApplication::translate("MainWindow", "serie", Q_NULLPTR)
         << QApplication::translate("MainWindow", "film", Q_NULLPTR)
         << QApplication::translate("MainWindow", "documentaire", Q_NULLPTR)
         << QApplication::translate("MainWindow", "anime", Q_NULLPTR)
         << QApplication::translate("MainWindow", "dessin anime", Q_NULLPTR)
         << QApplication::translate("MainWindow", "educatif", Q_NULLPTR)
         << QApplication::translate("MainWindow", "emission de jeu", Q_NULLPTR)
        );
        paiment_19->setText(QApplication::translate("MainWindow", "de", Q_NULLPTR));
        paiment_20->setText(QApplication::translate("MainWindow", "\303\240", Q_NULLPTR));
        modifierButton->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        chercherButton->setText(QApplication::translate("MainWindow", "chercher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageModifier), QApplication::translate("MainWindow", "pageModifier", Q_NULLPTR));
        label_4->setText(QString());
        label_9->setText(QString());
        id_a_3->setText(QApplication::translate("MainWindow", "id:", Q_NULLPTR));
        supprimerButton->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Supprimer Emission:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pageSupprimer), QApplication::translate("MainWindow", "pageSupprimer", Q_NULLPTR));
        label_5->setText(QString());
        label_15->setText(QString());
        label_10->setText(QString());
        stop->setText(QString());
        play->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(LIVE), QApplication::translate("MainWindow", "LIVE", Q_NULLPTR));
        label_34->setText(QString());
        label_33->setText(QString());
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "ID_EMISSION", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "TITRE", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "DESCRIPTION", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "DATE_DIFFUSION", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "CAT\303\211GORIE", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "DUR\303\211E", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "calendrier", Q_NULLPTR));
        label_16->setText(QString());
        b1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        b2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        b3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        b6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        b5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        b4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        b7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        b8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        b9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        b0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        bdieze->setText(QApplication::translate("MainWindow", "#", Q_NULLPTR));
        betoile->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        bA->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        bB->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        bC->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        bD->setText(QApplication::translate("MainWindow", "D", Q_NULLPTR));
        comfirmer_mdp->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(mdp), QApplication::translate("MainWindow", "MDP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
