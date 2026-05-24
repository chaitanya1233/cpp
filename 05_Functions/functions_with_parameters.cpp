#include <iostream>

using namespace std;

void greet_user(string name){
    cout<<"Hello "<<name<<" what's up!"<<endl;
}

int main()
{
    string name;
    cout<<"Enter user name:";
    // cin>>name;  --> This is contains only string up to space.

    // use getline() to get the string having string with the spaces , tabs....
    getline(cin,name);

    // Function call
    greet_user(name);
    return 0;
}
