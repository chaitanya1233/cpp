#include <iostream>
#include <map>

using namespace std;

int main()
{

    int arr[] = {1,2,1,3,2,4};

    // Size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Define .a map to store freqyuency count
    map<int,int> mp;

    // Count the frequency of the elements.
    for(int x : arr)
    {
        mp[x]++;
    }

    // size of the map = number of unique elements
    int distinct_count = mp.size();
    cout<<"Distinct elements are:"<<distinct_count;

    return 0;
}

