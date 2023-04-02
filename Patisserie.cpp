#include "Patisserie.hpp"

using namespace std;

// Ajoute un gateau au stock de la patisserie
void Patisserie::ajouter(Gateau gateau) {
    stock_.push_back(gateau);
}

// Affiche le stock de la patisserie avec le nom de chaque gateau
void Patisserie::afficher() {
    cout << "Stock de la patisserie :" << endl;
    for (size_t i = 0; i < stock_.size(); i++) {
        cout << i << ". " << stock_[i].getNom() << endl;
    }
}

// Achete un gateau en le supprimant du stock de la patisserie et renvoie true si l'achat a reussi, sinon false
bool Patisserie::acheter(const Gateau * gateau, bool & dernier) {
    for (auto it = stock_.begin(); it != stock_.end(); it++) {
        if ( & ( * it) == gateau) {
            stock_.erase(it);
            dernier = (stock_.size() == 0);
            return true;
        }
    }
    return false;
}

// Renvoie le stock de la patisserie
const vector < Gateau > & Patisserie::getStock() const {
    return stock_;
}