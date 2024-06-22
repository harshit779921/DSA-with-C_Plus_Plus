#include <bits/stdc++.h>
using namespace std;

// Brute Force

// int solve(vector<int>& a) {
//     int maxLen = 0;
//     unordered_map<int, int> sumIndexMap;
//     int sum = 0;

//     for (int i = 0; i < a.size(); i++) {
//         sum += a[i];

//         if (sum == 0) {
//             maxLen = i + 1;
//         } else if (sumIndexMap.find(sum) != sumIndexMap.end()) {
//             maxLen = max(maxLen, i - sumIndexMap[sum]);
//         } else {
//             sumIndexMap[sum] = i;
//         }
//     }

//     return maxLen;
// }

// int main() {
//     vector<int> a = {9, -3, 3, -1, 6, -5};
//     cout << solve(a) << endl;

//     return 0;
// }

// Optimal Approach

int maxLen(int A[], int n)
{
    unordered_map<int, int> mpp;
    int maxi = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }

    return maxi;
}

int main()
{
    int A[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Length of the longest subarray with 0 sum is " << maxLen(A, n) << endl;
    return 0;
}