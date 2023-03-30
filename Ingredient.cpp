//
// Created by Alexis Bironneau on 30/03/2023.
//

#include "Ingredient.hpp"
using namespace std;

string Ingredient::getNom() const {
    return nom;
}

void Ingredient::setNom(string nom) {
    this->nom = nom;
}

int Ingredient::getQuantite() const {
    return quantite;
}

void Ingredient::setQuantite(int quantite) {
    this->quantite = quantite;
}
