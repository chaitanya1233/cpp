// In C++, pointers and references are both mechanisms used to deal with memory, memory addresses, and data in a program.


// # Pointers in C++

/*
Pointers in C++ are a symbolic representation of addresses. They enable programs to simulate call-by-reference and create
 and manipulate dynamic data structures.

    Pointers store the address of variables or a memory location.

    Can be reassigned to point to another variable

    Can be nullptr

    Requires dereferencing to access the value

    Has its own memory address

*/


#include <iostream>

using namespace std;

int main()
{

    // Create a variable called x
    int x = 10;

    // Create a pointer to x named temp
    int* temp;

    // Storing adress of the x in temp
    temp =  &x;

    // Print the value of the x and temp
    cout<<"The value of the x is :"<<x<<endl;
    cout<<"The value of the temp is:"<<temp<<endl;   // Temp is storing the adress of the x


    // Print the value of the x using pointer temp
    cout<<"The value of the x using temp pointer:"<<*temp<<endl;

    // Check the adress of the pointer itself
    cout<<"Adress of the pointer is :"<<&temp<<endl;  // Though the pointer holds the adress of the another variable, it has it's own adress.



    return 0;
}
