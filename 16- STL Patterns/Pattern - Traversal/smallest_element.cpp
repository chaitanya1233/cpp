#include <iostream>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,-10-};

    int smallest = INT_MAX;
    int n = sizeof(arr)/sizeof(arr[0]);


    for(int i = 0;i<n;i++)
    {
       if(arr[i] < smallest)
       {
            smallest = arr[i];
       }
    }

    cout<<"Smallest element is:"<<smallest<<endl;
    return 0;
}
