#include <iostream>

using namespace std;

int main()
{

    // Define array
    int arr[] = {0, 1, 0, 3, 12};

    // Size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Define pointers
    int left = 0; // Pointer to  next position for a non-zero
    int right = n - 1; // pointer to scan every element.

    // Logic to move zeros to end

    // Loop left to right
    for(int right = 0;right < n;right++)
    {
        // Check if non zero element found , if it is , then swap.
        if(arr[right] != 0)
        {
            swap(arr[left],arr[right]);
            left++;
        }
    }
    // Print the array
    for(int x : arr)
    {
        cout<<x<<" ";
    }

    return 0;
}
