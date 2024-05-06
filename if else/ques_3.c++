// program to check positive negative or zero using simple if statement

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter numbers: ";
    cin >> a;

    if (a > 0)
    {
        cout << "number is positive" << endl
             << a;
    }
    else if (a < 0)
    {
        cout << "number is negative" << endl
             << a;
    }
    else
    {
        cout << "number is zero" << endl
             << a;
    }

    return 0;
}
