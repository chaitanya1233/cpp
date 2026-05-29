#include <iostream>

using namespace std;


int main()
{

    // Declare array which can take 5 integers
    int arr[5];

    // Check the size of array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Take user input of elements
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter element at index "<<i<<" :";
        cin>>arr[i];
    }

    // Print the array elements.

    // 1. For loop
    for(int i = 0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
