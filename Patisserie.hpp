//
// Created by Alexis Bironneau on 30/03/2023.
//

#ifndef PROJET_POO_PATISSERIE_HPP
#define PROJET_POO_PATISSERIE_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Gateau.hpp"

#include <vector>
#include "Gateau.hpp"

class Patisserie {
private:
    std::vector<Gateau*> stock_; // Stock de la patisserie
public:
    // Ajoute un nouveau gateau au stock
    void ajouter(Gateau* gateau);

    // Retire un gateau du stock
    void retirer(Gateau* gateau);

    // Affiche le contenu du stock
    void afficher();

    // Permet à un client d'acheter un gateau
    bool acheter(Gateau* gateau, bool& dernier);

    //Permet de savoir si la Patisserie est vide
    bool estVide() {
        return stock_.empty();
    }

    vector<Gateau *> &getStock();
};

#endif //PROJET_POO_PATISSERIE_HPP
