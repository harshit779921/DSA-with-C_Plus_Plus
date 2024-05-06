// program to check Leap Year
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the year: ";
    cin >> a;
    if (a % 4 == 0)
    {
        cout << "it is a leap year" << endl;
    }
    else
    {
        cout << "it is not a leap yaer";
    }
    return 0;
}