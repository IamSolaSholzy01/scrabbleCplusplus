//
// Created by james bond on 9/8/22.
//

#include "Rack.h"

Tile Rack::get_tile(int index) {
    Tile t = this->tiles.at(index);
    this->tiles.erase(this->tiles.begin() + (int) index);
    return t;
}

void Rack::add_tile(Tile t) {
    this->tiles.emplace_back(t);
}