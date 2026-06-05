#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

    // Unordered_set ==> Stores unique values and have no proper order of elements

    // O(1) average time complexity for  insert , delete , or traversal.

    // Go for unordered_set if you don't care about order of elements.

    unordered_set<int> s = {1,3,2,2,4,12,33,12};

    // To check unique elements count
    int uniq_ele_count = s.size();
    cout<<"There are "<<uniq_ele_count<<" unique elements."<<endl;

    // Traverse the unordered_set
    for(auto x : s)
    {
        cout<<x<<" "; // Order is not fixed.
    }

    return 0;
}
