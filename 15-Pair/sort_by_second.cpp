#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


// Costom function to tell the sort to ask this function about rules.
// if it returns true then only sort

bool cmp(pair<int,int> x , pair<int,int> y)
{

    // keep y ahead of x if and only if it returns true .
    // otherwise keep y ahead of x.

    return x.second < y.second;
}

int main()
{

    vector<pair<int,int>> vp = {{1,20},{2,30},{3,10}};

    // Sort the vector pair by second
    sort(vp.begin(),vp.end(),cmp);

    for(auto x : vp)
    {
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }

    return 0;
}
