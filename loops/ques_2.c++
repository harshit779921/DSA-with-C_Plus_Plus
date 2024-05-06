// a program in C++ to find the sum of first 10 natural numbers
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "enter the number "<< endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout<<"numbers are:"<<i<<endl;
        sum += i;
    }

    cout << "sum of natural number is:" << sum << endl;
    return 0;
}