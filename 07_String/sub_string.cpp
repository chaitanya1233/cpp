// Syntax blueprint:
// string piece = original_string.substr(start_index,



                                         // length =  How many characters to trip from the starting index.
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string address = "Chaitanya,11,Pune";

    // Task 1: Extract "Chaitanya"
    cout<<"Name:"<<address.substr(0,9)<<endl; // last Indexing is not excluded in c++

    // Task 2: Extract "21".
    string number = address.substr(10,2);
    cout<<"Number:"<<number<<endl;

    // Task 3: Extract City
    string city = address.substr(13,4);
    cout<<"City:"<<city<<endl;

    return 0;
}

