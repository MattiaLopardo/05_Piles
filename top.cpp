//
// Created by matti on 18.11.2026.
//
#include <iostream>
#include <array>
#include <stdexcept>
#include "top.h"

using namespace std;


//consulter le sommet
void top(const array<int, 5>& tbl, size_t compteur) {

        if (compteur == 0) {
            throw std::underflow_error("impossible de consulter le sommet d'une pile vide.");
        }
        else {
            cout << "Sommet : " << tbl.at(compteur-1) << endl;
        }

    }

//remplacer le sommet
int top(array<int,5>& tbl, size_t compteur, int valeur) {
    if (compteur == 0) {
        throw std::underflow_error("impossible de remplacer le sommet d'une pile vide.");
    }
    else {
        return tbl.at(compteur-1) = valeur;
    }
}
