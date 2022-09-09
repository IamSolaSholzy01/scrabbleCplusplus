//
// Created by james bond on 9/8/22.
//

#ifndef SCRABBLE_DEMO_RACK_H
#define SCRABBLE_DEMO_RACK_H

#include <vector>
#include "../Tile/Tile.h"

class Rack {
private:
    vector<Tile> tiles;
public:
    Tile get_tile(int index);
    void add_tile(Tile t);
};


#endif //SCRABBLE_DEMO_RACK_H
