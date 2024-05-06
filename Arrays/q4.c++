// linear search

#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {1, 5, 6, -4, 11, -23, 98, 7, 0, -3};

    cout << "Enter the number you want to search: " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Number is present in array." << endl;
    }
    else
    {
        cout << "Number is not present in array." << endl;
    }
}