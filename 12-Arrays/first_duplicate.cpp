
#include <bits/stdc++.h>

using namespace std;

int main()
{

    // define array
    int arr[] = {4,1,2,1,5,2};

    // define map to store frequency of each element
    map<int,int> mp;


    for(int x : arr)
    {
         cout<<"Before:"<<mp[x];
        if(mp[x] > 0)
        {
            cout<<"First duplicate element is:"<<x<<endl;
            break;
        }
        mp[x]++;
        cout<<"After:"<<mp[x]<<endl;
    }

    return 0;
}
