#include <iostream>
#include <map>

using  namespace std;

int main()
{
    // Define  a string to store the frequency of every character
    map<char,int> freq;

    // String
    string s = "leetcode";

    // Loop to iterate over a string
    for(char ch : s)
    {
        freq[ch]++;
    }

    // Print the frequency of every element
    for(auto x : freq)
    {
        cout<<x.first<<"->";
        cout<<x.second<<endl;
    }

    return 0;
}
