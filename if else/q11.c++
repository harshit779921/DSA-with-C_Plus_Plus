#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "enter your data"<<endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "it is lower case" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "It is upper case." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "it is a digit" << endl;
    }
    else
    {
        cout << "unknown character";
    }
}