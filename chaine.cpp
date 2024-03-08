#include "chaine.h"



Chaine::Chaine() {}

Chaine::Chaine(int id_chaine, QString satellite, QString nom, int frequence, int polarisation, int sr, QString fec, QString type, QString qualite)
    : id_chaine(id_chaine), satellite(satellite), nom(nom), frequence(frequence), polarisation(polarisation), sr(sr), fec(fec), type(type), qualite(qualite) {}

void Chaine::setId_chaine(int value)
{
    id_chaine = value;
}

void Chaine::setSatellite(const QString &value)
{
    satellite = value;
}

void Chaine::setNom(const QString &value)
{
    nom = value;
}

void Chaine::setFrequence(int value)
{
    frequence = value;
}

void Chaine::setPolarisation(int value)
{
    polarisation = value;
}

void Chaine::setSr(int value)
{
    sr = value;
}

void Chaine::setFec(const QString &value)
{
    fec = value;
}

void Chaine::setType(const QString &value)
{
    type = value;
}

void Chaine::setQualite(const QString &value)
{
    qualite = value;
}

int Chaine::getId_chaine() const
{
    return id_chaine;
}

QString Chaine::getSatellite() const
{
    return satellite;
}

QString Chaine::getNom() const
{
    return nom;
}

int Chaine::getFrequence() const
{
    return frequence;
}

int Chaine::getPolarisation() const
{
    return polarisation;
}

int Chaine::getSr() const
{
    return sr;
}

QString Chaine::getFec() const
{
    return fec;
}

QString Chaine::getType() const
{
    return type;
}

QString Chaine::getQualite() const
{
    return qualite;
}

bool Chaine::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO chaines (id_chaine, satellite, nom, frequence, polarisation, sr, fec, type, qualite) "
                  "VALUES (:id_chaine, :satellite, :nom, :frequence, :polarisation, :sr, :fec, :type, :qualite)");

    query.bindValue(":id_chaine", id_chaine);
    query.bindValue(":satellite", satellite);
    query.bindValue(":nom", nom);
    query.bindValue(":frequence", frequence);
    query.bindValue(":polarisation", polarisation);
    query.bindValue(":sr", sr);
    query.bindValue(":fec", fec);
    query.bindValue(":type", type);
    query.bindValue(":qualite", qualite);

    return query.exec();
}

QSqlQueryModel *Chaine::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM CHAINES");

    return model;
}

bool Chaine::supprimer(int id_chaine)
{
    QSqlQuery query;
    query.prepare("DELETE FROM chaines WHERE id_chaine = :id_chaine");
    query.bindValue(":id_chaine", id_chaine);
    return query.exec();
}

bool Chaine::modifier(int id_chaine)
{
    QSqlQuery query;

    query.prepare("UPDATE chaines SET satellite = :satellite, frequence = :frequence, polarisation = :polarisation, sr = :sr, fec = :fec, type = :type, qualite = :qualite WHERE id_chaine=:id_chaine");

    query.bindValue(":id_chaine", id_chaine);
    query.bindValue(":satellite", satellite);
    query.bindValue(":nom", nom);
    query.bindValue(":frequence", frequence);
    query.bindValue(":polarisation", polarisation);
    query.bindValue(":sr", sr);
    query.bindValue(":fec", fec);
    query.bindValue(":type", type);
    query.bindValue(":qualite", qualite);

    return query.exec();
}
QSqlQueryModel* Chaine::recherche(QString id_chaine)
{
    QSqlQuery query;
    QSqlQueryModel* model = new QSqlQueryModel();
    query.prepare("SELECT * FROM CHAINES WHERE id_chaine = :id_chaine");
    query.bindValue(":id_chaine", id_chaine);
    query.exec();
    model->setQuery(query);
    return model;
}
QSqlQueryModel* Chaine::tri()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM CHAINES ORDER BY id_chaine ASC");
    return model;
}
bool Chaine::importer_pdf(QPrinter &printer)
{
    QTextDocument document;
    QTextCursor cursor(&document);
    QFont font("arial", 16);
    document.setDefaultFont(font);

    QSqlQuery query("SELECT * FROM CHAINES");
    while (query.next())
    {
        QString id = query.value("id_chaine").toString();
        QString sr = query.value("sr").toString();
        QString type = query.value("type").toString();
        QString frequence = query.value("frequence").toString();
        QString nom = query.value("nom").toString();
        QString satellite = query.value("satellite").toString();
        QString polarisation = query.value("polarisation").toString();
        QString fec = query.value("fec").toString();
        QString qualite = query.value("qualite").toString();

        cursor.insertText(" ID: " + id);
        cursor.insertBlock();
        cursor.insertText(" SR: " + sr);
        cursor.insertBlock();
        cursor.insertText("TYPE: " + type);
        cursor.insertBlock();
        cursor.insertText("FREQUENCE: " + frequence);
        cursor.insertBlock();
        cursor.insertText("NOM: " + nom);
        cursor.insertBlock();
        cursor.insertText("SATELLITE: " + satellite);
        cursor.insertBlock();
        cursor.insertText("POLARISATION: " + polarisation);
        cursor.insertBlock();
        cursor.insertText("QUALITE: " + qualite);
        cursor.insertBlock();
        cursor.insertText("FEC: " + fec);
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        }
        if (document.isEmpty()) {
                qDebug() << "The document is empty. No data to save to PDF.";
                return false;
            } else {
                document.print(&printer);
                qDebug() << "Printing the PDF document is done.";
                return true;
            }


}
QtCharts::QChartView* Chaine::stats()
{

    QSqlQuery query("SELECT type, COUNT(*) as typeCount FROM CHAINES GROUP BY type ORDER BY typeCount DESC");

    QBarSeries *series = new QBarSeries;
    QChart *chart = new QChart;
    chart->setTitle("Comparaison des types de chaînes");

    int maxCount = 0;

    while (query.next()) {
        QString type = query.value("type").toString();
        int typeCount = query.value("typeCount").toInt();

        qDebug() << "Type: " << type << " Type Count: " << typeCount;

        QBarSet *barSet = new QBarSet(type);
        *barSet << typeCount;
        series->append(barSet);

        // Mise à jour du maximum
        if (typeCount > maxCount) {
            maxCount = typeCount;
        }
    }

    QBarCategoryAxis *axisX = new QBarCategoryAxis;
    axisX->setTitleText("Type de chaîne");
    chart->setAxisX(axisX, series);

    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(0, maxCount);
    chart->setAxisY(axisY);
    axisY->setTitleText("Nombre de chaînes");

    chart->addSeries(series);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    return chartView;

}




