#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1,2,4,4,4,5,4,1,2,2};

    unordered_map<int,int> mp;
    int n =  sizeof(arr)/sizeof(arr[0]);


    // Loop to check the most frequent element.
    for(int x : arr)
    {
     mp[x]++;
    }

    // frequency count
    for(auto x : mp)
    {
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }

    // extract the most frequent element

    int most_frequent = -1;
    int previous = -1;
    for(auto x : mp)
    {
        if(x.second > previous)
        {
            most_frequent = x.first;
            previous = x.second;
        }
    }
    cout<<"Most frequent element is:"<<most_frequent<<endl;
    return 0;
}
