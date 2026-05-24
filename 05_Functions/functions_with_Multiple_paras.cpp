#include <iostream>

using namespace std;


// Function with multiple parameters.

void greet_user(string name , int age){
    cout<<"Hello, I am  "<<name<<" and "<<age<<" is my age."<<endl;
}

int main(){

    int age;
    string name;


    // Take input of name
    cout<<"Enter your name:";
    getline(cin,name);



    // Take input of age

    cout<<"Enter your age:";
    cin>>age;


    // Function call
    greet_user(name,age);

return 0;
}
