#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{

    // Vector with initialization
    vector<int> v = {12,8,5,75,21};

    // Logic to find maximum element

    int largest_ele = v[0];

    // Iterator loop
    for(auto it = v.begin();it!=v.end();it++)
    {
        if(*it > largest_ele)
        {
            largest_ele = *it;
        }
    }
    cout<<"Largest element is:"<<largest_ele;
    return 0;
}
