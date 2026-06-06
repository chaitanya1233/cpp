#include <iostream>

using namespace std;

int main()
{
    // Declaration methods

    // Method 1:
    pair<int,int> p;

    // Method 2:
    pair<int,int> p2(1,20);

    // Method 3;
    pair<int,int> p3 = {1,20};

    // Method 4:
    pair<int,int> p4;
    p4.first = 1;
    p4.second = 20;


    // When pieces of information belong together you can use pairs.

    // pair = Two related values packed together


    // Accessing values
    cout<<p2.first<<" ";
    cout<<p2.second;
    return 0;

}
