#include "Gateau.hpp"

using namespace std;

// Methode d'acces en lecture pour l'attribut nom
string Gateau::getNom() const {
    return nom;
}

// Methode d'acces en ecriture pour l'attribut nom
void Gateau::setNom(string nom) {
    this -> nom = nom;
}

// Methode d'acces en lecture pour la liste d'ingredients du gateau
vector < Ingredient > Gateau::getIngredients() const {
    return ingredients;
}

// Methode d'acces en ecriture pour la liste d'ingredients du gateau
void Gateau::setIngredients(vector < Ingredient > ingredients) {
    this -> ingredients = ingredients;
}