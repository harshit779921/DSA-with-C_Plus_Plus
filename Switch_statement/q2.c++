#include <iostream>

using namespace std;
int main()
{
    int ammount;
    cout << "Enter the ammount: " << endl;
    cin >> ammount;
    int rs;
    switch (1)
        {
        case 1:
            rs = ammount / 100;
            ammount = ammount % 100;
            cout << "Number of 100rs Note: " << rs << endl;
            // break;

        case 2:
            rs = ammount / 50;
            ammount = ammount % 50;
            cout << "Number of 50rs: " << rs << endl;
            // break;

        case 3:
            rs = ammount / 20;
            ammount = ammount % 20;
            cout << "Number of 20rs: " << rs << endl;
            // break;

        case 4:
            rs = ammount / 1;
            ammount = ammount % 1;
            cout << "Number of 1rs: " << rs << endl;
            break;

        default:
            cout << "this is a default case" << endl;
        }
}