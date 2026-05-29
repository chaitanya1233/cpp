#include <iostream>

using namespace std;

int main()
{


    // Define an array
    int arr[5] ={1,3,56,63,22};

    // size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Varible to store largest value
    int largest = arr[0]; // assume largest element is first element of array

    // Go from index 1 to n- 1
    for(int i = 0;i<n;i++)
    {
        // Check if next element is greater , if it is then store it as largest
        if(largest < arr[i])
        {
            largest = arr[i];
        }
    }
    cout<<"Largest number is:"<<largest;

    return 0;
}
