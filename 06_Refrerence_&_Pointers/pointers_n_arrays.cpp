#include <iostream>

using namespace std;

int main()
{

    int arr[] = {1,2,4,5,6};

    int *p = arr; // P points to arr[0]

    cout<<*p<<endl; // 1
    cout<<*(p+1)<<endl; // 2  (Moved 4 bytes)
    cout<<*(p+2)<<endl;  // 4 (Moved 8 bytes)

    p++; // p pointing to arr[1]

    return 0;
}
