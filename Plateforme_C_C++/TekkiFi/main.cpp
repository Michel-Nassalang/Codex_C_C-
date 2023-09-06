// Importation des packages ---------------
#include "tekkifi.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
// -------------------

// Fonction principale qui lance l'interface graphique --------------
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "TekkiFi_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    TekkiFi w;
    w.show();
    return a.exec();
}
// -------------------
