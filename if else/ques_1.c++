// program to find maximum between two numbers
#include <iostream>

using namespace std;
int main()
{
    int num1, num2;
    cout << "enter first num:" << endl;
    cin >> num1;
    cout << "enter second num:" << endl;
    cin >> num2;

    if (num1 > num2)
    {
        cout << "num1 is max" << endl
             << num1;
    }
    if (num1 < num2)
    {
        cout << "num2 is max" << endl
             << num2;
    }
    return 0;
}