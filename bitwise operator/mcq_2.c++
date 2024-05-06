#include <iostream>
using namespace std;
int main()
{ // q1

    // for(int i =0; i<=5;i++){
    //     cout<<i<<" ";
    //     i++;
    // }

    // q2

    // for (int i = 0; i <= 5; i--)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // q3

    // for (int i = 0; i<=15; i+=2){
    //     cout<< i <<" ";

    //      if(i&1){
    //         continue;
    //      }

    //      i++;
    // }

    // q4

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }

    // int a, b = 1;
    // a = 10;
    // if (++a)
    //     cout << b <<endl;

    // else
    //     cout << ++b;

    // int c = 1;
    // int d = c++;
    // int e = ++c;

    // cout << d <<endl;
    // cout << e;
}