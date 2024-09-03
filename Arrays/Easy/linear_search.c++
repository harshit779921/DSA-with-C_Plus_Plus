#include <bits/stdc++.h>
using namespace std;

int Linearsearch(vector<int> arr, int num)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int num;
    cout << "Enter the number to search: ";
    cin >> num;

    int index = Linearsearch(arr, num);

    if (index!= -1)
        cout << "Number found at index: " << index << endl;
    else
        cout << "Number not found" << endl;

    return 0;

}