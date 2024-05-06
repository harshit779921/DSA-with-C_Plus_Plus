#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{

    int start = 0;      // starting index of the array
    int end = size - 1; // assuming sorted array

    int mid = start + (end - start) / 2; // finding middle element of the array

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid; // element found at mid
        }
        if (key > arr[mid])
        {
            start = mid + 1; // if key is greater than mid then search in right
        }
        else
        {
            end = mid - 1; // if key is smaller than mid then search in left
        }
        mid = start + (end - start) / 2; // recalculating middle after every iteration.
    }
    return -1; // return -1 if we don't find the element
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    cout << "Element present at index for Even : " << binarysearch(even, 6, 12) << endl;
    cout << "Element present at index for Odd : " << binarysearch(odd, 5, 11);
}