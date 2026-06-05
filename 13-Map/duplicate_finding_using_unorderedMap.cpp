#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,2};

    // Check if  the duplicate element is present or not
    // and print that element

    unordered_map <int,int> ump;

    for(int x : arr)
    {
        if(ump[x]>0)
        {
            cout<<"Duplicate found:"<<x;
            break;
        }
        ump[x]++;
    }

    return 0;
}


