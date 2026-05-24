// Range based for loop.


#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name = "Chaitanya";

    // Range based for loop.
    for(char c : name){
        cout<<"("<<c<<")"<<", ";
    }

    return 0;
}
