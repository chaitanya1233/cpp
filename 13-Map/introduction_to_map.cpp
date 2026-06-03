#include <iostream>
#include <map>  // Defination of map SLT


using namespace std;

int main()
{
    // Define a map
    map<int,int> mp;

    // Insert some data
    mp[1] = 100;
    mp[2] = 200;
    mp[3] = 300;


    // Print the data
    cout<<mp[1]<<endl;
    cout<<mp[2]<<endl;
    cout<<mp[3]<<endl;

    // Another way to insert value is : map.insert({key,value})
    mp.insert({4,400});

    // print it
    cout<<mp[4]<<endl;

    // Updating

    mp[1] = 1000;
    cout<<mp[1];




    return 0;
}
