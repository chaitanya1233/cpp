#include <iostream>
#include <vector>
#include <iterator>


using  namespace std;

int main()
{


    // Define vector
    vector<int> v = {10,20,30,40};

    // Define a iterator named 'it'


    // Use rbegin() and rend() instade of  begin() and end()
    for(auto it = v.rbegin(); it != v.rend();it++)
    {
        cout<<*it<<" ";

    }
    return 0;
}
