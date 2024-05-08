#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i=1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "The number is divisible by: " << i << endl;
        }
        else
        {
            continue;
        }
    }
}
