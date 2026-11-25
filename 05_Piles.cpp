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
#include "show.h"
#include "capacite.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // Permet d'afficher des lettres accentuées
    size_t compteur{};

    array<int,capacite> tbl {};
    const array<int,capacite>& tbl_lecture = tbl;


    cout << "Ce programme permet de manipuler une pile d'entiers." << endl;

    int select{};
    do {
        cout << "\n"
     << "1 - Empiler\n"
     << "2 - Dépiler\n"
     << "3 - Consulter le sommet\n"
     << "4 - Modifier l'élément au sommet\n"
     << "5 - Vérifier si la pile est vide\n"
     << "6 - Afficher le nombre de valeurs\n"
     << "7 - Vider la pile\n"
     << "8 - Afficher toute la pile\n"
     << "0 - Quitter\n"
     << "\n"
     << "Votre choix : ";
        cin >> select;

    int valeur{};


        switch (select) {
                case 1://OK
                cout << "Valeur : ";
                cin >> valeur;
                try {
                    push( compteur, tbl, valeur);
                    cout << "Valeur empilée." << endl;
                }
                   catch (const std::overflow_error& e) {
                    cout << "Erreur : " << e.what() << endl;
                   }
                    break;
                case 2://OK
                try {
                    pop(compteur);
                    cout << "Valeur retirée : " << tbl.at(compteur) << endl;
                }
                    catch (const std::underflow_error& e) {
                        cout << "Erreur : " << e.what() << endl;
                    }
                break;
                case 3://OK
                try {
                    int Sommet_lecture{};
                    Sommet_lecture = top(tbl_lecture, compteur);
                    cout << "Sommet : " << Sommet_lecture << endl;

                }
                catch (const std::underflow_error& e) {
                    cout << "Erreur : " << e.what() << endl;
                }
                break;
                case 4://OK
                cout << "Valeur de remplacement : ";
                cin >> valeur;
                try {
                    top(tbl,compteur) = valeur;
                    cout << "Valeur remplacée." << endl;
                }
                catch (const std::underflow_error& e) {
                    cout << "Erreur : " << e.what() << endl;
                }
                break;
                case 5://OK

                if (empty(compteur)) {
                    cout << "La pile est vide." << endl;
                }
                else {
                    cout << "La pile n'est pas vide." << endl;
                }

                break;
                case 6://OK
                cout << "Nombre de valeurs : " << size(compteur) << endl;
                break;
                case 7://OK
                clear(compteur);
                cout << "Pile vidée." << endl;
                break;
                case 8://OK

                show(tbl_lecture,compteur);

                break;
                default: break;
        }
    }while (select != 0);

    cout << "Fin de programme." << endl;

    return EXIT_SUCCESS;
}