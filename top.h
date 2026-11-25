//
// Created by matti on 18.11.2026.
//

#ifndef INC_05_PILES_TOP_H
#define INC_05_PILES_TOP_H
#include <array>
#include <cstddef>
#include "capacite.h"

int top(const std::array<int,capacite>& tbl, const std::size_t& compteur);

int& top(std::array<int,capacite>& tbl, const std::size_t& compteur);

#endif //INC_05_PILES_TOP_H
