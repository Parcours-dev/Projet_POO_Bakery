//
// Created by Alexis Bironneau on 30/03/2023.
//

#ifndef PROJET_POO_GATEAU_HPP
#define PROJET_POO_GATEAU_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Ingredient.hpp"

class Gateau {
public:
    string nom;
    vector<Ingredient> ingredients;

    Gateau(string nom) {
        this->nom = nom;
    }

    void ajouterIngredient(Ingredient ingredient) {
        ingredients.push_back(ingredient);
    }

    void afficherIngredients() {
        cout << "Les ingredients pour le gateau " << nom << " sont :" << endl;
        for (auto ingredient : ingredients) {
            cout << "- " << ingredient.quantite << "g de " << ingredient.nom << endl;
        }
    }

    string getNom() const;

    void setNom(string nom);

    vector<Ingredient> getIngredients() const;

    void setIngredients(vector<Ingredient> ingredients);

};


#endif //PROJET_POO_GATEAU_HPP