//
// Created by Alexis Bironneau on 30/03/2023.
//

#ifndef PROJET_POO_CHOU_HPP
#define PROJET_POO_CHOU_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Gateau.hpp"

class Chou : public Gateau {
public:
    string creme;
    bool chantilly;
    bool noisettesGrillees;
    bool amandesGrillees;

    Chou(string creme, bool chantilly, bool noisettesGrillees, bool amandesGrillees) : Gateau("Chou") {
        this->creme = creme;
        this->chantilly = chantilly;
        this->noisettesGrillees = noisettesGrillees;
        this->amandesGrillees = amandesGrillees;
    }
};

#endif //PROJET_POO_CHOU_HPP
