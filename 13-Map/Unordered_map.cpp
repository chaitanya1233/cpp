#include <iostream>
#include <unordered_map>

using namespace std;


int main()
{
    // Unordered map will not assure the order of elements will be the same
    // Their keys are not in a sorted order.

    // They give us O(1) Insert , erase , and traversal time complexity .

    // Implementation is way-way similar to map , only difference is in declaration and
    // internal oprations

    unordered_map<int,int> ump;

    ump[1] = 10;
    ump[2] = 20;
    ump[3] = 30;


    for(auto x : ump)
    {
        cout<<x.first<<"->";
        cout<<x.second<<endl;
    }return 0;
}


