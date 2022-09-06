//
// Created by james bond on 9/5/22.
//

#include "../Tile/Tile.h"
#include "Bag.h"

unsigned long Bag::get_count_tiles() const {
    return this->tiles.size();
}

Tile Bag::get_tile() {
    Tile t = this->tiles.back();
    this->tiles.pop_back();
    return t;
}
Bag::Bag() {
    this->tiles.emplace_back('B');
    this->tiles.emplace_back('C');
    this->tiles.emplace_back('D');
}