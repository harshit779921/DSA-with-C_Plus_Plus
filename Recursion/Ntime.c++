#include <bits/stdc++.h>
using namespace std;
void Ntime(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Harshit" << endl;
    Ntime(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    Ntime(1, n);
    // return 0;
}
