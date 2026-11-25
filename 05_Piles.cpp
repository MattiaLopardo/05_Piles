//
// Created by matti on 18.11.2026.
//
#include <iostream>
#include <array>
#include <iomanip>
#include <stdexcept>
#include "pop.h"
#include "top.h"
#include "empty.h"
#include "push.h"
#include <windows.h>

#include "clear.h"
#include "size.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // Permet d'afficher des lettres accentuées
    const int capacite = 5;
    size_t compteur = 5;

    array<int,capacite> tbl {1,2,3,4,5};

    cout << "Ce programme permet de manipuler une pile d'entiers." << endl;
    cout << "1 - Empiler\n"
     << "2 - Dépiler\n"
     << "3 - Consulter le sommet\n"
     << "4 - Modifier l'élément au sommet\n"
     << "5 - Vérifier si la pile est vide\n"
     << "6 - Afficher le nombre de valeurs\n"
     << "7 - Vider la pile\n"
     << "8 - Afficher toute la pile\n"
     << "0 - Quitter" << endl;

    int select = 0;
    do {
        cin >> select;
    int valeur = 0;

        /*cout << "valeur : " << endl;
        cin >> valeur;*/

        switch (select) {
                case 1://OK
                cout << "Votre choix : 1" << endl;
                try {
                    push( compteur, tbl, valeur);
                    cout << "Valeur empilée." << endl;
                }
                   catch (const std::overflow_error& e) {
                    cout << "Erreur : " << e.what() << endl;
                   }
                    break;
                case 2://OK
                cout << "Votre choix : 2" << endl;
                try {
                    pop(tbl,compteur);
                    cout << "Valeur retirée : " << tbl.at(compteur) << endl;
                }
                    catch (const std::underflow_error& e) {
                        cout << "Erreur : " << e.what() << endl;
                    }
                break;
                case 3:// LA surcharge de TOP ne marche pas
                cout << "Votre choix : 3" << endl;
                try {
                    top(tbl, compteur);

                }
                catch (const std::underflow_error& e) {
                    cout << "Erreur : " << e.what() << endl;
                }
                break;
                case 4:// LA surcharge de TOP ne marche pas
                cout << "Votre choix : 4" << endl;
                try {

                    cout << "Sommet : " << top(tbl,compteur,valeur) << endl;
                }
                catch (const std::underflow_error& e) {
                    cout << "Erreur : " << e.what() << endl;
                }
                break;
                case 5://OK
                cout << "Votre choix : 5" << endl;
                afficher_empty(compteur);
                break;
                case 6://OK
                cout << "Votre choix : 6" << endl;
                cout << "Nombre de valeurs : " << size(compteur) << endl;
                break;
                case 7://OK
                cout << "Votre choix : 7" << endl;
                clear(compteur);
                cout << "Pile vidée." << endl;
                break;
                case 8:
                cout << "Votre choix : 8" << endl;

                for (size_t i = tbl.size()-1; i < capacite; --i) {
                    if (i == tbl.size()-1) {
                        cout << "Sommet -> " << setw(10) << endl;
                        continue;
                    }

                    else if (i == 0) {
                        cout << setw(0) << "Fond -> " << setw(2) << tbl.at(i) << setw(0) << endl;
                        break;
                    }
                    else {
                        cout  << tbl.at(i) << endl;
                    }
                }

                break;
                default: break;
        }
    }while (select != 0);

    return EXIT_SUCCESS;
}