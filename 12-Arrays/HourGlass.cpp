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

    int rows = 4;
    int cols = 4;

    int count = 1;

    for(int i = 0; i < rows - 2; i++)
    {
        for(int j = 0; j < cols - 2; j++)
        {
            cout << "Hourglass " << count++ << endl;

            // Top row
            cout << arr[i][j] << " ";
            cout << arr[i][j+1] << " ";
            cout << arr[i][j+2] << endl;

            // Middle
            cout << "  ";
            cout << arr[i+1][j+1] << endl;

            // Bottom row
            cout << arr[i+2][j] << " ";
            cout << arr[i+2][j+1] << " ";
            cout << arr[i+2][j+2] << endl;

            cout << endl;
        }
    }

    return 0;
}
