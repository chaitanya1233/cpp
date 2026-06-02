#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int absDiff = 0;
    int DigSumA = 0;
    int DigSumB = 0;

    int n = arr.size();

    for(int i = 0;i<arr.size();i++)
    {
        // Primary daigonal sum
        DigSumA += arr[i][i];

        // Secondary daigonal sum
        DigSumB += arr[i][n-i-1];
    }

    cout<<DigSumA<<" "<<DigSumB<<endl;
    absDiff = abs(DigSumA - DigSumB);
    return absDiff;
}

int main()
{

    // Initializing a 3x3 2D vector
    vector<vector<int>> arr = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };

    int absDiff = diagonalDifference(arr);
    cout<<"The absolute difference is:"<<absDiff<<endl;
    return 0;
}

