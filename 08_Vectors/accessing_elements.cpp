#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;


    // vectors elements can be stored using : .push_back();
    v.push_back("chaitanya");
    v.push_back("Rohan");

    // for-each loop : loop over a vector.
    for(string name : v)
    {
        cout<<name<<endl;
    }



    return 0;
}
