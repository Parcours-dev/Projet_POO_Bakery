#include "Ingredient.hpp" // Inclusion du header file pour la classe Ingredient

using namespace std;

string Ingredient::getNom() const { // Definition de la methode getNom() qui retourne le nom de l'ingredient
    return nom;
}

void Ingredient::setNom(string nom) { // Definition de la methode setNom() qui permet de modifier le nom de l'ingredient
    this -> nom = nom;
}

int Ingredient::getQuantite() const { // Definition de la methode getQuantite() qui retourne la quantite de l'ingredient
    return quantite;
}

void Ingredient::setQuantite(int quantite) { // Definition de la methode setQuantite() qui permet de modifier la quantite de l'ingredient
    this -> quantite = quantite;
}