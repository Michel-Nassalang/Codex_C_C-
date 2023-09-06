// Importation des packages -----------------------
#ifndef TEKKIFI_H
#define TEKKIFI_H

#include "client.h"
#include <QMainWindow>

//-------------------------

// Déclaration de la fonction principale du projet
QT_BEGIN_NAMESPACE
namespace Ui { class TekkiFi; }
QT_END_NAMESPACE

class TekkiFi : public QMainWindow
{
    Q_OBJECT

    // Déclaration des fonctions publiques dans le projet
    // Fonctions s'executant dans les boutons du projet
public:
    TekkiFi(QWidget *parent = nullptr);
    ~TekkiFi();
    void facturer(void);
    void faireDevis(void);
    void faireBons(std::string typeb);
    Client creerClient(std::string prenom,std::string nom, std::string adresse, std::string tel, std::string pf);
    Client suppClient(void);
    Client modifClient(std::string adresse, std::string tel, std::string pf);
    void imprimer(void);
    void searchByNom(void);
    void searchByTel(void);

    // Déclaration des fonctions et variables privées dans le projet
private:
    Ui::TekkiFi *ui;
    int montant;

};
#endif // TEKKIFI_H
