#include <iostream>

using namespace std;


void swap_values(int x , int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout<<"Values after swapping......................."<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
}

int main()
{

    int x  = 10;
    int y = 30;

    cout<<"Values before swapping......................."<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"---------------------------------------------"<<endl;
    swap_values(x,y);
    return 0;
}
