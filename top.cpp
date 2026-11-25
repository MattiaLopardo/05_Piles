//
// Created by matti on 18.11.2026.
//
#include <stdexcept>
#include "top.h"

using namespace std;


//consulter le sommet
int top(const array<int, capacite>& tbl, const size_t& compteur) {

        if (compteur == 0) {
            throw std::underflow_error("impossible de consulter le sommet d'une pile vide.");
        }
            return tbl.at(compteur-1);

    }

//remplacer le sommet
int& top(array<int,capacite>& tbl, const size_t& compteur) {
    if (compteur == 0) {
        throw std::underflow_error("impossible de remplacer le sommet d'une pile vide.");
    }
        return tbl.at(compteur-1);
}
