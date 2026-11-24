//
// Created by matti on 18.11.2026.
//
#include "empty.h"

#include <iostream>
#include <ostream>

using namespace std;

bool empty(size_t compteur) {

    if (compteur == 0) {return true;}
    else {return false;}
}

void afficher_empty(size_t compteur) {

    if (empty(compteur)) {
        cout << "La pile est vide." << endl;
    }
    else {
        cout << "La pile n'est pas vide." << endl;
    }

}