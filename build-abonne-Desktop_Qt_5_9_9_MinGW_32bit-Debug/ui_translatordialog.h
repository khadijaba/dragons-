/********************************************************************************
** Form generated from reading UI file 'translatordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSLATORDIALOG_H
#define UI_TRANSLATORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_TranslatorDialog
{
public:
    QLabel *label;
    QTextEdit *sourceTextEdit;
    QTextEdit *targetTextEdit;
    QPushButton *translateButton;
    QLabel *label_6;
    QComboBox *sourceLanguageComboBox;
    QComboBox *targetLanguageComboBox;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *TranslatorDialog)
    {
        if (TranslatorDialog->objectName().isEmpty())
            TranslatorDialog->setObjectName(QStringLiteral("TranslatorDialog"));
        TranslatorDialog->resize(918, 506);
        label = new QLabel(TranslatorDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-5, -30, 941, 541));
        label->setPixmap(QPixmap(QString::fromUtf8("../../doujzz.jpg")));
        label->setScaledContents(true);
        sourceTextEdit = new QTextEdit(TranslatorDialog);
        sourceTextEdit->setObjectName(QStringLiteral("sourceTextEdit"));
        sourceTextEdit->setGeometry(QRect(10, 140, 301, 321));
        targetTextEdit = new QTextEdit(TranslatorDialog);
        targetTextEdit->setObjectName(QStringLiteral("targetTextEdit"));
        targetTextEdit->setGeometry(QRect(490, 140, 331, 311));
        translateButton = new QPushButton(TranslatorDialog);
        translateButton->setObjectName(QStringLiteral("translateButton"));
        translateButton->setGeometry(QRect(370, 280, 93, 28));
        label_6 = new QLabel(TranslatorDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(390, 10, 431, 81));
        label_6->setStyleSheet(QLatin1String("font: 81 16pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);"));
        sourceLanguageComboBox = new QComboBox(TranslatorDialog);
        sourceLanguageComboBox->setObjectName(QStringLiteral("sourceLanguageComboBox"));
        sourceLanguageComboBox->setGeometry(QRect(140, 110, 101, 22));
        targetLanguageComboBox = new QComboBox(TranslatorDialog);
        targetLanguageComboBox->setObjectName(QStringLiteral("targetLanguageComboBox"));
        targetLanguageComboBox->setGeometry(QRect(630, 110, 101, 22));
        label_2 = new QLabel(TranslatorDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 121, 20));
        label_3 = new QLabel(TranslatorDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(520, 110, 121, 20));

        retranslateUi(TranslatorDialog);

        QMetaObject::connectSlotsByName(TranslatorDialog);
    } // setupUi

    void retranslateUi(QDialog *TranslatorDialog)
    {
        TranslatorDialog->setWindowTitle(QApplication::translate("TranslatorDialog", "Dialog", Q_NULLPTR));
        label->setText(QString());
        translateButton->setText(QApplication::translate("TranslatorDialog", "Traduire", Q_NULLPTR));
        label_6->setText(QApplication::translate("TranslatorDialog", "traduction:", Q_NULLPTR));
        label_2->setText(QApplication::translate("TranslatorDialog", "choisir la langue", Q_NULLPTR));
        label_3->setText(QApplication::translate("TranslatorDialog", "choisir la langue", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TranslatorDialog: public Ui_TranslatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSLATORDIALOG_H
