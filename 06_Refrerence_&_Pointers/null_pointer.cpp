

// nullptr


// One of the most important properties of pointers is that they can point to nothing.

// This is called a nullptr. It is incredibly useful for checking if a pointer is safe to use before you accidentally crash your program by dereferencing
// a bad address.


#include <iostream>

using namespace std;

int main()
{
    // Create a pointer that points to nothing.

    int* ptr = nullptr;

    // Always check if pointer is valid, before dereferencing it

    if(ptr!=nullptr){
        cout<<"Value of the pointer is:"<<*ptr<<endl;
    }
    else{
        cout<<"Pointer is null!,it is currently points to nothing."<<endl;
    }

    int safevalue = 10;
    ptr = &safevalue;

    if(ptr!=nullptr){
        cout<<"Now it is safe."<<endl;
    }
    return 0;
}


