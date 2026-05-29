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


    // Indexing in array starts from 0 to n-1
    //So , 0 to 4 , where n = size (size-1)
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
    cout<<arr[4]<<" ";

    return 0;
}
