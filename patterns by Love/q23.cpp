#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

        for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int space = i - 1; space > 0; space--)
        {
            cout << " ";
        }

        // Print stars
        for (int j = n - i + 1; j > 0 ; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}
