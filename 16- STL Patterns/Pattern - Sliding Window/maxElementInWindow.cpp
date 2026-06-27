#include <iostream>
#include <vector>


using namespace std;

vector<int> MaxElementInWindow(vector<int> &arr,int k)
{
    vector<int> res;
    int  n = arr.size();
    int windowMax = 0;

    // find the maximum element for first window.
    for(int i = 0;i<k;i++)
    {
        if(arr[i] > windowMax)
        {
            windowMax = arr[i];
        }
    }
    res.push_back(windowMax);


    // Sliding the window.
    for(int i = k;i<n;i++)
    {
        if(arr[i-k+1] > 0)
        {
            windowMax = arr[i];
        }
        res.push_back(windowMax);
    }
    return res;

}


int main()
{
    vector<int> arr = {5,2,4,4,5,6,3,2,5};
    int k = 3;
    vector<int> v = MaxElementInWindow(arr,k);

    for(int x : v)
    {
        cout<<x<<" ";
    }

    return 0;
}
