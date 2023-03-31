//
// Created by Alexis Bironneau on 31/03/2023.
//

#ifndef PROJET_POO_COMMANDE_HPP
#define PROJET_POO_COMMANDE_HPP

#include <string>
#include "Gateau.hpp"

using namespace std;

class Commande {
private:
    string nomClient_;
    string telephone_;
    vector<Gateau*> gateaux_;
    // autres attributs necessaires pour la commande

public:
    Commande(string nomClient, string telephone, vector<Gateau*> gateaux) :
            nomClient_(nomClient), telephone_(telephone), gateaux_(gateaux) {
        // initialisation des autres attributs necessaires
    }

    const string &getNomClient() const {
        return nomClient_;
    }

    const string &getTelephone() const {
        return telephone_;
    }

    const vector<Gateau *> &getGateaux() const {
        return gateaux_;
    }

    void setNomClient(const string &nomClient) {
        nomClient_ = nomClient;
    }

    void setTelephone(const string &telephone) {
        telephone_ = telephone;
    }

    void setGateaux(const vector<Gateau *> &gateaux) {
        gateaux_ = gateaux;
    }

};

#endif //PROJET_POO_COMMANDE_HPP
