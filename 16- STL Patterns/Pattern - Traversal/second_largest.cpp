#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};

    int largest = INT_MIN;
    int second_largest = arr[0];

    // Size of the array
    int n = sizeof(arr)/sizeof(arr[0]);
    // Traverse through array.
    for(int i = 0;i<n;i++)
    {

        // For every element , check if it is greater than largest.
         //   --> If it is then it is a largest
          //  and privious largest element is second largest.

        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }

        // Now , sometimes we do not get the sorted array, to handel that case we need to check...

            // We get element which is greater than second largest and smaller and not equals to largest


            // Ex. largest = 5;
            // current element / arr[i] = 4;
            // second largest = 3;

            // so in such cases , second_largest becomes wrong , to handel that cases following is written:

        else if(second_largest > arr[i] && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    cout<<"Second Largest:"<<second_largest<<endl;
    return 0;
}
