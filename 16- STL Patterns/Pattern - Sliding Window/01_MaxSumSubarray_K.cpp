#include <iostream>
#include <vector>


using namespace std;

int MaxSumSlidingWindow(vector<int> &arr,int k)
{
    int n = arr.size();
    int maxSum  = INT_MIN, windowSum = 0;

    // calculate the sum of first window
    for(int i = 0;i<k;i++)
        windowSum  += arr[i];

    maxSum = windowSum;

    // Slid the window
    for(int i = k;i<n;i++)
    {
        windowSum += arr[i] - arr[i-k];
        // Update the maxSum
        if(maxSum < windowSum)
        {
            maxSum = windowSum;
        }
    }
    return maxSum;
}

int main()
{
    vector<int>  arr = {2, 1, 5, 1, 3, 2};

    int k = 3;

    int maxSum = MaxSumSlidingWindow(arr,k);
    cout<<"Max sum of sliding window is:"<<maxSum<<endl;


     // Test 2
    vector<int> arr2 = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;

    cout << "Test 2 result: " << MaxSumSlidingWindow(arr2, k2) << " (expected: 39)" << endl;

    return 0;
}
