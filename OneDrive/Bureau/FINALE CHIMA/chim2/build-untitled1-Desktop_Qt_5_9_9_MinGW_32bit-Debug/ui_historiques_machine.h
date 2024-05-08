/********************************************************************************
** Form generated from reading UI file 'historiques_machine.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIQUES_MACHINE_H
#define UI_HISTORIQUES_MACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog
{
public:
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName(QStringLiteral("dialog"));
        dialog->resize(599, 427);
        dialog->setStyleSheet(QLatin1String("#groupBox{\n"
"	\n"
"	background-color: rgb(17, 204, 255);\n"
"}"));
        label = new QLabel(dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 341, 31));
        label->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:#341763;\n"
"color:#4a5bcf;\n"
"font-size:20px;\n"
"border-radius: 17px;"));
        scrollArea = new QScrollArea(dialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(9, 100, 581, 301));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 579, 299));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(dialog);

        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QDialog *dialog)
    {
        dialog->setWindowTitle(QApplication::translate("dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("dialog", "les dates d entretien de ressources :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIQUES_MACHINE_H
