#include <iostream>
#include <algorithm>
#include "Objects/Tile/Tile.h"
#include "Objects/Bag/Bag.h"

int run() {
    Bag A;
    std::cout << A.get_count_tiles() << endl;
    std::cout << A.get_tile().get_letter() << endl;
    return 0;
}
using namespace std;

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

int main() {
    int numbers[4] = {1, 2, 3, 5};
//    cout << "Hello, World! Welcome to this take on the popular scrabble game." << endl;
//    cout << maximum(numbers, sizeof(numbers) / sizeof(int)) << endl;
//    cout << linear_search(numbers, 3,  sizeof(numbers) / sizeof(int)) << endl;
//    cout << binary_search(numbers, 3,  sizeof(numbers) / sizeof(int)) << endl;
    run();
    return 0;
}