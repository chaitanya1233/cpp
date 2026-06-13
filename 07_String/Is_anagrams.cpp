
#include <iostream>
#include<string>
#include <vector>


using namespace std;

bool IsAnagram(string s1,string s2)
{
    vector<int> count(26,0); // create a empty vector of zero 26 times.

    if(s1.length() != s2.length())
    {
        return false;
    }

    // count the frequency of element for string s1
    for(char c : s1)
    {
        count[c-'a']++;
    }

    // Decrement the character count by 1.
    for(char c : s1)
    {
        count[c-'a']--;
    }

    // check for the count.
    for(int x : count)
    {
        if(x!=0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // strings input.

    string s1 = "listen";
    string s2 = "silent";

    bool isAnagram = IsAnagram(s1,s2);
    if(isAnagram)
    {
        cout<<"Both strings are anagrams!";
    }
    else
    {
        cout<<"Not anagrams!";
    }

    return 0;
}

