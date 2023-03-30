//
// Created by Alexis Bironneau on 30/03/2023.
//

#ifndef PROJET_POO_INGREDIENT_HPP
#define PROJET_POO_INGREDIENT_HPP

#include <iostream>
#include <string>


using namespace std;

class Ingredient {
public:
    string nom;
    int quantite;

    Ingredient(string nom, int quantite) {
        this->nom = nom;
        this->quantite = quantite;
    }

    string getNom() const;

    void setNom(string nom);

    int getQuantite() const;

    void setQuantite(int quantite);
};
#endif //PROJET_POO_INGREDIENT_HPP
