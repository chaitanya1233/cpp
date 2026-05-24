#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name = "Chaitanya Jagannath Kale";
    for(char &c:name)  // & before c lets us to edit the character of the string.
    {
        c = toupper(c);
    }
    cout<<name<<endl;
    return 0;
}


