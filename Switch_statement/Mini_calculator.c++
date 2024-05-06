#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cout << "Enter the Value of a: " << endl;
    cin >> a;
    cout << "Enter the Value of b: " << endl;
    cin >> b;

    char op;
    cout << "Enter the operation youn want to perform: " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The sum is : " << a + b << endl;
        break;

    case '-':
        cout << "The sum is : " << a + b << endl;
        break;

    case '*':
        cout << "The sum is : " << a + b << endl;
        break;

    case '/':
        cout << "The sum is : " << a + b << endl;
        break;

    case '%':
        cout << "The sum is : " << a + b << endl;
        break;

    default:
        cout << "not a valid operation" << endl;
    }
}