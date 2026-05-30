#include <iostream>

using namespace std;

// Function to find find frequency of target element.
int count_frequency(int arr[],int n,int target)
{
    int frequency = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            frequency++;
        }
    }
    return frequency;
}

int main()
{

    // Define array of elements
    int arr[] = {1,4,5,4,5,4};

    int n = sizeof(arr)/sizeof(arr[0]);

    // count the frequency of 5
    int target = 5;
    int frequency = count_frequency(arr,n,target);

    cout<<"Frequency of "<<target<<" is:"<<frequency;
    return 0;
}
