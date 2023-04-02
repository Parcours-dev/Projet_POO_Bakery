#ifndef PROJET_POO_INGREDIENT_HPP
#define PROJET_POO_INGREDIENT_HPP

#include <iostream>
#include <string>

using namespace std;

class Ingredient {
public: string nom; // Le nom de l'ingredient
    int quantite; // La quantite de l'ingredient

    Ingredient(string nom, int quantite) { // Constructeur prenant en parametre le nom et la quantite de l'ingredient
        this -> nom = nom;
        this -> quantite = quantite;
    }

    // Les fonctions membres getNom et setNom permettent d'acceder et de modifier le nom de l'ingredient.
    string getNom() const;
    void setNom(string nom);

    // Les fonctions membres getQuantite et setQuantite permettent d'acceder et de modifier la quantite de l'ingredient.
    int getQuantite() const;
    void setQuantite(int quantite);

};

#endif //PROJET_POO_INGREDIENT_HPP