//
// Created by matti on 18.11.2026.
//
#include <iostream>
#include <array>
#include <stdexcept>
#include "pop.h"
#include "top.h"
#include "empty.h"
#include "push.h"

using namespace std;

int main() {
    const int valeur = 5;
    size_t compteur = 0;

    array<int,valeur> tbl {};

    cout << "Ce programme permet de manipuler une pile d'entiers." << endl;
    int select = 0;
    do {
        cout << "1 - Empiler\n"
             << "2 - Dépiler\n"
             << "3 - Consulter le sommet\n"
             << "4 - Modifier l'élément au sommet\n"
             << "5 - Vérifier si la pile est vide\n"
             << "6 - Afficher le nombre de valeurs\n"
             << "7 - Vider la pile\n"
             << "8 - Afficher toute la pile\n"
             << "0 - Quitter" << endl;
        cin >> select;
    int valeur = 0;

        cout << "valeur : " << endl;
        cin >> valeur;

        switch (select) {
                case 1:
                try {
                    push( compteur, tbl, valeur);
                    cout << "Valeur empilée." << endl;
                }
                   catch (const std::overflow_error& e) {
                    cerr << "Erreur : " << e.what() << endl;
                   }
                    break;
                case 2:
                try {
                    pop(compteur);
                    cout << "Valeur retirée : " << endl;
                }
                    catch (const std::underflow_error& e) {
                        cerr << "Erreur : " << e.what() << endl;
                    }
                break;
                case 3:
                try {
                    top(tbl, compteur);
                }
                catch (const std::underflow_error& e) {
                    cerr << "Erreur : " << e.what() << endl;
                }
                break;
                case 4:
                try {
                    top(tbl, compteur);

                }
                catch (const std::underflow_error& e) {
                    cerr << "Erreur : " << e.what() << endl;
                }
                break;
                case 5: cout << 5 << endl; break;
                case 6: cout << 6 << endl; break;
                case 7: cout << 7 << endl; break;
                case 8: cout << 8 << endl; break;
                default: cout << "default" << endl; break;
        }
    }while (select != 0);

    /*for (size_t i = 0; i < valeur; i++) {
        if (tbl.at(i) != 0) {
            compteur++;
        }
    }
*/

    return EXIT_SUCCESS;
}