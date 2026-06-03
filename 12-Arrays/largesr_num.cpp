#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1,2,323,3,4,6,42,6};

    int largest = INT_MIN;
    int n =  arr.size();

    for(int i =0 ;i<n;i++)
    {
        if(arr[i]> largest)
        {
            largest = arr[i];
        }
    }
    cout<<"Largest:"<<largest<<endl;

    return 0;
}
