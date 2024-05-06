// program to check even or odd number
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number1: "<<endl;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "it is a even number" << endl;
    }
    else
    {
        cout << "it is a odd number" << endl;
    }
    return 0;
}
