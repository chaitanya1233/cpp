#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // Define a vector
     vector<int> v = {10,20,30,40};

    // Define iterator
    vector<int>::iterator it;


    // Iterate using for loop.
    for(it = v.begin();it < v.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
