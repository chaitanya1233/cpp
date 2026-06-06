/*

Problem 6 — Frequency Sorting (DSA-Oriented)

Given:

vector<int> arr = {4,1,2,1,2,1,3};

Tasks:

Count frequencies using a map.
Store them as pairs:
{frequency, number}
Sort by frequency descending.
Print the numbers according to frequency order.

This is very close to patterns used in coding interviews.


*/

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    // Given is  array of vectors.
    vector<int> arr = {4,1,2,1,2,1,3};

    // count frequency using map.
    map<int,int> mp;

    for(int x : arr)
    {
        mp[x]++;
    }

    vector<pair<int,int>> vp;

    for(auto x : mp)
    {
        int a = x.first;   // it is a number
        int b = x.second; // it is a frequency
        vp.push_back({b,a}); // store it as a frequency , number
    }

    // Sort them by frequency , meaning second in descending

    // since frequency is stored in a first bucket of pair , so don't need of costom comparator.

    sort(vp.begin(),vp.end());

    // traverse to print it
    for(auto x: vp)
    {
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }
    return 0;
}
