// Program to find largest and smallest in one traversal


#include <iostream>

using namespace std;

largest_n_smallest(int arr[],int n)
{
    int largest = arr[0];
    int smallest = arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }

    cout<<"Smallest:"<<smallest<<endl;
    cout<<"Largest:"<<largest<<endl;
}

int main()
{

    // Define  an array
    int arr[] = {23, 5, 89, 12, 45, 1, 67, 34, 99, 18};

    // Size of array
    int n =  sizeof(arr)/sizeof(arr[0]);

    // function call
    largest_n_smallest(arr,n);
    return 0;
}
