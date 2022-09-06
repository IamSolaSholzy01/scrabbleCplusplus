//
// Created by james bond on 9/2/22.
//
#include<iostream>
#include "Tile.h"
#include <vector>

BaseTile::BaseTile() {
    this->letter = '\0';
    this->value = 0;
    BaseTile::count += 1;
}

int BaseTile::get_count() {
    return BaseTile::count;
}

char BaseTile::get_letter() const {
    return this->letter;
}

void BaseTile::set_letter(char l) {
    this->letter = l;
}

int BaseTile::get_value() const {
    return this->value;
}

Tile::Tile() {
    this->letter = '\0';
    this->value = 0;
}

Tile::Tile(char l) {
    this->letter = l;
    this->value = Tile::letters[this->letter];
}

void Tile::print_tile() const {
    std::cout << "Letter: " << this->letter << ' ' << " value: " << this->value << endl;
}