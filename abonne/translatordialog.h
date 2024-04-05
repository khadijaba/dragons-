#ifndef TRANSLATORDIALOG_H
#define TRANSLATORDIALOG_H
#include <QDialog>
#include "ui_translatordialog.h"

namespace Ui {
    class TranslatorDialog; // Assurez-vous que ce nom correspond exactement à celui défini dans Qt Designer.
}

class TranslatorDialog : public QDialog {
    Q_OBJECT

public:
    explicit TranslatorDialog(QWidget *parent = nullptr);
    ~TranslatorDialog(); // Déclarez un destructeur.

private slots:
    void on_translateButton_clicked(); // Slot pour gérer le clic sur le bouton de traduction

private:
    Ui::TranslatorDialog *ui; // Corrigez la casse pour correspondre à la déclaration dans le namespace Ui.
};

#endif // TRANSLATORDIALOG_H
