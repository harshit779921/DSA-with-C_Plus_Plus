// WAP to print the sum of all elment in an array
#include <iostream>
using namespace std;

int sum_array(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int arr[4] = {1, 2, 3, 4};
    cout << sum_array(arr, 4);
}


//  int main()
//  {
//    int ar[100];
//    int size;
//    cout << "Enter the size of array :: ";
//    cin >> size;
//    cout << "Enter the element of array:: ";
//    for (int i = 0; i < size; i++)
//    {
//      cin >> ar[i];
//    }
//    cout << "Sum = " << ArraySum(ar,size);
//  }