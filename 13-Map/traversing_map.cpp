#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,string> ids;

    // Store enrollment_no and names as key-value pair

    ids.insert({234001,"Arya Bangale"});
    ids.insert({234014,"Chaitanya Kale"});
    ids.insert({234002,"Rozi chavla"});
    ids.insert({234004,"Munna Dons"});

    // Iterate over a map
    for(auto x : ids)
    {
        cout<<x.first<<"->";
        cout<<x.second<<endl;
    }

    // Output

    /*
        234001->Arya Bangale
        234002->Rozi chavla
        234004->Munna Dons
        234014->Chaitanya Kale0
    */

    return 0;
}

