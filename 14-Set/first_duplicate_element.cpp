#include <iostream>
#include <set>

using namespace std;

int main()
{
  // Define an array
    int arr[] = {1,2,3,4,3,2,1};

    // Define a set to track duplicates
    set<int> s;

    // Traverse array.
    for(int x : arr)
    {
        if(s.find(x) != s.end())
        {
            cout<<"First duplicate element is:"<<x<<endl;
            break;
        }
        s.insert(x);
    }
    return 0;
}
