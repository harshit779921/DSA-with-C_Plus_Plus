// Write a program to print a number which is entered from keyboard using pointer.

#include <iostream>

using namespace std;

int main()
{
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    cout<<*(&num);
    
    return 0;
}

