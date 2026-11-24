//
// Created by matti on 18.11.2026.
//
#include <iostream>
#include <stdexcept>
#include "pop.h"

using namespace std;

void pop(size_t& compteur) {

        if (compteur == 0) {
                throw std::underflow_error("impossible de dépiler une pile vide.");
        }
        else {
                compteur--;
        }

}