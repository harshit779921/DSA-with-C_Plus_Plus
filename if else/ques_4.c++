// program to check divisibility of any number

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the number1: ";
    cin >> a;
    cout << "Enter the number2: ";
    cin >> b;
    if (a % b == 0)
    {
        cout << "number is divisible" << endl;
    }
    else
    {
        cout << "number is not divisible" << endl;
    }

    return 0;
}
