//
// Created by james bond on 9/2/22.
//
#ifndef SCRABBLE_DEMO_TILE_H
#define SCRABBLE_DEMO_TILE_H
#include <string>
#include <map>
#include <utility>

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

public:
    static map<char, int> letters;
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
    void print_tile() const;
};

#endif //SCRABBLE_DEMO_TILE_H
