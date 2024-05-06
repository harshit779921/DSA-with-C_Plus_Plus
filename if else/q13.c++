#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // cout << "Enter the number of n ";
    int sum = 0;
    int i = 1;

    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<sum;
}
