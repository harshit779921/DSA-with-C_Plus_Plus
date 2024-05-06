// write a program for fibonnaci series using fuction

#include <iostream>
using namespace std;

int fibbo(int n)
{
    int a = 0, b = 1, c;

    for (int i = 1; i <= n; i++)
    {
        cout<<a<<endl;
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{

    int n;
    cin >> n;
    int answer = fibbo(n);
    cout << "answer is :" << answer << endl;
}