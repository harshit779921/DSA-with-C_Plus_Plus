// initialize entire array with same value

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 100;
    int arr[SIZE];
    int value = 1; // Value to initialize the array with

    // Initializing the array with the same value
    for (int i = 0; i < SIZE; i++) {
        arr[i] = value;
    }

    // Printing the initialized array
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
