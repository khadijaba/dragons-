#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <QString>

class Translator {
public:
    Translator();
    QString translate(const QString& text, const QString& fromLang, const QString& toLang);
};

#endif // TRANSLATOR_H
