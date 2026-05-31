#include <iostream>

using namespace std;

int main()
{

    // Define an array

    int arr[] = {1,2,3,5,6};


    // Size of array
    int n = sizeof(arr)/ sizeof(arr[0]);

    // Define left and right pointers
    int *left = arr;
    int *right =  arr + n -1;

    // Logic to reverse array.
    while(left < right)
    {
        swap(*left,*right);
        right--;
        left++;
    } // Hear both pointers are moving together

    // Print the array
    cout<<"Reversed array is:";
    for(int x : arr)
    {
        cout<<x<<" ";
    }
        return 0;
}
