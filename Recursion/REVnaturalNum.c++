#include <bits/stdc++.h>
using namespace std;
void Natural(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout<<i<<" ";
    Natural(i - 1, n);   
}
int main()
{
    int n;
    cin >> n;
    Natural(n, n);
    // return 0;
}