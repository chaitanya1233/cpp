/*
Problem 2 — Sort by Second Value (Ascending)

Given:

vector<pair<int,int>> vp = {
    {1,200},
    {2,50},
    {3,100},
    {4,75}
};

Tasks:

Write your own cmp().
Sort by .second in ascending order.
Print the result.
*/



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int,int> x , pair<int,int> y)
{

    // if second of y  > second of x , then y.second will go ahead of x.
    return x.second < y.second;
}

int main()
{

    vector<pair<int,int>> vp = {
    {1,200},
    {2,50},
    {3,100},
    {4,75}
    };


    // Sort by second in ascending order
    sort(vp.begin(),vp.end(),cmp);


    // Print the pairs
    for(auto x : vp)
    {
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }
    return 0;
}
