#include <iostream>

using namespace std;

int main()
{

    int arr[] = {1,5,2,9,7,50};

    int largest = INT_MIN;
    int second_largest = INT_MIN;
    int  n =  sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if((arr[i]>second_largest) && (arr[i]!=largest))
        {
            second_largest = arr[i];
        }
    }
    cout<<"Second Largest number is:"<<second_largest<<endl;
    return 0;
}
