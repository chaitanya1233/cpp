#include <iostream>
#include <vector>
#include <queue>



using namespace std;

vector<int> FirstNegativeIntegerInSubarray(vector<int> arr,int k)
{
    queue<int> q;
    vector<int> res;

    int n = arr.size();
    // check for the negative_num in first window.
    for(int i = 0;i<k;i++)
    {
        if(arr[i] < 0)
        {
            q.push(arr[i]);
        }
    }

    if(q.empty())
    {
        res.push_back(0);
    }
    else
    {
        res.push_back(q.front());
    }


    for(int i = k;i<n;i++)
    {
        // remove the element which is leaving the window , if it is negative.
        if(!q.empty() && q.front() == arr[i-k])
        {
            q.pop();
        }

        // add the negative number.
        if(arr[i] < 0)
        {
            q.push(arr[i]);
        }

        if(!q.empty())
        {
            res.push_back(q.front());
        }
        else
        {
            res.push_back(0);
        }
    }
   return res;
}

int main()
{
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};

    int k = 3;

    vector<int> v = FirstNegativeIntegerInSubarray(arr,k);
    for(int x : v)
    {
        cout<<x<<" ";
    }
    return 0;
}
