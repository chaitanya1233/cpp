#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> arr;

    // add some elements

    arr.push_back(13);
    arr.push_back(23);
    arr.push_back(30);
    arr.push_back(31);
    arr.push_back(5);

    int largest_num = arr[0];

    for(int i = 1;i<arr.size();i++)
    {
        if(arr[i]>largest_num)
        {
            largest_num = arr[i];
        }
        else{
            continue;
        }
    }
    cout<<"largest number in an array is:"<<largest_num;
    return 0;
}
