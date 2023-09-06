// Importation des packages  -----------------
#include "tekkifi.h"
#include "ui_tekkifi.h"
// ---------------------

// Classe principale avec l'utilisation du package QT
TekkiFi::TekkiFi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TekkiFi)
{
    ui->setupUi(this);
    // La fonction connect permet de gérer la fonction qui sera executée par l'appui du bouton pushFacture
    connect(ui->pushFacture,&QPushButton::clicked,this,&TekkiFi::facturer);
}

// Fonction destructeur de la classe principale
TekkiFi::~TekkiFi()
{
    delete ui;
}

// Fonction facturer à executer par le bouton facturer
void TekkiFi::facturer(void){

}
// Fonction pour faire le devis à executer par le bouton délivrer devis
void faireDevis(void){

}
// Fonction pour faire le bon à executer par le bouton délivrer bons
void faireBons(std::string typeb){

}
// Fonction pour imprimer à executer par le bouton imprimer
void imprimer(void){

}
// Fonction pour rechercher un client par nom
void searchByNom(void){

}
// Fonction pour rechercher un client par telephone
void searchByTel(void){

}
