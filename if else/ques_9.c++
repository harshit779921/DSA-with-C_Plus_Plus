// to check alphabet, digit or special character
#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter the character:" << endl;
    cin >> a;

    if ((a >= 'A' && a <= 'Z', a >= 'a' && a <= 'z'))
    {
        cout << "it is a Alphabet" << endl;
    }

    else if (a >= '0' && a <= '9')
    {
        cout << "it is digit" << endl;
    }
    else
    {
        cout << "it is a special character" << endl;
    }

    return 0;
}
