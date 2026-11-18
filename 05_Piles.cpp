//
// Created by matti on 18.11.2026.
//
#include <iostream>
#include <array>
#include <stdexcept>
#include "pop.h"
#include "top.h"
#include "empty.h"

using namespace std;

int main() {
    const int valeur = 5;
    size_t compteur = 0;

    array<int,valeur> tbl {};

    cout << "Ce programme permet de manipuler une pile d'entiers." << endl;
    int entree = 0;
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
        cin >> entree;

        switch (entree) {
            case 1: cout << 1 << endl; break;
                case 2: pop(compteur); break;
                case 3: cout << 3 << endl; break;
                case 4: cout << 4 << endl; break;
                case 5: cout << 5 << endl; break;
                case 6: cout << 6 << endl; break;
                case 7: cout << 7 << endl; break;
                case 8: cout << 8 << endl; break;
                default: cout << "default" << endl; break;
        }
    }while (entree != 0);

    /*for (size_t i = 0; i < valeur; i++) {
        if (tbl.at(i) != 0) {
            compteur++;
        }
    }
*/
    cout << compteur << endl;

    return EXIT_SUCCESS;
}