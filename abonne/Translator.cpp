#include "translator.h"

Translator::Translator() {
    // Ici, vous pouvez initialiser les membres de votre classe si nécessaire.
    // Pour l'exemple actuel, le constructeur est laissé vide.
}

QString Translator::translate(const QString& text, const QString& fromLang, const QString& toLang) {
    Q_UNUSED(text);
    Q_UNUSED(fromLang);
    Q_UNUSED(toLang);
    // Retourner une chaîne fixe pour le test
    return "Texte traduit fixe pour le test.";
}
