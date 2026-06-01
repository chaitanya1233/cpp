#include <iostream>

using namespace std;

int main()
{
    int arr[4][4] =
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,1,2,3},
        {4,5,6,7}
    };

    int rows =  4;
    int cols =  4;

    int sum = 0;

    int counts = 1;


    // Print the all HourGlass with their sum.

    for(int i = 0;i<rows-2;i++)
    {
        for(int j = 0;j<cols-2;j++)
        {

            cout<<"Histogram : "<<counts++<<endl;

            cout<<endl;-
            // Top row
            cout<<arr[i][j]<<" ";
            cout<<arr[i][j+1]<<" ";
            cout<<arr[i][j+2]<<" ";
            cout<<endl;
            // Middle row
            cout<<" ";
            cout<<arr[i+1][j+1]<<" ";
            cout<<" "<<endl;
            // bottom row
            cout<<arr[i+2][j]<<" ";
            cout<<arr[i+2][j+1]<<" ";
            cout<<arr[i+2][j+2]<<" ";

            cout<<endl;

            cout<<endl;

            sum  = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            cout<<"Sum is:"<<sum<<endl;
        }



    }


    return 0;
}
