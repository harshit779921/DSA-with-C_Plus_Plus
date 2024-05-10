#include <bits/stdc++.h>
using namespace std;
// PARAMETRISD WAY

// void Natural(int i, int sum)
// {
//     if (i < 1)
//     {
//         cout << endl
//              << "The sum of N natural number : 4" << sum;
//         return;
//     }
//     cout << i << " ";
//     Natural(i - 1, sum + i);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number: " << endl;
//     cin >> n;
//     Natural(n, 0);
//     // return 0;
// }

// FUCTIONAL RECURSION

int sum(int n)
{
    if (n == 0)

        return 0;
    return n + sum(n - 1);
    
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
