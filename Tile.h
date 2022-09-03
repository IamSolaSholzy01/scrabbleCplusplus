//
// Created by james bond on 9/2/22.
//
#include <string>
#include <map>
#include <utility>
#ifndef SCRABBLE_DEMO_TILE_H
#define SCRABBLE_DEMO_TILE_H

using namespace std;



class BaseTile {
private:
    static int count;
    void set_value(int v) {
        this->value = v;
    }

protected:
    char letter;
    int value;
    map<char, int> letters;
public:
    BaseTile();
    static int get_count();
    [[nodiscard]] char get_letter() const;
    void set_letter(char l);
    [[nodiscard]] int get_value() const;
};

class Tile: public BaseTile {
public:
    Tile();
    explicit Tile(char l);
};

#endif //SCRABBLE_DEMO_TILE_H
