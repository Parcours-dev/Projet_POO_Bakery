//
// Created by Alexis Bironneau on 30/03/2023.
//

#ifndef PROJET_POO_PATISSERIE_HPP
#define PROJET_POO_PATISSERIE_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Gateau.hpp"
#include <vector>
#include "Gateau.hpp"
#include "Commande.hpp"

class Patisserie {
private: vector < Gateau > stock_; // Stock de la patisserie
    vector < Commande > commandes_; // Liste des commandes enregistrees

public:

    // Ajoute un nouveau gateau au stock
    void ajouter(Gateau gateau);

    // Retire un gateau du stock
    void retirer(Gateau * gateau);

    // Affiche le contenu du stock
    void afficher();

    // Permet à un client d'acheter un gateau
    bool acheter(const Gateau * gateau, bool & dernier);

    //Permet de savoir si la Patisserie est vide
    bool estVide() {
        return stock_.empty();
    }

    const vector < Gateau > & getStock() const;

    // Enregistre une commande
    void enregistrerCommande(Commande commande) {
        commandes_.push_back(commande);
    }

    void afficherCommandes() {
        for (const Commande & commande: commandes_) {
            int numCommande = 1;
            cout << "Commande numéro : " << numCommande << endl;
            numCommande++;
            cout << "Nom client : " << commande.getNomClient() << endl;
            cout << "Telephone : " << commande.getTelephone() << endl;
            cout << "Gateaux :" << endl;
            for (const Gateau * gateau: commande.getGateaux()) {
                cout << "  - " << gateau -> getNom() << endl;
            }
            cout << endl;
        }
    }

    void supprimerCommande() {
        // afficher la liste des commandes
        cout << "Voici la liste des commandes : " << endl;
        afficherCommandes();

        // demander à l'utilisateur le numero de la commande à supprimer
        int numero;
        cout << "Entrez le numero de la commande a supprimer : ";
        cin >> numero;

        // supprimer la commande si le numero est valide
        if (numero >= 1 && numero <= commandes_.size()) {
            commandes_.erase(commandes_.begin() + numero - 1);
            cout << "La commande numero " << numero << " a ete supprimee avec succes." << endl;
        } else {
            cout << "Le numero de commande saisi est invalide." << endl;
        }
    }

    // Ajoute une nouvelle commande
    void ajouterCommande(Patisserie & patisserie) {
        string nomClient, telephone;
        vector < Gateau * > gateauxCommande;

        cout << "Nom du client : ";
        cin >> nomClient;

        cout << "Numero de telephone : ";
        cin >> telephone;

        cout << "Liste des gateaux disponibles : " << endl;
        const vector < Gateau > & stock = patisserie.getStock();
        for (int i = 0; i < stock.size(); i++) {
            cout << i + 1 << ". " << stock[i].getNom() << endl;
        }

        int choix;
        do {
            cout << "Choisissez le numero du gateau a ajouter (0 pour terminer) : ";
            cin >> choix;
            if (choix >= 1 && choix <= stock.size()) {
                gateauxCommande.push_back(const_cast < Gateau * > ( & stock[choix - 1]));
            }
        } while (choix != 0);

        Commande commande(nomClient, telephone, gateauxCommande);
        patisserie.enregistrerCommande(commande);
        cout << "Commande enregistree." << endl;
    }

};

#endif //PROJET_POO_PATISSERIE_HPP