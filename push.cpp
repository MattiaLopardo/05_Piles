//
// Created by matti on 24.11.2026.
//
#include "push.h"
#include <array>
#include <iostream>
#include <ostream>
#include <stdexcept>

using namespace std;

//push sur une pile pleine : std::overflow_error
void push(size_t& compteur, array<int, 5>& tbl, int valeur) {

        if (compteur == tbl.size()) {
                throw std::overflow_error("impossible d'empiler dans une pile pleine.");
        }
        else {
                tbl.at(compteur) = valeur;
                compteur++;
        }

}