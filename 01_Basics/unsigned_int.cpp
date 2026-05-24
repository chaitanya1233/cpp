
/*
 Data Types: The Secret C++ Superpower


 C++ and Java share common primitives like int, double, and char.

 - However, C++ introduces a modifier that Java lacks:

    . unsigned.By default, an int is signed, meaning it can hold both negative and positive numbers.\

    . An unsigned variable can only hold positive numbers (and zero). Because it doesn't waste space tracking negative numbers,

    . it can store positive numbers twice as large as a normal integer.


    signed int ---> can store both negative and positive integers --> -2 Billion to +2 Billion (Range)

    unsigned int ---> can store only integers ---> 0 to  4 Billion (Range)

*/

#include <iostream>

using namespace std;

int main(){

    int x = 10;
    cout<<"Size of the x:"<<sizeof(x)<<endl;

    signed int y = 10;
    cout<<"Size of the y:"<<sizeof(y)<<endl;

    unsigned int z = 30;
    cout<<"Size of the z is:"<<sizeof(z)<<endl;

    // No matter what the datatype is : integer , signed int or unsigned int -->Size will be the same.


return 0;
}

