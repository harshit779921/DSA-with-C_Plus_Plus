//Write a program to print the address of the pointer to a variable whose value is input from user.

#include <iostream>

using namespace std;

int main()
{
    int num;
    int *ptr;
    
    cout << "Enter a number: ";
    cin >> num;
    
    ptr = &num; // Assign the address of num to ptr
    
    cout << "The address :" << &ptr << endl;
    
    return 0;
}
