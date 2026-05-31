#include <iostream>

using namespace std;

int main()
{
    // Define array
    int arr[] = {1,2,4,7,11,15};

    // traget sum
    int target = 15;

    // size of array
    int n = sizeof(arr)/sizeof(arr[0]);


    // Define two pointers

    int *left =  arr;
    int *right = arr + n - 1;


    // Find wether there exists a  pair of elements whose sum is target
    while(right >= left)
    {
        int sum =  *left + *right;
        if(sum == target)
        {
            cout<<"("<<*left<<","<<*right<<")"<<":"<<" is pair."<<endl;
            break;
        }
        else if(sum > target)
        {
            right--; // Because , as array is sorted, left side elements are smaller than right side one.
        }
        else
        {
            left++;
        }
    }
    return 0;
}
