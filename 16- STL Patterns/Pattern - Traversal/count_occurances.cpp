#include <iostream>
#include <unordered_map>

using namespace std;


int main()
{

    int arr[] = {1,2,1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> mp;

    for(int x : arr)
    {
        mp[x]++;
    }

    for(auto z : mp)
    {
        cout<<z.first<<"-->";
        cout<<z.second<<endl;
    }


    return 0;
}
