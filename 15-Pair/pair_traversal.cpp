#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<pair<string,int>> pv;

    // Insert some pairs as vectors

    pv.push_back({"Chaitanya",22});
    pv.push_back({"Rahul",20});
    pv.push_back({"Manoj",19});

    // Traverse along pair to get pair
    for(auto x : pv)
    {
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }
    return 0;
}
