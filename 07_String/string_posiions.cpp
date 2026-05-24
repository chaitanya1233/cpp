#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name = "Chaitanya";

    // which is the character present at position 5
    cout<<"Character at position 5 :"<<name.at(5)<<endl;


    // You can modify the string using .at()
    name.at(1) = 'Y';

    cout<<"Name after modification:"<<name<<endl;
    return 0;
}


