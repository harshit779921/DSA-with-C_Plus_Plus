// write a program for max and min in array

#include <iostream>
#include <climits> // Include the header for INT_MIN and INT_MAX
using namespace std;

// Function to find the minimum element in the array
int getMin(int num[], int n) {
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }

    return min; // Return the minimum element
}

// Function to find the maximum element in the array
int getMax(int num[], int n) {
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    return max; // Return the maximum element
}

int main() {
    int size;
    cin >> size;

    int num[100];

    // Taking input in the array
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    // Call the functions to find min and max
    int min = getMin(num, size);
    int max = getMax(num, size);

    // Output the min and max
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}
