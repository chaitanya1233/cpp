#include <iostream>

using namespace std;

// Define a function to check wether an array is palindrom or not.
bool is_palindrome(int arr[], int n)
{
    bool flag =  true;
    for(int i =0;i<n/2;i++)
    {
        if(arr[i] == arr[n-i-1])
        {
            continue;
        }
        else
        {
            flag =  false;
            break;
        }
    }
    return flag;
}
int main()
{

    // Define an array

    int arr[] = {6473,1,4,3,4,1,6473};

    // size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Function call
    bool flag = is_palindrome(arr,n);

    if(flag)
    {
        cout<<"Given array is palindorme!";
    }
    else
    {
        cout<<"Array is not palindrome!";
    }
    return 0;
}
