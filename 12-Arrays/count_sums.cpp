#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};


    int counter = 0;

    for(int i =0;i<n;i++)
    {
        // Check if number is even or not
        if(arr[i]%2)
        {
            counter++;
        }
        else
        {
            continue;
        }
    }
    cout<<"Even numbers are:"<<counter;
    return 0;
}
