#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    int revsNum = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        revsNum = (revsNum * 10) + lastDigit;
        n = n / 10;
    }

    if (temp == revsNum) {
        cout << "It is a Palindrome";
    } else {
        cout << "It is not a Palindrome";
    }

    return 0;
}
