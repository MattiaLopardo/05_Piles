//
// Created by matti on 24.11.2026.
//
#include "push.h"
#include <stdexcept>

using namespace std;

void push(size_t& compteur, array<int, capacite>& tbl, int valeur) {

        if (compteur == tbl.size()) {
                throw std::overflow_error("impossible d'empiler dans une pile pleine.");
        }
                tbl.at(compteur) = valeur;
                compteur++;

}