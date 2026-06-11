#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int arr[] = {2,7,11,15};
    int target = 9;

    unordered_map <int,int> ump;

    // Logic to find the two sum.

    for(int x : arr)
    {

        // Here we are checking the need of the element
       int need = target - x;

       // Checking if it is in the map.
       if(ump.find(need) != ump.end())
       {
           cout<<"Found.";
           break;
       }
       ump[x]++;

    }

    return 0;
}

