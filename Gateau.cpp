//
// Created by Alexis Bironneau on 30/03/2023.
//
#include "Gateau.hpp"


string Gateau::getNom() const {
    return nom;
}

void Gateau::setNom(string nom) {
    this->nom = nom;
}

vector<Ingredient> Gateau::getIngredients() const {
    return ingredients;
}

void Gateau::setIngredients(vector<Ingredient> ingredients) {
    this->ingredients = ingredients;
}
