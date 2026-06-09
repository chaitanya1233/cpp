#include <iostream>

using namespace std;

int main()
{
    // Assume that largest number is smallest number.

    // constraints are array may be negative or positive upto 10 raise to 5  tp  10 raise to -5

    int largest = INT_MIN;

    int arr[] = {-1002,-384,129,123,332};

    // size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int x : arr)
    {
        if(x > largest)
        {
            largest = x;
        }
    }
    cout<<"Largeest is:"<<largest<<endl;

    return 0;
}
