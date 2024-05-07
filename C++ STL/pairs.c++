#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    // Creating a pair of integers
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    // Creating a pair of an integer and another pair of integers
    pair<int,pair<int,int>>q={1,{3,4}};
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl;

    // Creating an array of pairs of integers
    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
}