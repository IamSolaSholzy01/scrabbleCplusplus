#include <iostream>
#include <algorithm>
using namespace std;

int maximum(int *numbers, int length) {
    int max_num = 0;
    for (int i = 0; i < length; i++) {
        max_num = max(numbers[i], max_num);
    }
    return max_num;
}

int main() {
    int numbers[4] = {1, 2, 3, 5};
    cout << "Hello, World! Welcome to this take on the popular scrabble game." << endl;
    cout << maximum(numbers, sizeof(numbers) / sizeof(int));
    return 0;
}
