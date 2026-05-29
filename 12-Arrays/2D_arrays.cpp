#include <iostream>

using namespace std;

int main()
{

    // Declare two dimenstional array

    int two_dim_array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // iterate over elements to print it

    // for loop
    int n = sizeof(two_dim_array)/sizeof(two_dim_array[0]);
    cout<<"Two dimensional array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<two_dim_array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
