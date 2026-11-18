//
// Created by matti on 18.11.2026.
//
#include <iostream>
#include <array>
#include <stdexcept>
#include "top.h"

using namespace std;

int top(array<int, 5> tbl, size_t compteur) {

    return tbl.at(compteur);
}

void top(array<int,5>& tbl,int entree, size_t compteur) {

    tbl.at(compteur) = entree;
}
