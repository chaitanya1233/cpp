#include <iostream>
#include <map>

using namespace std;

int main()
{

    // Define a map to store the frequency of element

    map<int,int> freq;

    int arr[] = {1,1,3,2,33,1,53,2,3,33,44};


    // Count the frequency of element.
    for(int x : arr)
    {
        freq[x]++;
    }

    // print the frequency of each element
    for(auto x : freq)
    {
        cout<<x.first<<":"<<x.second<<endl;
    }

    return 0;
}
