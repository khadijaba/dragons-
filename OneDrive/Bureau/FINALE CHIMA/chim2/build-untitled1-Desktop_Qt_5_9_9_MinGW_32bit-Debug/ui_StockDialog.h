/********************************************************************************
** Form generated from reading UI file 'StockDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKDIALOG_H
#define UI_STOCKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StockDialog
{
public:
    QLabel *fond_4;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *sidebar6;
    QPushButton *retour_m_ressources;
    QPushButton *listeressources;
    QPushButton *ajjj;
    QPushButton *modifierButton_2;
    QPushButton *calendrierdisp;
    QPushButton *statressources;
    QLabel *nomapp_4;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QTableView *tableView;
    QLabel *label;
    QPushButton *supprimerStock;
    QLineEdit *lineEdit_idASupprimer;
    QPushButton *pushButton_2;
    QWidget *page;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_9;
    QLabel *label_131;
    QLabel *label_127;
    QLabel *label_132;
    QLineEdit *seuilMinLineEdit;
    QLineEdit *quantiteLineEdit;
    QLineEdit *idStockLineEdit;
    QPushButton *cancelButton;
    QPushButton *saveButton;
    QWidget *page_2;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_10;
    QLabel *label_133;
    QLabel *label_128;
    QLabel *label_134;
    QLineEdit *seuilMinLineEdit_2;
    QLineEdit *quantiteLineEdit_2;
    QLineEdit *idStockLineEdit_2;
    QPushButton *cancelButton_2;
    QPushButton *saveButton_2;

    void setupUi(QDialog *StockDialog)
    {
        if (StockDialog->objectName().isEmpty())
            StockDialog->setObjectName(QStringLiteral("StockDialog"));
        StockDialog->resize(868, 639);
        fond_4 = new QLabel(StockDialog);
        fond_4->setObjectName(QStringLiteral("fond_4"));
        fond_4->setGeometry(QRect(-20, -20, 1001, 731));
        fond_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icon/gestions.png")));
        verticalLayoutWidget_8 = new QWidget(StockDialog);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(0, 190, 151, 332));
        sidebar6 = new QVBoxLayout(verticalLayoutWidget_8);
        sidebar6->setObjectName(QStringLiteral("sidebar6"));
        sidebar6->setContentsMargins(0, 0, 0, 0);
        retour_m_ressources = new QPushButton(verticalLayoutWidget_8);
        retour_m_ressources->setObjectName(QStringLiteral("retour_m_ressources"));
        retour_m_ressources->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #000000;\n"
"	    color: grey;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 12px;\n"
" font-family: \"Berlin Sans FB\", sans-serif; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
" 	color:white;	\n"
"	background:#1F1F1F;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #2f2f2f;\n"
" 	color:white;	\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icon/accueil.png"), QSize(), QIcon::Normal, QIcon::Off);
        retour_m_ressources->setIcon(icon);
        retour_m_ressources->setIconSize(QSize(20, 30));

        sidebar6->addWidget(retour_m_ressources);

        listeressources = new QPushButton(verticalLayoutWidget_8);
        listeressources->setObjectName(QStringLiteral("listeressources"));
        listeressources->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #000000;\n"
"	    color: grey;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 12px;\n"
" font-family: \"Berlin Sans FB\", sans-serif; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
" 	color:white;	\n"
"	background:#1F1F1F;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #2f2f2f;\n"
" 	color:white;	\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/icon/seo.png"), QSize(), QIcon::Normal, QIcon::Off);
        listeressources->setIcon(icon1);
        listeressources->setIconSize(QSize(30, 30));

        sidebar6->addWidget(listeressources);

        ajjj = new QPushButton(verticalLayoutWidget_8);
        ajjj->setObjectName(QStringLiteral("ajjj"));
        ajjj->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #000000;\n"
"	    color: grey;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 12px;\n"
" font-family: \"Berlin Sans FB\", sans-serif; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
" 	color:white;	\n"
"	background:#1F1F1F;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #2f2f2f;\n"
" 	color:white;	\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/icon/ajouter (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        ajjj->setIcon(icon2);
        ajjj->setIconSize(QSize(30, 30));

        sidebar6->addWidget(ajjj);

        modifierButton_2 = new QPushButton(verticalLayoutWidget_8);
        modifierButton_2->setObjectName(QStringLiteral("modifierButton_2"));
        modifierButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #000000;\n"
"	    color: grey;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 12px;\n"
" font-family: \"Berlin Sans FB\", sans-serif; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
" 	color:white;	\n"
"	background:#1F1F1F;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #2f2f2f;\n"
" 	color:white;	\n"
"}"));
        modifierButton_2->setIcon(icon2);
        modifierButton_2->setIconSize(QSize(30, 30));

        sidebar6->addWidget(modifierButton_2);

        calendrierdisp = new QPushButton(verticalLayoutWidget_8);
        calendrierdisp->setObjectName(QStringLiteral("calendrierdisp"));
        calendrierdisp->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #000000;\n"
"	    color: grey;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 12px;\n"
" font-family: \"Berlin Sans FB\", sans-serif; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
" 	color:white;	\n"
"	background:#1F1F1F;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #2f2f2f;\n"
" 	color:white;	\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/icon/calendrier.png"), QSize(), QIcon::Normal, QIcon::Off);
        calendrierdisp->setIcon(icon3);
        calendrierdisp->setIconSize(QSize(30, 30));

        sidebar6->addWidget(calendrierdisp);

        statressources = new QPushButton(verticalLayoutWidget_8);
        statressources->setObjectName(QStringLiteral("statressources"));
        statressources->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #000000;\n"
"	    color: grey;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 12px;\n"
" font-family: \"Berlin Sans FB\", sans-serif; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
" 	color:white;	\n"
"	background:#1F1F1F;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #2f2f2f;\n"
" 	color:white;	\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/icon/statistiques.png"), QSize(), QIcon::Normal, QIcon::Off);
        statressources->setIcon(icon4);
        statressources->setIconSize(QSize(30, 30));

        sidebar6->addWidget(statressources);

        nomapp_4 = new QLabel(StockDialog);
        nomapp_4->setObjectName(QStringLiteral("nomapp_4"));
        nomapp_4->setGeometry(QRect(40, 40, 111, 31));
        nomapp_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icon/appname.png")));
        stackedWidget = new QStackedWidget(StockDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(170, 10, 701, 621));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        tableView = new QTableView(page_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 150, 641, 331));
        label = new QLabel(page_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 271, 41));
        label->setStyleSheet(QStringLiteral("font: 75 20pt \"MS Shell Dlg 2\";"));
        supprimerStock = new QPushButton(page_3);
        supprimerStock->setObjectName(QStringLiteral("supprimerStock"));
        supprimerStock->setGeometry(QRect(40, 530, 93, 28));
        lineEdit_idASupprimer = new QLineEdit(page_3);
        lineEdit_idASupprimer->setObjectName(QStringLiteral("lineEdit_idASupprimer"));
        lineEdit_idASupprimer->setGeometry(QRect(140, 530, 113, 22));
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 60, 93, 28));
        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox_9 = new QGroupBox(page);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(0, 0, 791, 681));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(4);
        sizePolicy.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy);
        groupBox_9->setStyleSheet(QLatin1String("\n"
"    QGroupBox{\n"
"border-radius: 20px; /* Rayon des coins arrondis */ \n"
"   border: 2px solid #F8F8F8;\n"
"    font-family: 'Berlin Sans FB', sans-serif;\n"
"    font-size: 30px;\n"
"  	background-color: #F8F8F8;\n"
"}"));
        gridLayout_9 = new QGridLayout(groupBox_9);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_131 = new QLabel(groupBox_9);
        label_131->setObjectName(QStringLiteral("label_131"));
        label_131->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: 'Berlin Sans FB', sans-serif;\n"
"    font-size: 18px;\n"
"}\n"
""));

        gridLayout_9->addWidget(label_131, 3, 0, 1, 2);

        label_127 = new QLabel(groupBox_9);
        label_127->setObjectName(QStringLiteral("label_127"));
        label_127->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: 'Berlin Sans FB', sans-serif;\n"
"    font-size: 18px;\n"
"}\n"
""));

        gridLayout_9->addWidget(label_127, 2, 0, 1, 1);

        label_132 = new QLabel(groupBox_9);
        label_132->setObjectName(QStringLiteral("label_132"));
        label_132->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: 'Berlin Sans FB', sans-serif;\n"
"    font-size: 18px;\n"
"}\n"
""));

        gridLayout_9->addWidget(label_132, 0, 0, 1, 1);

        seuilMinLineEdit = new QLineEdit(groupBox_9);
        seuilMinLineEdit->setObjectName(QStringLiteral("seuilMinLineEdit"));
        seuilMinLineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 1px solid white;\n"
"    border-radius: 10px;\n"
"    padding: 7px; \n"
"    selection-background-color: #6dae84;\n"
"    font-size: 18px; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #6dae84;\n"
"}\n"
"QlineEdit:hover{\n"
"border: 1px solid #6dae84;\n"
"}"));

        gridLayout_9->addWidget(seuilMinLineEdit, 3, 2, 1, 1);

        quantiteLineEdit = new QLineEdit(groupBox_9);
        quantiteLineEdit->setObjectName(QStringLiteral("quantiteLineEdit"));
        quantiteLineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 1px solid white;\n"
"    border-radius: 10px;\n"
"    padding: 7px; \n"
"    selection-background-color: #6dae84;\n"
"    font-size: 18px; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #6dae84;\n"
"}\n"
"QlineEdit:hover{\n"
"border: 1px solid #6dae84;\n"
"}"));

        gridLayout_9->addWidget(quantiteLineEdit, 2, 2, 1, 1);

        idStockLineEdit = new QLineEdit(groupBox_9);
        idStockLineEdit->setObjectName(QStringLiteral("idStockLineEdit"));
        idStockLineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 1px solid white;\n"
"    border-radius: 10px;\n"
"    padding: 7px; \n"
"    selection-background-color: #6dae84;\n"
"    font-size: 18px; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #6dae84;\n"
"}\n"
"QlineEdit:hover{\n"
"border: 1px solid #6dae84;\n"
"}"));

        gridLayout_9->addWidget(idStockLineEdit, 0, 2, 1, 1);

        cancelButton = new QPushButton(groupBox_9);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    \n"
"	background-color: #FFFFFF;\n"
"	    color: blue;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 20px;\n"
" font-family: \"Berlin Sans FB\", sans-serif; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #EDF1F6;\n"
"    color: grey;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #EDF1F6;\n"
"    color: black;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/icon/bouton-ajouter.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon5);
        cancelButton->setIconSize(QSize(20, 20));

        gridLayout_9->addWidget(cancelButton, 7, 2, 1, 1);

        saveButton = new QPushButton(groupBox_9);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    \n"
"	background-color: #FFFFFF;\n"
"	    color: blue;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 20px;\n"
" font-family: \"Berlin Sans FB\", sans-serif; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #EDF1F6;\n"
"    color: grey;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #EDF1F6;\n"
"    color: black;\n"
"}"));
        saveButton->setIcon(icon5);
        saveButton->setIconSize(QSize(20, 20));

        gridLayout_9->addWidget(saveButton, 7, 0, 1, 2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_10 = new QGroupBox(page_2);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(0, 0, 791, 681));
        sizePolicy.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy);
        groupBox_10->setStyleSheet(QLatin1String("\n"
"    QGroupBox{\n"
"border-radius: 20px; /* Rayon des coins arrondis */ \n"
"   border: 2px solid #F8F8F8;\n"
"    font-family: 'Berlin Sans FB', sans-serif;\n"
"    font-size: 30px;\n"
"  	background-color: #F8F8F8;\n"
"}"));
        gridLayout_10 = new QGridLayout(groupBox_10);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_133 = new QLabel(groupBox_10);
        label_133->setObjectName(QStringLiteral("label_133"));
        label_133->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: 'Berlin Sans FB', sans-serif;\n"
"    font-size: 18px;\n"
"}\n"
""));

        gridLayout_10->addWidget(label_133, 3, 0, 1, 2);

        label_128 = new QLabel(groupBox_10);
        label_128->setObjectName(QStringLiteral("label_128"));
        label_128->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: 'Berlin Sans FB', sans-serif;\n"
"    font-size: 18px;\n"
"}\n"
""));

        gridLayout_10->addWidget(label_128, 2, 0, 1, 1);

        label_134 = new QLabel(groupBox_10);
        label_134->setObjectName(QStringLiteral("label_134"));
        label_134->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: 'Berlin Sans FB', sans-serif;\n"
"    font-size: 18px;\n"
"}\n"
""));

        gridLayout_10->addWidget(label_134, 0, 0, 1, 1);

        seuilMinLineEdit_2 = new QLineEdit(groupBox_10);
        seuilMinLineEdit_2->setObjectName(QStringLiteral("seuilMinLineEdit_2"));
        seuilMinLineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 1px solid white;\n"
"    border-radius: 10px;\n"
"    padding: 7px; \n"
"    selection-background-color: #6dae84;\n"
"    font-size: 18px; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #6dae84;\n"
"}\n"
"QlineEdit:hover{\n"
"border: 1px solid #6dae84;\n"
"}"));

        gridLayout_10->addWidget(seuilMinLineEdit_2, 3, 2, 1, 1);

        quantiteLineEdit_2 = new QLineEdit(groupBox_10);
        quantiteLineEdit_2->setObjectName(QStringLiteral("quantiteLineEdit_2"));
        quantiteLineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 1px solid white;\n"
"    border-radius: 10px;\n"
"    padding: 7px; \n"
"    selection-background-color: #6dae84;\n"
"    font-size: 18px; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #6dae84;\n"
"}\n"
"QlineEdit:hover{\n"
"border: 1px solid #6dae84;\n"
"}"));

        gridLayout_10->addWidget(quantiteLineEdit_2, 2, 2, 1, 1);

        idStockLineEdit_2 = new QLineEdit(groupBox_10);
        idStockLineEdit_2->setObjectName(QStringLiteral("idStockLineEdit_2"));
        idStockLineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 1px solid white;\n"
"    border-radius: 10px;\n"
"    padding: 7px; \n"
"    selection-background-color: #6dae84;\n"
"    font-size: 18px; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #6dae84;\n"
"}\n"
"QlineEdit:hover{\n"
"border: 1px solid #6dae84;\n"
"}"));

        gridLayout_10->addWidget(idStockLineEdit_2, 0, 2, 1, 1);

        cancelButton_2 = new QPushButton(groupBox_10);
        cancelButton_2->setObjectName(QStringLiteral("cancelButton_2"));
        cancelButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    \n"
"	background-color: #FFFFFF;\n"
"	    color: blue;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 20px;\n"
" font-family: \"Berlin Sans FB\", sans-serif; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #EDF1F6;\n"
"    color: grey;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #EDF1F6;\n"
"    color: black;\n"
"}"));
        cancelButton_2->setIcon(icon5);
        cancelButton_2->setIconSize(QSize(20, 20));

        gridLayout_10->addWidget(cancelButton_2, 7, 2, 1, 1);

        saveButton_2 = new QPushButton(groupBox_10);
        saveButton_2->setObjectName(QStringLiteral("saveButton_2"));
        saveButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    \n"
"	background-color: #FFFFFF;\n"
"	    color: blue;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 20px;\n"
" font-family: \"Berlin Sans FB\", sans-serif; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #EDF1F6;\n"
"    color: grey;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #EDF1F6;\n"
"    color: black;\n"
"}"));
        saveButton_2->setIcon(icon5);
        saveButton_2->setIconSize(QSize(20, 20));

        gridLayout_10->addWidget(saveButton_2, 7, 0, 1, 2);

        stackedWidget->addWidget(page_2);

        retranslateUi(StockDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StockDialog);
    } // setupUi

    void retranslateUi(QDialog *StockDialog)
    {
        StockDialog->setWindowTitle(QApplication::translate("StockDialog", "Dialog", Q_NULLPTR));
        fond_4->setText(QString());
        retour_m_ressources->setText(QApplication::translate("StockDialog", " Menu", Q_NULLPTR));
        listeressources->setText(QApplication::translate("StockDialog", "rechercher", Q_NULLPTR));
        ajjj->setText(QApplication::translate("StockDialog", "ajouter", Q_NULLPTR));
        modifierButton_2->setText(QApplication::translate("StockDialog", "modifier", Q_NULLPTR));
        calendrierdisp->setText(QApplication::translate("StockDialog", "Calendrier", Q_NULLPTR));
        statressources->setText(QApplication::translate("StockDialog", "Statistique", Q_NULLPTR));
        nomapp_4->setText(QString());
        label->setText(QApplication::translate("StockDialog", "afficher stock:", Q_NULLPTR));
        supprimerStock->setText(QApplication::translate("StockDialog", "supprimer", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("StockDialog", "refrsh", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        groupBox_9->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        groupBox_9->setTitle(QApplication::translate("StockDialog", "ajouter un stock", Q_NULLPTR));
        label_131->setText(QApplication::translate("StockDialog", "seuil_min", Q_NULLPTR));
        label_127->setText(QApplication::translate("StockDialog", "quantite", Q_NULLPTR));
        label_132->setText(QApplication::translate("StockDialog", "id_stock", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("StockDialog", "cancel", Q_NULLPTR));
        saveButton->setText(QApplication::translate("StockDialog", "save", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        groupBox_10->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        groupBox_10->setTitle(QApplication::translate("StockDialog", "modifier stock", Q_NULLPTR));
        label_133->setText(QApplication::translate("StockDialog", "seuil_min", Q_NULLPTR));
        label_128->setText(QApplication::translate("StockDialog", "quantite", Q_NULLPTR));
        label_134->setText(QApplication::translate("StockDialog", "id_stock", Q_NULLPTR));
        cancelButton_2->setText(QApplication::translate("StockDialog", "cancel", Q_NULLPTR));
        saveButton_2->setText(QApplication::translate("StockDialog", "save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StockDialog: public Ui_StockDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKDIALOG_H
