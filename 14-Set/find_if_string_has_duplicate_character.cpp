#include <iostream>
#include <unordered_set>
#include <string>


using namespace std;

int main()
{

    // Find if string has duplicate character
    string str = "hello";

    bool is_duplicated = false;
    unordered_set<char> s;

    for(char ch : str)
    {
        if(s.find(ch) != s.end())
        {
            is_duplicated = true;
            cout<<"Duplicate character found:"<<ch<<endl;
            break;
        }
        s.insert(ch);
    }

    if(is_duplicated != true)
    {
        cout<<"There is no duplicate character in the string"<<endl;
    }
    return 0;
}
