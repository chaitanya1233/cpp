#include <iostream>
using namespace std;

bool check_sorted(int arr[],int n)
{

    bool flag = true;

    // go from index  0 to n-1
//     because when index is n-1 i.e 4 , so

   //  arr[4] > arr[5] ....> But indexing is upto 4 not 5 so , index out of bound.

   // so no need to go from 0 to n ,
   // Go only from 0 to n-1 --> that means going from 0 to 3
    for(int i = 0;i < n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    // Define array size
    int n ;
    cout<<"Enter size of array:";
    cin>>n;

    // Declare array
    int arr[n];

    // taking input of array
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter element at index "<<i<<" :";
        cin>>arr[i];
    }

    // Function call
    bool flag = check_sorted(arr,n);

    if(flag==false)
    {
        cout<<"Array is not sorted"<<endl;
    }
    else
    {
        cout<<"Array is sorted";
    }
    return 0;
}
