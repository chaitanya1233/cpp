#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main()
{
    string  str = "leetcode";

    unordered_set<char> s;

    for(char ch : str)
    {
        if(s.find(ch) != s.end())
        {
            cout<<"First repeated character in string is:"<<ch<<endl;
            break;
        }
        s.insert(ch);
    }
    return 0;
}
