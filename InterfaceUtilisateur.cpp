// Created by Alexis Bironneau on 30/03/2023.
//
#include <iostream>
#include <string>
#include "Patisserie.hpp"
#include "Chou.hpp"
#include "Tarte.hpp"

using namespace std;

bool estEntierValide(string s) {
    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    Patisserie patisserie;
    int choix = 0;

    int qtCremeVanille = 50;
    int qtCremeChocolat = 50;
    int qtChantilly = 50;

    int qtPommes = 50;
    int qtAbricots = 50;
    int qtMeringue = 50;

    int qtNoisetteTarte = 50;
    int qtAmandesGrilleesTarte = 50;
    int qtNoisetteChou = 50;
    int qtAmandesGrilleesChou = 50;
/*
    // Creation des ingredients
    cout << "Avant toute chose, nous devons definir les quantites par gateau (Tout est en grammes)" << endl;
    cout << "Quelle est la quantite de Creme Vanille par chou :" << endl;
    cin >> qtCremeVanille;

    cout << "Quelle est la quantite de Creme Chocolat par chou :" << endl;
    cin >> qtCremeChocolat;

    cout << "Quelle est la quantite de Chantilly par chou :" << endl;
    cin >> qtChantilly;

    cout << "Quelle est la quantite de Noisettes par chou :" << endl;
    cin >> qtNoisetteChou;

    cout << "Quelle est la quantite d'Amandes Grillees' par chou :" << endl;
    cin >> qtAmandesGrilleesChou;

    cout << "Maintenant pour une tarte, nous devons definir les quantites par gateau (Tout est en grammes)" << endl;
    cout << "Quelle est la quantite de Pommes par tarte :" << endl;
    cin >> qtPommes;

    cout << "Quelle est la quantite d'Abricots par tarte :" << endl;
    cin >> qtAbricots;

    cout << "Quelle est la quantite de meringue par tarte :" << endl;
    cin >> qtMeringue;

    cout << "Quelle est la quantite de Noisettes par tarte :" << endl;
    cin >> qtNoisetteTarte;

    cout << "Quelle est la quantite d'Amandes Grillees' par tarte :" << endl;
    cin >> qtAmandesGrilleesTarte;

    */
    while (true) {

        cout << "----------------------------------------" << endl;
        cout << "" << endl;
        cout << "Bienvenue dans notre patisserie !" << endl;
        cout << "Que voulez-vous faire ?" << endl;
        cout << "1. Creer un gateau" << endl;
        cout << "2. Afficher le contenu de la patisserie" << endl;
        cout << "3. Acheter un gateau" << endl;
        cout << "4. Espace Commande" << endl;
        cout << "5. Quitter" << endl;
        cin >> choix;

        switch (choix) {
            case 1: {
                cout << "Quel type de gateau voulez-vous creer ?" << endl;
                cout << "1. Chou" << endl;
                cout << "2. Tarte" << endl;
                int type = 0;
                cin >> type;

                if (type == 1) {

                    Ingredient cremeVanille("Creme Vanille", qtCremeVanille);
                    Ingredient cremeChocolat("Creme Chocolat", qtCremeChocolat);
                    Ingredient chantilly("Chantilly", qtChantilly);
                    Ingredient noisettes("Noisettes", qtNoisetteChou);
                    Ingredient amandesGrillees("Amandes Grillees", qtAmandesGrilleesChou);

                    string choixCreme;
                    string choixChantilly;
                    string choixNoisettes;
                    string choixAmandesGrillee;
                    string nomChou;



                    cout << "Saisissez le nom du Chou :" << endl;
                    cin >> nomChou;
                    Gateau chou(nomChou);

                    cout << "Saisissez les ingredients du chou :" << endl;

                    bool validation = false;
                    while(!validation){
                        cout << "Type de creme (Vanille (1) ou Chocolat (2)) : ";
                        cin >> choixCreme;
                        if(choixCreme == "1" ){
                            chou.ajouterIngredient(cremeVanille);
                            validation = true;
                        } else if (choixCreme == "2"){
                            chou.ajouterIngredient(cremeChocolat);
                            validation = true;
                        } else {
                        cout << "Erreur dans le choix de la creme !" << endl;
                        }
                    }
                    validation = false;
                    while(!validation){
                        cout << "Presence de Chantilly ? (1 = Oui / 0 = Non) :" << endl;
                        cin >> choixChantilly;
                        if(choixChantilly == "1" ){
                            chou.ajouterIngredient(chantilly);
                            validation = true; 
                        } else if (choixChantilly == "0"){
                            validation = true;
                        } else {
                            cout << "Erreur dans la saisie !" << endl;
                        }
                    }

                    validation = false;
                    while(!validation){
                        cout << "Presence de Noisettes ? (1 = Oui / 0 = Non) :" << endl;
                        cin >> choixChantilly;
                        if(choixChantilly == "1" ){
                            chou.ajouterIngredient(noisettes);
                            validation = true; 
                        } else if (choixChantilly == "0"){
                            validation = true;
                        } else {
                            cout << "Erreur dans la saisie !" << endl;
                        }
                    }
    
                    validation = false;
                    while(!validation){
                        cout << "Presence d'Amandes grillees ? (1 = Oui / 0 = Non) :" << endl;
                        cin >> choixChantilly;
                        if(choixChantilly == "1" ){
                            chou.ajouterIngredient(amandesGrillees);
                            validation = true; 
                        } else if (choixChantilly == "0"){
                            validation = true;
                        } else {
                            cout << "Erreur dans la saisie !" << endl;
                        }
                    }

                    validation = false;
                    string nbGateau;
                    while(!validation){
                        cout << "Combien de Chou voulez vous mettre dans votre Patisserie ?" << endl;
                        cin >> nbGateau;
                        if (!estEntierValide(nbGateau)){
                            cout << "Erreur dans la saisie !" << endl;
                            continue;
                        }
                        int valeurGateau= stoi(nbGateau);
                        if (valeurGateau > 0){
                            validation = true;
                        } else {
                            cout << "Il me faut au minimum 1 gateau, soit malin !" << endl;
                        }

                        for(int i = 0; i < valeurGateau; i++) {
                            patisserie.ajouter(chou);
                        }

                    }
                    chou.afficherIngredients();

                    int nbGateauChou;
                    cout << "Combien de chou voulez vous mettre dans votre Patisserie ?" << endl;
                    cin >> nbGateauChou;

                    for(int i = 0; i < nbGateauChou; i++) {
                        patisserie.ajouter(chou);
                    }

                    chou.afficherIngredients();


                } else if (type == 2) {

                    Ingredient fruitPomme("Pomme", qtPommes);
                    Ingredient fruitAbricot("Abricot", qtAbricots);
                    Ingredient meringue("Mereingue", qtMeringue);
                    Ingredient noisettes("Noisettes", qtNoisetteTarte);
                    Ingredient amandesGrillees("Amandes Grillees", qtAmandesGrilleesTarte);

                    string choixFruit;
                    string choixMereingue;
                    string choixNoisettes;
                    string choixAmandesGrillee;
                    string nomTarte;

                    cout << "Saisissez le nom de la Tarte :" << endl;
                    cin >> nomTarte;
                    Gateau tarte(nomTarte);

                    cout << "Saisissez les ingredients du chou :" << endl;
                    cout << "Base de fruit (Pomme (1) ou Abricot (2)) : ";
                    cin >> choixFruit;
                    if(choixFruit == "1" ){
                        tarte.ajouterIngredient(fruitPomme);
                    }else if (choixFruit == "2"){
                        tarte.ajouterIngredient(fruitAbricot);
                    }else {
                        cout << "Erreur dans le choix de la creme !";
                    }

                    bool validation = false;
                    while(!validation){
                        cout << "Presence de Meringue ? (1 = Oui / 0 = Non) :" << endl;
                        cin >> choixMereingue;
                        if(choixMereingue == "1" ){
                            tarte.ajouterIngredient(meringue);
                            validation = true; 
                        } else if (choixMereingue == "0"){
                            validation = true;
                        } else {
                            cout << "Erreur dans la saisie !" << endl;
                        }
                    }

                    validation = false;
                    while(!validation){
                        cout << "Presence de Noisettes ? (1 = Oui / 0 = Non) :" << endl;
                        cin >> choixNoisettes;
                        if(choixNoisettes == "1" ){
                            tarte.ajouterIngredient(noisettes);
                            validation = true; 
                        } else if (choixNoisettes == "0"){
                            validation = true;
                        } else {
                            cout << "Erreur dans la saisie !" << endl;
                        }
                    }
                    validation = false;
                    while(!validation){
                        cout << "Presence d'Amandes grillees ? (1 = Oui / 0 = Non) :" << endl;
                        cin >> choixAmandesGrillee;
                        if(choixAmandesGrillee == "1" ){
                            tarte.ajouterIngredient(amandesGrillees);
                            validation = true; 
                        } else if (choixAmandesGrillee == "0"){
                            validation = true;
                        } else {
                            cout << "Erreur dans la saisie !" << endl;
                        }
                    }

                    validation = false;
                    string nbGateau;
                    while(!validation){
                        cout << "Combien de Tarte voulez vous mettre dans votre Patisserie ?" << endl;
                        cin >> nbGateau;
                        if (!estEntierValide(nbGateau)){
                            cout << "Erreur dans la saisie !" << endl;
                            continue;
                        }
                        int valeurGateau = stoi(nbGateau);
                        if (valeurGateau > 0){
                            validation = true;
                        } else {
                            cout << "Il me faut au minimum 1 gateau, soit malin !" << endl;
                        }

                        for(int i = 0; i < valeurGateau; i++) {
                            patisserie.ajouter(tarte);
                        }

                    }
                    tarte.afficherIngredients();


                } else {
                    cout << "Type de gateau invalide !" << endl;
                }
                break;
            }
            case 2:
                patisserie.afficher();
                break;
            case 3: {
                if (patisserie.estVide()) {
                    cout << "Il n'y a plus de gateaux a acheter !" << endl;
                } else {
                    cout << "Quel gateau voulez-vous acheter ?" << endl;
                    patisserie.afficher();
                    int numero = 0;
                    cin >> numero;
                    if (numero >= 0 && numero < patisserie.getStock().size()) {
                        const Gateau* gateau = &(patisserie.getStock()[numero]);
                        bool dernier = false;
                        if (patisserie.acheter(gateau, dernier)) {
                            if (dernier) {
                                cout << "C'etait le dernier gateau en stock !" << endl;
                            }
                            cout << "Gateau achete !" << endl;
                        } else {
                            cout << "Le gateau n'est plus disponible." << endl;
                        }
                    } else {
                        cout << "Numero de gateau invalide." << endl;
                    }
                }break;
            }
            case 4: {
                int choixCommande;
                do {
                    cout << "Que voulez-vous faire ?" << endl;
                    cout << "1. Afficher toutes les commandes" << endl;
                    cout << "2. Ajouter une commande" << endl;
                    cout << "3. Supprimer une commande" << endl;
                    cout << "4. Retourner au menu principal" << endl;
                    cin >> choixCommande;

                    switch (choixCommande) {
                        case 1:
                            patisserie.afficherCommandes();
                            break;
                        case 2:
                            patisserie.ajouterCommande(patisserie);
                            break;
                        case 3:
                            patisserie.supprimerCommande();
                            break;
                        case 4:
                            cout << "Retour au menu principal." << endl;
                            break;
                        default:
                            cout << "Choix invalide." << endl;
                            break;
                    }
                } while (choixCommande != 4);
            }

            case 5:{
                return 0;
            }

            default: {
                cout << "Choix invalide. Veuillez saisir une option valide." << endl;
                break;
            }
        }
    }
}
