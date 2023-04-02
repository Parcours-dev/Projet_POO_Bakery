// Definition de la classe Commande

#ifndef PROJET_POO_COMMANDE_HPP
#define PROJET_POO_COMMANDE_HPP

#include <string> // Inclusion de la bibliotheque pour les cha?nes de caracteres
#include "Gateau.hpp" // Inclusion du fichier d'en-tete pour la classe Gateau
#include <vector> // Inclusion de la bibliotheque pour les vecteurs

using namespace std; // Directive pour faciliter l'utilisation des noms de la bibliotheque standard

class Commande {
private:
    string nomClient_; // Attribut prive pour le nom du client
    string telephone_; // Attribut prive pour le numero de telephone du client
    vector<Gateau*> gateaux_; // Attribut prive pour les gateaux commandes, stockes dans un vecteur de pointeurs de Gateau


public:
    // Constructeur de la classe Commande prenant en parametre le nom du client, son numero de telephone et les gateaux commandes
    Commande(string nomClient, string telephone, vector<Gateau*> gateaux) :
            nomClient_(nomClient), telephone_(telephone), gateaux_(gateaux) {

    }

    // Methode d'acces en lecture pour l'attribut nomClient_
    const string &getNomClient() const {
        return nomClient_;
    }

    // Methode d'acces en lecture pour l'attribut telephone_
    const string &getTelephone() const {
        return telephone_;
    }

    // Methode d'acces en lecture pour l'attribut gateaux_
    const vector<Gateau *> &getGateaux() const {
        return gateaux_;
    }

    // Methode d'acces en ecriture pour l'attribut nomClient_
    void setNomClient(const string &nomClient) {
        nomClient_ = nomClient;
    }

    // Methode d'acces en ecriture pour l'attribut telephone_
    void setTelephone(const string &telephone) {
        telephone_ = telephone;
    }

    // Methode d'acces en ecriture pour l'attribut gateaux_
    void setGateaux(const vector<Gateau *> &gateaux) {
        gateaux_ = gateaux;
    }

};

#endif //PROJET_POO_COMMANDE_HPP
