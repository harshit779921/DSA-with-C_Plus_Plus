#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int revsNum = 0;
    int count = 0;
    cin >> n;

    while (n > 0)
    {
        int lastDigit = n % 10;
        count = count + 1;

        n = n / 10;
        int reverse = (revsNum * 10)+ lastDigit;
        cout<<reverse;
        
    }
    return count;
}