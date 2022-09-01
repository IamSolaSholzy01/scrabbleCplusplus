#include <iostream>
#include <cmath>
using namespace std;
int max(int a, int b) {
    // This is a helper function
    // Input: Two integers to be compared
    // Output: The highest response from the inputs
    return (a < b) ? a : b;
}

int main() {
    cout << "Hello, World! Welcome to this take on the popular scrabble game." << endl;
    cout << max(14, (int)(pow(4, 2) + 1e-9));
    return 0;
}
