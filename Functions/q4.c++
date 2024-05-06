//  write a program for AP

#include <iostream>
using namespace std;

int AP(int n)
{
    // int n ;
    n = (3 * n + 7);
    return n;
}

int main()
{

    int n;
    cin >> n;
    int answer = AP(n);
    cout << "answer is :" << answer << endl;
}