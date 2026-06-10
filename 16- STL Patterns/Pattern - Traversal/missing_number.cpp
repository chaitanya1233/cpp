#include <iostream>

using namespace std;

int main()
{

    int arr[] = {3,2,1,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);
    // actual sum
    int actualSum = 0;

    for(int x : arr){
        actualSum += x;
    }

    // Estimated sum
    int estimatedSum = n*(n+1)/2;

    // missing number =  estimatedSum - actualSum;
    int missingNum = estimatedSum - actualSum;
    cout<<"Missing number is:"<<missingNum<<endl;

    return 0;

}

// Time complexity : O(n)
// Space complexity : O(1)
