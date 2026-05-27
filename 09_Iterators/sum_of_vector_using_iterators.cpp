#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    // Define a vector with initial values.
    vector<int> v = {10,20,30,40,50};

    // Logic to do sum of the all vector elements

    int sum = 0;
    for(auto it = v.begin(); it != v.end(); it++)
    {
        sum += *it;
    }
    cout<<"Sum of the vector elements is:"<<sum<<endl;

    return 0;
}
