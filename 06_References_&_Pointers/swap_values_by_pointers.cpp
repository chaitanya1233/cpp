#include <iostream>

using namespace std;


void swap_values(int* x , int* y)
{
    // Create a temp variable
     int temp;

     // Assign the value of x pointer to temp
     temp = *x;

     // Overwrite the value of x by y i.e 10 by 30
     *x = *y;

     // Now , overwrite the value of y, by temp , i.e  30 by 10.

     *y = temp;

    cout<<"Values after swapping......................."<<endl;
    cout<<"x:"<<*x<<endl;
    cout<<"y:"<<*y<<endl;
}

int main()
{

    int x  = 10;
    int y = 30;

    cout<<"Values before swapping......................."<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"---------------------------------------------"<<endl;
    swap_values(&x,&y);
    return 0;
}
