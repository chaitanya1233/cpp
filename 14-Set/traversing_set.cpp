#include <iostream>
#include <set>

using namespace std;

int main()
{
    // Define a set
    set<int> s;

    // Insert some values to set.

    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(20);


    // Iterate over set
    for(auto x =  s.begin();x!=s.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    // Same iterator using the for-each loop
    for(auto x : s)
    {
        cout<<x<<" ";
    }
    // Set always prints sorted order --> because they are ordered.

    return 0;
}
