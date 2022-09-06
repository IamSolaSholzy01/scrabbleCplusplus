#include <iostream>
#include <algorithm>
#include "Objects/Tile/Tile.h"
#include "Objects/Bag/Bag.h"

int run() {
    Bag A;
    std::cout << A.get_count_tiles() << endl;
    A.get_tile().print_tile();
    A.get_tile().print_tile();
    A.get_tile().print_tile();
    return 0;
}
using namespace std;

void init_base_tile() {
    vector<char> one {'D', 'G'};
    vector<char> two {'A', 'E', 'I', 'L', 'N', 'O', 'R', 'S', 'T', 'U'};
    vector<char> three {'B', 'C', 'M', 'P'};
    vector<char> four {'F', 'H', 'V', 'W', 'Y'};
    vector<char> five {'K'};
    vector<char> eight {'J', 'X'};
    vector<char> ten {'Q', 'Z'};

    for (char & j : one) {
        BaseTile::letters.insert(std::pair<char, int>(j, 1));
    }
    for (char & j : two) {
        BaseTile::letters.insert(std::pair<char, int>(j, 2));
    }
    for (char & j : three) {
        BaseTile::letters.insert(std::pair<char, int>(j, 3));
    }
    for (char & j : four) {
        BaseTile::letters.insert(std::pair<char, int>(j, 4));
    }
    for (char & j : five) {
        BaseTile::letters.insert(std::pair<char, int>(j, 5));
    }
    for (char & j : eight) {
        BaseTile::letters.insert(std::pair<char, int>(j, 8));
    }
    for (char & j : ten) {
        BaseTile::letters.insert(std::pair<char, int>(j, 10));
    }
}

int maximum(int *numbers, int length) {
    int max_num = 0;
    for (int i = 0; i < length; i++) {
        max_num = max(numbers[i], max_num);
    }
    return max_num;
}

int linear_search(const int *list, int target, int size){
    for (int i = 0; i < size; i++) {
        if(list[i] == target){
            return i;
        }
    }
    return -1;
}

int binary_search(const int *list, int target, int size) {
    while(size > 0) {
        if(list[(int)size/2] == target) {
            return (int) size/2;
        } else if (list[(int)size/2] < target) {
            size += (int) size/2;
        } else {
            size -= (int) size/2;
        }
    }
    return -1;
}
int BaseTile::count = 0;
map<char, int> BaseTile::letters = {};

int main() {
    init_base_tile();
    run();
    return 0;
}