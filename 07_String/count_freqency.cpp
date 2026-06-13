#include <iostream>
#include<string>
#include <vector>


using namespace std;

int main()
{
    string s1 = "listen";

    vector<int> count(26,0); // create a empty vector of zero 26 times.

    for(char c : s1)
    {
        count[c - 'a']++;
    }


    for(int  x : count)
    {
        if(x > 0)
        {
            cout<<x<<" ";
        }
    }


    return 0;
}

