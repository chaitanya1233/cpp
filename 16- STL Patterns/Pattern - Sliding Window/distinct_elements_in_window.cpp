#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> DistinctElementSubarray(vector<int> &arr,int k)
{

    int n = arr.size();
    unordered_map<int,int> mp;
    vector<int> res;

    // Count the elements for the first window.
    for(int i = 0;i<k;i++)
    {
        mp[arr[i]]++;
    }

    res.push_back(mp.size());

    // Sliding the window
    for(int i = k;i<n;i++)
    {
        // Remove the element leaving the window.

        mp[arr[i-k]]--;
        if(mp[arr[i-k]]== 0){mp.erase(arr[i-k]);}

        // Add the element to map
        mp[arr[i]]++;

        // Count the size of subarray and update.
        res.push_back(mp.size());
    }
    return res;
}

int main()
{


    // TEST CASE 1:
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int k1 = 4;
    vector<int> v1 = DistinctElementSubarray(arr,k1);


    cout<<"RESULT FOR TEST CASE 1:";
    for(int x : v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    // TEST CASE 2:
    vector<int> arr2 = {1,1,2};
    int k2 = 2;
    vector<int> v2 = DistinctElementSubarray(arr2,k2);

    cout<<"RESULT FOR TEST CASE 2:";
    for(int x : v2)
    {
        cout<<x<<" ";
    }



    return 0;
}
