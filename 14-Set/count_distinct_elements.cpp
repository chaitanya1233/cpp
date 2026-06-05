#include <iostream>
#include <set>

using namespace std;

int main()
{
    int arr[] = {1,2,3,54,54,6,45,3,3};

    set<int> s;

    for(int x : arr)
    {
        s.insert(x);
    }

    int counts = s.size();
    cout<<"Number of distinct elements are:"<<counts<<endl;
    return 0;
}



