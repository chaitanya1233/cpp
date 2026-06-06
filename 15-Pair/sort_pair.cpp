#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main()
{

    vector<pair<int,int>>  vp = {{3,100},
                                {1,200},
                                {2,50}
                                };


    // Sorted by first values
    sort(vp.begin(),vp.end());

    // Traverse to get output
    for(auto x : vp)
    {
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }

    return 0;
}









