// a program in C++ to display n terms of natural number and their sum
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "The first " << n << " natural numbers are: ";

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        sum += i;
    }

     cout << endl << "Their sum is: " << sum;

    return 0;
}
