/*

References in C++

When a variable is declared as a reference, it becomes an alternative name for an existing variable.

A variable can be declared as a reference by putting '&' in the declaration.


 . There are 3 ways to pass C++ arguments to a function:

    1. call-by-value
    2. call-by-reference with a pointer argument
    3. call-by-reference with a reference argument

*/


#include <iostream>

using namespace std;

int main()
{
    // Create a variable named y
    int y = 10;

    // create a reference of y as temp
    int& temp = y;

    // Check the values of y and temp

    cout<<"The value of the y is:"<<y<<endl;
    cout<<"The value of the temp is:"<<temp<<endl;

    // Check the adress of the y and temp.

    cout<<"Adress of the y is :"<<&y<<endl;
    cout<<"Adress of the temp is :"<<&temp<<endl;  // Hear, temp is nothing but a another variable name for y.

    // Lets manipulate the value of the temp

    temp = 20;

    // Check the value of the y after changing the value of the temp
    cout<<"The value of y after changing the value temp is:"<<y<<endl; // y is also changed.


    return 0;
}
