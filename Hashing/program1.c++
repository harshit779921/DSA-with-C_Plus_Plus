//  we need to find out how many times the number appears in the array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute

    int hash[13] = {0};   // array in main upto 10^6 and globally it is 10^7
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;

        // fetch
        cout << hash[num] << endl;
    }
    return 0;
}