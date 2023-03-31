//
// Created by Alexis Bironneau on 30/03/2023.
//
#include "Patisserie.hpp"

void Patisserie::ajouter(Gateau gateau) {
    stock_.push_back(gateau);
}

void Patisserie::afficher() {
    std::cout << "Stock de la patisserie :" << std::endl;
    for (size_t i = 0; i < stock_.size(); i++) {
        std::cout << i << ". " << stock_[i].getNom() << std::endl;
    }
}


bool Patisserie::acheter(const Gateau* gateau, bool& dernier) {
    for (auto it = stock_.begin(); it != stock_.end(); it++) {
        if (&(*it) == gateau) {
            stock_.erase(it);
            dernier = (stock_.size() == 0);
            return true;
        }
    }
    return false;
}

const vector<Gateau>& Patisserie::getStock() const {
    return stock_;
}



