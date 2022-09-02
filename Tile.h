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
    void set_value(int v) {
        this->value = v;
    }

protected:
    char letter;
    int value;
    map<char, int> letters;
public:
    BaseTile() {
        this->letter = '\0';
        this->value = 0;
        letters = {{'D', 1}};
    }

    [[nodiscard]] char get_letter() const {
        return this->letter;
    }
    void set_letter(char l) {
        this->letter = l;
    }
    [[nodiscard]] int get_value() const {
        return this->value;
    }
};

class Tile: public BaseTile {
public:
    Tile() {
        this->letter = '\0';
        this->value = 0;
    }
    explicit Tile(char l) {
        this->letter = l;
        this->value = this->letters[this->letter];
    }
};

#endif //SCRABBLE_DEMO_TILE_H
