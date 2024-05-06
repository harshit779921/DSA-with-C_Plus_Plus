#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = i;
        int count = 1;

        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        int s1 = i - 1;
        while (s1)
        {
            cout << "*";
            s1 = s1 - 1;
        }
        int s2 = i - 1;
        while (s2)
        {
            cout << "*";
            s2 = s2 - 1;
        }
        int k = i;
        while (k <= n)
        {
            cout << n - k + 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}