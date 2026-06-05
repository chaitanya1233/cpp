#include <iostream>
#include <set>

using namespace std;


int main()
{
    // Define a set
    set<int> s;

    int arr[] = {1,2,3,4,2};

    // Have i seen 2 -> is 2 duplicate or not

    for(int x : arr)
    {
        if(s.find(x) != s.end())
        {
            cout<<"Found..";
            break;
        }
        s.insert(x);
    }

    return 0;
}
