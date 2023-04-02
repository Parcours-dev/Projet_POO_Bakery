#ifndef PROJET_POO_GATEAU_HPP
#define PROJET_POO_GATEAU_HPP

#include <iostream> // Inclusion de la bibliotheque pour les entrees/sorties
#include <string> // Inclusion de la bibliotheque pour les cha?nes de caracteres
#include <vector> // Inclusion de la bibliotheque pour les vecteurs
#include "Ingredient.hpp" // Inclusion du fichier d'en-tete pour la classe Ingredient

using namespace std;

class Gateau {
public: string nom; // Attribut public pour le nom du gateau
    vector < Ingredient > ingredients; // Attribut public pour la liste d'ingredients du gateau

    Gateau(string nom) { // Constructeur de la classe Gateau
        this -> nom = nom;
    }

    void ajouterIngredient(Ingredient ingredient) { // Methode pour ajouter un ingredient ? la liste d'ingredients
        ingredients.push_back(ingredient);
    }

    void afficherIngredients() { // Methode pour afficher la liste d'ingredients du gateau
        cout << "Les ingredients pour le gateau " << nom << " sont :" << endl;
        for (auto ingredient: ingredients) {
            cout << "- " << ingredient.quantite << "g de " << ingredient.nom << endl;
        }
    }

    string getNom() const; // Methode d'acces en lecture pour l'attribut nom

    void setNom(string nom); // Methode d'acces en ecriture pour l'attribut nom

    vector < Ingredient > getIngredients() const; // Methode d'acces en lecture pour la liste d'ingredients du gateau

    void setIngredients(vector < Ingredient > ingredients); // Methode d'acces en ecriture pour la liste d'ingredients du gateau

};

#endif //PROJET_POO_GATEAU_HPP