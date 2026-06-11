#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};


    int n = sizeof(arr)/sizeof(arr[0]);


    // Define left and right pointers
    int *left = arr;
    int *right =arr + n - 1;

    cout<<"Left pointer pointing to:"<<*left<<endl;
    cout<<"Right pointer pointing to:"<<*right<<endl;

    return 0;
}
