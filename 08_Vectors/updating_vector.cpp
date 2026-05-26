#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;


    v.push_back(10);
    v.push_back(20);
    v.push_back(30);


    // change the first indexed value to 200;
    v[1] = 200;


    // new vector is:
    for(int  x:v)
    {
     cout<<x<<" ";
    }
    return 0;
}

