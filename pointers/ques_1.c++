// Write a program to print the address of a variable whose value is input from user

#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "enter the value:" << endl;
    cin >> i;
    cout << "address is:" << &i << endl;
    return 0;
}
