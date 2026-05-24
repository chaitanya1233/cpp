#include <iostream>

using namespace std;

int main(){


    string fullName;

    cout<<"Enter your fullName:";

    // Read the fullName with spaces , tabs and newlines.
    getline(cin,fullName);

    cout<<"I am "<<fullName<<endl;
return 0;
}
