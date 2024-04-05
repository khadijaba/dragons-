/********************************************************************************
** Form generated from reading UI file 'mailling.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILLING_H
#define UI_MAILLING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mailling
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEditEmailCredentials_2;
    QLineEdit *lineEditHost_2;
    QLineEdit *lineEditEmailFrom_2;
    QLineEdit *lineEditPasswordCredentials_2;
    QLineEdit *lineEdit_port_2;
    QPushButton *pushButtonSend;
    QLineEdit *lineEditEmailTo_2;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_11;
    QTextEdit *textEditContent_2;
    QLineEdit *lineEditSubject_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mailling)
    {
        if (mailling->objectName().isEmpty())
            mailling->setObjectName(QStringLiteral("mailling"));
        mailling->resize(1100, 900);
        mailling->setMinimumSize(QSize(1100, 900));
        mailling->setMaximumSize(QSize(1100, 900));
        mailling->setStyleSheet(QString::fromUtf8("/* Style pour la fen\303\252tre principale */\n"
"mailling {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #ff99cc, stop:1 #99ccff); /* D\303\251grad\303\251 rose \303\240 bleu */\n"
"}\n"
"\n"
"/* Style pour les labels */\n"
"QLabel {\n"
"    color: #ff66cc; /* Rose vif */\n"
"    font-size: 14pt; /* Taille de police */\n"
"}\n"
"\n"
"/* Style pour les groupes */\n"
"QGroupBox {\n"
"    border: 3px solid #ff66cc; /* Bordure rose vif */\n"
"    border-radius: 30px; /* Coins l\303\251g\303\250rement arrondis */\n"
"    background-color: #ffffff; /* Blanc */\n"
"    margin-top: 10px; /* Marge sup\303\251rieure */\n"
"	font: 11pt \"Times New Roman\";\n"
"}\n"
"\n"
"/* Style pour les champs de saisie */\n"
"QLineEdit {\n"
"    padding: 8px; /* Remplissage interne */\n"
"    border: 1px solid #ff66cc; /* Bordure rose vif */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    background-color: #f9f9f9; /* Gris tr\303\250s clair */\n"
"	font: 11pt \"Times New Roman\";\n"
"}\n"
"\n"
"/* Styl"
                        "e pour les champs de saisie au survol */\n"
"QLineEdit:hover {\n"
"    border: 2px solid #ff99cc; /* Bordure rose clair au survol */\n"
"}\n"
"\n"
"/* Style pour le bouton */\n"
"QPushButton {\n"
"    padding: 8px 20px; /* Remplissage interne (haut/bas gauche/droite) */\n"
"    border: 2px solid ; /* Bordure rose vif */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    background-color: #3399ff; /* Bleu vif */\n"
"    color: #ffffff; /* Blanc */\n"
"    font-size: 14pt; /* Taille de police */\n"
"}\n"
"\n"
"/* Style pour le bouton au survol */\n"
"QPushButton:hover {\n"
"    background-color: #66ccff; /* Bleu clair au survol */\n"
"}\n"
"\n"
"/* Style pour le bouton au clic */\n"
"QPushButton:pressed {\n"
"    background-color: #0066cc; /* Bleu fonc\303\251 au clic */\n"
"}\n"
"\n"
"/* Style pour les QSpinBox */\n"
"QSpinBox {\n"
"    padding: 4px; /* Remplissage interne */\n"
"    border: 1px solid #ff66cc; /* Bordure rose vif */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    background-color"
                        ": #f9f9f9; /* Gris tr\303\250s clair */\n"
"    font-size: 12pt; /* Taille de police */\n"
"}\n"
""));
        centralwidget = new QWidget(mailling);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 50, 971, 781));
        groupBox->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 70, 131, 41));
        label_13->setStyleSheet(QStringLiteral("font: 14pt \"Times New Roman\";"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 150, 111, 41));
        label_14->setStyleSheet(QStringLiteral("font: 14pt \"Times New Roman\";"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 230, 181, 41));
        label_15->setStyleSheet(QStringLiteral("font: 14pt \"Times New Roman\";"));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(470, 80, 151, 41));
        label_16->setStyleSheet(QStringLiteral("font: 14pt \"Times New Roman\";"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(470, 140, 131, 41));
        label_17->setStyleSheet(QStringLiteral("font: 14pt \"Times New Roman\";"));
        label_17->setAlignment(Qt::AlignCenter);
        lineEditEmailCredentials_2 = new QLineEdit(groupBox);
        lineEditEmailCredentials_2->setObjectName(QStringLiteral("lineEditEmailCredentials_2"));
        lineEditEmailCredentials_2->setGeometry(QRect(130, 81, 281, 41));
        lineEditEmailCredentials_2->setReadOnly(true);
        lineEditHost_2 = new QLineEdit(groupBox);
        lineEditHost_2->setObjectName(QStringLiteral("lineEditHost_2"));
        lineEditHost_2->setGeometry(QRect(130, 143, 281, 41));
        lineEditHost_2->setAlignment(Qt::AlignCenter);
        lineEditHost_2->setReadOnly(true);
        lineEditEmailFrom_2 = new QLineEdit(groupBox);
        lineEditEmailFrom_2->setObjectName(QStringLiteral("lineEditEmailFrom_2"));
        lineEditEmailFrom_2->setGeometry(QRect(120, 230, 391, 41));
        lineEditPasswordCredentials_2 = new QLineEdit(groupBox);
        lineEditPasswordCredentials_2->setObjectName(QStringLiteral("lineEditPasswordCredentials_2"));
        lineEditPasswordCredentials_2->setGeometry(QRect(630, 80, 311, 41));
        lineEditPasswordCredentials_2->setReadOnly(true);
        lineEdit_port_2 = new QLineEdit(groupBox);
        lineEdit_port_2->setObjectName(QStringLiteral("lineEdit_port_2"));
        lineEdit_port_2->setGeometry(QRect(630, 140, 311, 41));
        lineEdit_port_2->setAlignment(Qt::AlignCenter);
        pushButtonSend = new QPushButton(groupBox);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));
        pushButtonSend->setGeometry(QRect(340, 720, 261, 43));
        lineEditEmailTo_2 = new QLineEdit(groupBox);
        lineEditEmailTo_2->setObjectName(QStringLiteral("lineEditEmailTo_2"));
        lineEditEmailTo_2->setGeometry(QRect(460, 330, 451, 41));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(310, 330, 111, 41));
        label_10->setStyleSheet(QStringLiteral("font: 14pt \"Times New Roman\";"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(40, 630, 111, 41));
        label_12->setStyleSheet(QStringLiteral("font: 14pt \"Times New Roman\";"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 500, 131, 41));
        label_11->setStyleSheet(QStringLiteral("font: 14pt \"Times New Roman\";"));
        textEditContent_2 = new QTextEdit(groupBox);
        textEditContent_2->setObjectName(QStringLiteral("textEditContent_2"));
        textEditContent_2->setGeometry(QRect(250, 590, 661, 101));
        lineEditSubject_2 = new QLineEdit(groupBox);
        lineEditSubject_2->setObjectName(QStringLiteral("lineEditSubject_2"));
        lineEditSubject_2->setGeometry(QRect(250, 490, 661, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 900, 41));
        label->setStyleSheet(QStringLiteral("font: 75 24pt \"Arial\";"));
        label->setAlignment(Qt::AlignCenter);
        mailling->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mailling);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 26));
        mailling->setMenuBar(menubar);
        statusbar = new QStatusBar(mailling);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        mailling->setStatusBar(statusbar);

        retranslateUi(mailling);

        QMetaObject::connectSlotsByName(mailling);
    } // setupUi

    void retranslateUi(QMainWindow *mailling)
    {
        mailling->setWindowTitle(QApplication::translate("mailling", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("mailling", "Informations de Connexion", Q_NULLPTR));
        label_13->setText(QApplication::translate("mailling", "EMAIL :", Q_NULLPTR));
        label_14->setText(QApplication::translate("mailling", "host", Q_NULLPTR));
        label_15->setText(QApplication::translate("mailling", "FROM : ", Q_NULLPTR));
        label_16->setText(QApplication::translate("mailling", "PASSWORD : ", Q_NULLPTR));
        label_17->setText(QApplication::translate("mailling", "port :", Q_NULLPTR));
        lineEditEmailCredentials_2->setText(QApplication::translate("mailling", "benayedkhadija5@gmail.com", Q_NULLPTR));
        lineEditHost_2->setText(QApplication::translate("mailling", "smtp.gmail.com", Q_NULLPTR));
        lineEditPasswordCredentials_2->setText(QApplication::translate("mailling", "exgu b gel ydw g ityw ", Q_NULLPTR));
        lineEdit_port_2->setText(QApplication::translate("mailling", "465", Q_NULLPTR));
        pushButtonSend->setText(QApplication::translate("mailling", "Envoyer", Q_NULLPTR));
        label_10->setText(QApplication::translate("mailling", "TO : ", Q_NULLPTR));
        label_12->setText(QApplication::translate("mailling", "Contenue :", Q_NULLPTR));
        label_11->setText(QApplication::translate("mailling", "sujet  :", Q_NULLPTR));
        label->setText(QApplication::translate("mailling", "Envoi de Mail", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mailling: public Ui_mailling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILLING_H
