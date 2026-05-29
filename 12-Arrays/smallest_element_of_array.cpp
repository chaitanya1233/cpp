#include <iostream>

using namespace std;

int main()
{


    // Define array of size n;
    // where n =  size of the array

    int n;
    cout<<"Enter size of array:";
    cin>>n;

    int arr[n];

    // Take input from user

    for(int i = 0;i<n;i++)
    {
        cout<<"Enter element at index "<<i<<" :";
        cin>>arr[i];
    }

    // Logic to find smallest element

    int smallest = arr[0]; // Assume smallest number is first element of array

    for(int i = 1;i < n; i++)
    {

        // If current element is smaller than actual smallest --> Store current element as smallest
        if(smallest>arr[i])
        {
            smallest  = arr[i];
        }
    }

    cout<<"Smallest number is:"<<smallest<<endl;
    return 0;
}
