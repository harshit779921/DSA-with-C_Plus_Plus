#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[], int n)
{
    // insertion sort
    for (int i = n - 1; i >= n - 1; i--)
    {
        int j =i;
        for (int j = 0; j <= n - 1; j++)
        {
            while (arr[j] > 0 && arr[j - 1] > arr[j])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                j--;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
