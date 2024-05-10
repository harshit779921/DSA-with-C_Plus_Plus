#include <bits/stdc++.h>
using namespace std;
void Natural(int i, int sum)
{
    if (i < 1)
    {
        cout << endl
             << "The sum of N natural number : 4" << sum;
        return;
    }
    cout << i << " ";
    Natural(i - 1, sum + i);
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    Natural(n, 0);
    // return 0;
}