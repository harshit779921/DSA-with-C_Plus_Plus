#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    int sum = 0;

    // Calculate the number of digits in the number
    int numDigits = 0;
    int tempN = n;
    while (tempN != 0) {
        numDigits++;
        tempN /= 10;
    }

    // Calculate the sum of the digits each raised to the power of the number of digits
    while (n > 0)
    {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    // Check if it's an Armstrong number
    if (temp == sum)
    {
        cout << "It is an Armstrong number";
    }
    else
    {
        cout << "It is not an Armstrong number";
    }

    return 0;
}
