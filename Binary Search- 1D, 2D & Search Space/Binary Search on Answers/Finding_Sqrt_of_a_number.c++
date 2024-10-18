#include <bits/stdc++.h>
using namespace std;

// Optimal Approach

// int floorSqrt(int n)
// {
//     int ans = 0;
//     // linear search on the answer space:
//     for (long long i = 1; i <= n; i++)
//     {
//         long long val = i * i;
//         if (val <= n * 1ll)
//         {
//             ans = i;
//         }
//         else
//         {
//             break;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n = 28;
//     int ans = floorSqrt(n);
//     cout << "The floor of square root of " << n
//          << " is: " << ans << "\n";
//     return 0;
// }

// Optimal Approach

int floorSqrt(int n)
{
    int ans = sqrt(n);
    return ans;
}

int main()
{
    int n = 28;
    int ans = floorSqrt(n);
    cout << "The floor of square root of " << n
         << " is: " << ans;
    return 0;
}
