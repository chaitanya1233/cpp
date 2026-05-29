#include <iostream>

using namespace std;

int main()
{

    // Define an array
    int arr[5] = {2,4,21,5,6};

    // Size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Variable to store the sum of array elements
    int sum = 0;


    // Loop over array to compute sum
    for(int i=0;i<n;i++)
    {
        // Store the values in sum by adding with privious.
        sum += arr[i];
    }
    cout<<"Sum of the array is:"<<sum;    return 0;
}

