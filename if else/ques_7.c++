// program to check whether a character is alphabet or not
#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter the character: ";
    cin >> a;
    if (a >= 'A' && a <= 'Z', a >= 'a' && a <= 'z')
    {
        cout << "it is a Alphabet" << endl;
    }
    else
    {
        cout << "it is not a Alphabet" << endl;
    }

    return 0;
}
