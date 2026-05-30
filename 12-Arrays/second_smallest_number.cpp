#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int arr[] = {1,4,7,3,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    int minimum = INT_MAX;
    int second_minimum = INT_MAX;

    // Logic to find the second smallest number
    for(int i = 0;i<n;i++)
    {
        if(arr[i] < minimum)
        {
            second_minimum = minimum;
            minimum = arr[i];
        }
        else if(arr[i]< second_minimum && arr[i] !=  minimum)
        {
            second_minimum = arr[i];
        }
    }
    cout<<"Second smallest number in array is:"<<second_minimum;

    return 0;
}
