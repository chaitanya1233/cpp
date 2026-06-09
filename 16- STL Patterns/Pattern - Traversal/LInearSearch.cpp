#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10,20,30,50,40};

    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 20;
    int index = -1;
    bool flag = false;

    for(int i = 0;i<n;i++)
    {
        if(arr[i] == target)
        {
            flag = true;
            index = i;
            break;
        }
        else
        {
            continue;
        }
    }


    if(flag == true)
    {
        cout<<"Element found at index "<<index<<endl;
    }
    return 0;
}
