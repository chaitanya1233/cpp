#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1,2,3,2,4,1,5};
    int unique_count = 0;
    map<int,int> mp;
    // Find the non repeating elements , meaning ---> elements whose frequency is equals to 1.

    for(int x : arr)
    {
        mp[x]++;
    }

    for(auto x: mp)
    {
        if(x.second == 1)
        {
            unique_count++;
        }
    }
    cout<<"Non-repeating elements are:"<<unique_count<<endl;

    return 0;
}
