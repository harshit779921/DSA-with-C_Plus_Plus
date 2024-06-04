#include <bits/stdc++.h>
using namespace std;

int maxiCons(vector<int> &nums)
{
    int maxi = 0;
    int cnt = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        maxi = max(maxi, cnt);
    }
    return maxi;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int ans = maxiCons(nums);
    cout << "The maximum consecutive ones is: " << ans << endl;
    return 0;
}