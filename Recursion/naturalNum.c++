#include <bits/stdc++.h>
using namespace std;
void Natural(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout<<i<<" ";
    Natural(i + 1, n);   
}
int main()
{
    int n;
    cin >> n;
    Natural(1, n);
    // return 0;
}