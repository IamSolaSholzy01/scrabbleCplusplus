//
// Created by james bond on 9/5/22.
//

#ifndef SCRABBLE_DEMO_BAG_H
#define SCRABBLE_DEMO_BAG_H
#include <vector>
#include "../Tile/Tile.h"

using namespace std;
class Bag {
private:
    vector<Tile> tiles;
public:
    Bag();
    [[nodiscard]] int get_count_tiles() const;
    Tile get_tile();
//    int shuffle_tiles();
};

#endif //SCRABBLE_DEMO_BAG_H
