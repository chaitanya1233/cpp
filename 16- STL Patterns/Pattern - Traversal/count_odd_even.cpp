#include <iostream>

using namespace std;

int main()
{

    int arr[] = {1,2,3,4,5,7,8,10,11,13,12};

    int n =  sizeof(arr)/sizeof(arr[0]);

    int even_count = 0;
    int odd_count = 0;


    // Traverse array to get counts of even and odd

    for(int i = 0;i<n;i++)
    {
        if(arr[i]%2) // If it returns 1 only execute this 'if' block
        {
            odd_count++;
        }
        else // If output of 'if' block condition is 0 then this 'else' block will execute.
        {
            even_count++;
        }
    }

    cout<<"Odd count:"<<odd_count<<endl;
    cout<<"Even count:"<<even_count<<endl;

    return 0;
}
