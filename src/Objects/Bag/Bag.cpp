//
// Created by james bond on 9/5/22.
//

#include "../Tile/Tile.h"
#include "Bag.h"

int Bag::get_count_tiles() const {
    return (int) this->tiles.size();
}

Tile Bag::get_tile() {
    return this->tiles.back();
}
Bag::Bag() {
    this->tiles.emplace_back('B');
}