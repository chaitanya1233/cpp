/*

vectors can grow/shrink automatically
size is dynamic
many built-in functions are available

*/


#include <iostream>

// must need to include:
#include <vector>


using namespace std;

int main()
{
    // This creates a empty vector
    // name of the vector is v1
    // it can only take integers.

    vector<int> v1;

    // To add element in the vectors ---> .push_back()

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    // Now the vector contains : [10,20,30]

    return 0;
}
