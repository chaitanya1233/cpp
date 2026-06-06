/*


Problem 1 — Basic Pair Sorting (Default Comparator)

Create:

vector<pair<int,int>> vp = {
    {3,100},
    {1,200},
    {2,50},
    {1,150}
};

Tasks:

Sort using the default sort().
Print all pairs.
Before running, predict the output.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<pair<int,int>> vp = {
    {3,100},
    {1,200},
    {2,50},
    {1,150}
    };

    // Sort the vector by default rules.
    sort(vp.begin(),vp.end());

    // print the sorted pairs
    for(auto x : vp)
    {
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }

    return 0;
}
