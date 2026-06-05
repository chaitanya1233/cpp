#include <iostream>
#include <set>

using namespace std;

int main()
{

    // Define a set

    set<int> s = {1,4,3,1,2,1,5};

    //check if the target is preset in a set or not
    int target = 5;

    auto it = s.find(target);

    if(it != s.end())
    {
        cout<<"Found.";
    }
    else
    {
        cout<<"Not found.";
    }

    return 0;
}
