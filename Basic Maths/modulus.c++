#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;

    while (n > 0)
    {
        // int lastDigit = n % 10;
        count = count + 1;
        // cout << lastDigit << endl;

        n = n / 10;
        cout << n<<endl;
    }
    return count;
}