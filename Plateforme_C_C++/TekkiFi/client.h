// Importation des packages définition -----------------------
#ifndef CLIENT_H
#define CLIENT_H

#include <string>
// ---------------------
// Classe Client et attributs de l'entité client -------------------
class Client
{
public:
    Client(std::string prenom,std::string nom, std::string adresse, std::string telephone, std::string portefeuille);
private:
    std::string prenom;
    std::string nom;
    std::string adresse;
    std::string telephone;
    std::string portefeuille;
};

#endif // CLIENT_H
