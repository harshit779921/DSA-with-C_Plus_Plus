// program to check whether a character is vowel or consonant
#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter the character: ";
    cin >> a;
    if (a == 'a' || a == 'i' || a == 'e' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        cout << "it is a vowel" << endl;
    }

    else if (a >= 'A' && a <= 'Z', a >= 'a' && a <= 'z')
    {
        cout << "it is consonant" << endl;
    }
    else
    {
        cout << "it is not a Alphabet" << endl;
    }

    return 0;
}
