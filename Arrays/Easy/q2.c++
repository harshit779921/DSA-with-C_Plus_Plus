#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout << "printing array" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "printing end" << endl;
}

int main()
{
    int num[15] = {2, 7};
    cout << "num at index 4 :" << num[4] << endl;

    int hello[10] = {3, 6, 9, 8, 10, 1, 2, 4, 5, 7};
    // cout<<hello[8];
    printarray(hello, 10);

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};

    cout << ch[3] << endl;
    
    cout << "printing array" << endl;
    for (int i = 0; i < 5; i++)
        cout << ch[i] << " ";

    cout << "printing array" << endl;
}
