#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> arr;

    // add some elements

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    // Do the sum of the elements
    int sum = 0;
    for(int ele : arr)
    {
        sum += ele;
    }

    cout<<"Sum of the elements is:"<<sum<<endl;

    return 0;
}
