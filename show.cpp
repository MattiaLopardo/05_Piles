//
// Created by matti on 25.11.2026.
//
#include "show.h"

#include <iomanip>

#include "empty.h"
#include <iostream>

using namespace std;

void show(const std::array<int, 5>& tbl, size_t compteur) {

    if (empty(compteur)) {
        cout << "La pile est vide." << endl;
    }

    else if (compteur == 1) {
        cout << "Sommet / Fond -> " << tbl.at(compteur-1) << endl;
    }

    else {
        cout << "Sommet -> " << tbl.at(compteur-1) << endl;
        for ( size_t i = 2; i <= compteur; ++i) {

            if (i == compteur) {
                cout << setw(0) << "Fond   -> " << tbl.at(compteur-i) << endl;
                break;
            }

            cout << setw(11) << tbl.at(compteur-i) << endl;

        }

    }



}