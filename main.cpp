#include <iostream>
#include <cmath>
using namespace std;
int max(int a, int b) {
    // This is a helper function
    // Input: Two integers to be compared
    // Output: The highest response from the inputs
    return (a > b) ? a : b;
}

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
