#include <iostream>
using namespace std;

int largestElement(int n, int arr[])
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = largestElement(n, arr);
    cout << "The largest element is: " << largest << endl;

    return 0;
}