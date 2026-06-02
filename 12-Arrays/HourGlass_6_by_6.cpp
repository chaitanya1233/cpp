#include <iostream>

using namespace std;

int main()
{
    int arr[6][6] =
    {
        {1,2,3,4,5,6},
        {5,6,7,8,9,0},
        {9,1,2,3,4,5},
        {4,5,6,7,7,-8},
        {-9,-9,4,5,-6,0},
        {0,0,-3,5,2,6}
    };

    int rows = 6;
    int cols = 6;
    int counts = 1;

    for(int i = 0;i<rows-2;i++)
    {
         for(int j = 0;j<cols-2;j++)
        {


            cout<<"HourGlass : "<<counts++<<endl;

            // Top tow
            cout<<arr[i][j]<<" ";
            cout<<arr[i][j]<<" ";
            cout<<arr[i][j]<<" ";

            cout<<endl;

            // Middle row

            cout<<" "<<" ";
            cout<<arr[i+1][j+1]<<" ";
            cout<<" "<<" ";
            cout<<endl;


            // Bottom row

            cout<<arr[i+2][j]<<" ";
            cout<<arr[i+2][j+1]<<" ";
            cout<<arr[i+2][j+2]<<" ";
            cout<<endl;
        }
    }

    return 0;
}
