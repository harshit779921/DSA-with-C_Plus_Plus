// create a program for even and odd using fuctions

#include <iostream>
using namespace std;

int Even_or_Odd(int a)
{
    if (a % 2 != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    cin >> num;

    if (Even_or_Odd(num))
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
}