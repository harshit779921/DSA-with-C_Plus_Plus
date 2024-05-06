//Reverse of q3

#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int i = 1;

    while (i <= m)
    {
        int j = 1;
        while (j <= m)
        {
            cout << m-j+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}