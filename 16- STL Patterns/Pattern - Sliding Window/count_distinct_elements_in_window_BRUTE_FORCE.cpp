#include <iostream>
#include <vector>
#include <set>


using namespace std;

void CountDitinctSubarray(vector<int> arr,int k)
{
    vector<int> v;
    set<int> s;
    int n = arr.size();
    for(int i = 0;i<n-k+1;i++)
    {
        for(int j = i;j<i+k;j++)
        {
            cout<<arr[j]<<" ";
            s.insert(arr[j]);

        }
        v.push_back(s.size());
        s.clear();
        cout<<endl;
    }

    cout<<"The distinct elements counts array:";
    for(int x : v)
    {
        cout<<x<<" ";
    }

}
int main(){

    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};

    int k = 3;

CountDitinctSubarray(arr,k);

    return 0;
}
