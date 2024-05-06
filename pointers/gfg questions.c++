#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 6, 7};
    int *p = &arr[3];
    cout << &arr[3];
    return 0;
}
