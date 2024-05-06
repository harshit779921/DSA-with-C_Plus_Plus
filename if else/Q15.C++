#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number." << endl;
        }
        else
        {
            cout << "it is a prime" << endl;
        }
        i = i + 1;
    }
}
