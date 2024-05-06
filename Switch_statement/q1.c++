#include <iostream>

using namespace std;
int main()
{
    int num = 1;
    switch (num)
    {
    case 0:
        cout << "Zero" << endl;
        // continue;

    case 1:
        cout << "One" << endl;
        break;
        // continue;

    default:
        cout << "this is a default case" << endl;
    }
}