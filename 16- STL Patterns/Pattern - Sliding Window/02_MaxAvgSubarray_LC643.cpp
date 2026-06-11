#include <iostream>
#include <vector>

using namespace std;


float AvgMaxSumSubarray(vector<int> &arr,int k)
{
    int n = arr.size();

    int windowSum = 0;
    int maxSum = INT_MIN;

    // calculate the sum of first window.
    for(int i = 0;i<k;i++)
        windowSum += arr[i];

    maxSum = windowSum;


    // Slid through the window
    for(int i = k;i<n;i++)
    {
        windowSum += arr[i] - arr[i-k];

        if(windowSum > maxSum)
        {
            maxSum  = windowSum;
        }
    }
    return float(maxSum)/k;
}

int main()
{

    vector<int> arr = {1, 12, -5, -6, 50, 3};
    int k  = 4;
    float avg = AvgMaxSumSubarray(arr,k);
    cout<<"Average max sum of subarray is :"<<avg<<endl;
    return 0;
}
