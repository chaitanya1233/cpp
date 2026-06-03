
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,string> ids;

    // Insert some students data
    ids.insert({11,"Monny"});
    ids.insert({12,"Sonny"});
    ids.insert({1,"Jonson"});
    ids.insert({2,"Smith"});
    ids.insert({3,"Sergio"});

    // Find the name of the id== 11


    // Find will return iterator if key is found otherwise will return mp.end();

    for(auto x : ids)
    {
        if(ids.find(11) != ids.end())
        {
            cout<<"Name:"<<ids[11]<<endl;
            break;
        }
        else
        {
            cout<<"ID doesn't exists.";
        }
    }
    return 0;
}

