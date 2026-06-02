#include <iostream>
#include <vector>
#include <climits>
#include <algorithm> // for min and max if needed, though we can do it manually

using namespace std;

void miniMaxSum(vector<int> arr) {
    long totalSum = 0;
    long minElement = INT_MAX;
    long maxElement = INT_MIN;

    // Single pass to find total sum, min element, and max element
    for (int i = 0; i < arr.size(); i++) {
        totalSum += arr[i];

        // Find  the minimum element
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
        // Find the maximum element
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    // Min sum excludes the largest element;
    // Max sum excludes the smallest element
    long minSum = totalSum - maxElement;
    long maxSum = totalSum - minElement;

    cout << minSum << " " << maxSum << endl;
}

int main() {
    vector<int> arr = {7, 69, 2, 221, 8974};
    miniMaxSum(arr);
    return 0;
}
