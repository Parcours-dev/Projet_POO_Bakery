//
// Created by Alexis Bironneau on 30/03/2023.
//
#include "Patisserie.hpp"

void Patisserie::ajouter(Gateau gateau) {
    stock_.push_back(&gateau);
}

void Patisserie::retirer(Gateau* gateau) {
    for (auto it = stock_.begin(); it != stock_.end(); it++) {
        if (*it == gateau) {
            stock_.erase(it);
            break;
        }
    }
}

void Patisserie::afficher() {
    std::cout << "Stock de la patisserie :" << std::endl;
    for (auto gateau : stock_) {
        std::cout << "- " << gateau->getNom() << std::endl;
    }
}

bool Patisserie::acheter(Gateau* gateau, bool& dernier) {
    for (auto it = stock_.begin(); it != stock_.end(); it++) {
        if (*it == gateau) {
            stock_.erase(it);
            dernier = (stock_.size() == 0);
            return true;
        }
    }
    return false;
}

vector<Gateau*>& Patisserie::getStock() {
    return stock_;
}