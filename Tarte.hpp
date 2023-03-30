//
// Created by Alexis Bironneau on 30/03/2023.
//

#ifndef PROJET_POO_TARTE_HPP
#define PROJET_POO_TARTE_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Gateau.hpp"

class Tarte : public Gateau {
public:
    string fruit;
    bool meringue;
    bool noisettesGrillees;
    bool amandesGrillees;

    Tarte(string fruit, bool meringue, bool noisettesGrillees, bool amandesGrillees) : Gateau("Tarte") {
        this->fruit = fruit;
        this->meringue = meringue;
        this->noisettesGrillees = noisettesGrillees;
        this->amandesGrillees = amandesGrillees;
    }
};


#endif //PROJET_POO_TARTE_HPP
