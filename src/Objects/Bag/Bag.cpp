//
// Created by james bond on 9/5/22.
//

#include "../Tile/Tile.h"
#include "Bag.h"
#include <random>

void add_letter(char letter, int count, vector<Tile> &tiles) {
    for (int i = 0; i < count; ++i) {
        tiles.emplace_back(letter);
    }
}

unsigned long Bag::get_count_tiles() const {
    return this->tiles.size();
}

Tile Bag::get_tile() {
    unsigned long size = (this->get_count_tiles() - 1);
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distribution(0, (int) size);

    int index = distribution(generator);
    Tile t = this->tiles.at(index);
    this->tiles.erase(this->tiles.begin() + (int) index);
    return t;
}

Bag::Bag() {
    map<char, int> definition {{'\0', 2}, {'A', 9}, {'B', 2}, {'C', 2}, {'D', 4}, {'E', 12}, {'F', 2}, {'G', 3}, {'H', 2}, {'I', 9}, {'J', 1}, {'K', 1}, {'L', 4}, {'M', 2}, {'N', 6}, {'O', 8}, {'P', 2}, {'Q', 1}, {'R', 6}, {'S', 4}, {'T', 6}, {'U', 4}, {'V', 2}, {'W', 2}, {'X', 1}, {'Y', 2}, {'Z', 1}};
    for (pair<const char, int> j : definition) {
        add_letter(j.first, j.second, this->tiles);
    }
}
