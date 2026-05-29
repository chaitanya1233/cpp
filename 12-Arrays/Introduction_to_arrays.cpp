#include <iostream>

using namespace std;

int main()
{

    // Array is a collection of elements stored in a
    // contigeous memory fashion

    // example

    int arr[5] = {1,2,3,4,5};

    /*
    Memory looks like :

    index  0 1 2 3 4
    value  1 2 3 4 5

    # Properties of array:
        - Fixed size
        - Same datatype
        - Contigeous memory allocation
        - Index based access

    */


    //  Ways to declare array

    //int arr[];  // Invalid
    int arr2[5];


    // Partial initialization

    int  x[4] = {1,2};  // Remaing elements becomes 0 ==> output will  be: 1,2,0,0

    // Initialize all elements as 0
    int zeros[5] = {0};    // Output : 0 0 0 0 0


    // If you wana compiler to automatically identify size of the array
    int arr3[] ={1,2,3,4,5,6,7};  // Compiler counts size automatically.

    return 0;
}
