#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    map<int,int> mp;

    mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;


    // Without using [], print the value corresponding to key 2 using only find().

    //  auto it = mp.find(2); // This code may crash if key is not present.

    // Proper handeling of error

    auto it = mp.find(2);

    if(it != mp.end())
    {
     cout<<"Value:"<<it->second<<endl;
    }
    else
    {
        cout<<"Key does not exists.";
    }
    return 0;
}
