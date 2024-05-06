#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}    
    int main(){
        int n;
        cin >> n;
        print1 (n);
    }
//This program prints a pattern of * in a square shape using nested loops. The outer loop runs four times to make the rows and the inner loop
