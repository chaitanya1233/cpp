#include <iostream>
#include <stack>

using namespace std;

int main()
{

    // Define a string

    string greet = "Hello Chaitanya";  // reverse should be: aynatiahC olleH

    // Define a stack and pass string to it

    stack<char> st;


    // Push every character of the string to stack
    for(char ch:greet)
    {
        st.push(ch);
    }


    //  Traverse through stack using st.empty()
    cout<<"Reverse of the string is:";
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}
