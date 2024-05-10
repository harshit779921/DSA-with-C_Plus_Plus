#include <bits/stdc++.h>
using namespace std;
// int fact(int n)
// {
//     if (n == 0)

//         return 1;
//     return n * fact(n - 1);
    
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fact(n);
//     return 0;
// }

void fact(int i, int facto)
{
    if (i < 1)
    {
        cout << endl
             << "The factorial of : " << facto;
        return;
    }
    cout << i << " ";
    fact(i - 1, facto * i);
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    fact(n, 1);
    
}
