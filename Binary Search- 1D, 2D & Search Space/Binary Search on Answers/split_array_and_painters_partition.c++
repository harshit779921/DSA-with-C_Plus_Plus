#include <bits/stdc++.h>
using namespace std;

// Brute Force

int countPartitions(vector<int> &a, int maxSum)
{
    int n = a.size(); // size of array.
    int partitions = 1;
    long long subarraySum = 0;
    for (int i = 0; i < n; i++)
    {
        if (subarraySum + a[i] <= maxSum)
        {
            // insert element to current subarray
            subarraySum += a[i];
        }
        else
        {
            // insert element to next subarray
            partitions++;
            subarraySum = a[i];
        }
    }
    return partitions;
}

int largestSubarraySumMinimized(vector<int> &a, int k)
{
    int low = *max_element(a.begin(), a.end());
    int high = accumulate(a.begin(), a.end(), 0);

    for (int maxSum = low; maxSum <= high; maxSum++)
    {
        if (countPartitions(a, maxSum) == k)
            return maxSum;
    }
    return low;
}

int main()
{
    vector<int> a = {10, 20, 30, 40};
    int k = 2;
    int ans = largestSubarraySumMinimized(a, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
