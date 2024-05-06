#include <iostream>
using namespace std;
int main()
{

    int a = 0;
    int b = 1;
    int n;
    
    cout << "enter the number:" << endl;
    cin >> n;
    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int newnumber = a + b;

        cout << newnumber << " ";

        a = b;
        b = newnumber;
    }
}
