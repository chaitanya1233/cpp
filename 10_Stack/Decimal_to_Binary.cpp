#include <iostream>
#include <stack>

using namespace std;

string decimal_to_binary(int decimal)
{

    // Define a stack
    stack<char> st;
    int remainder;

    while(decimal > 0)
    {
      remainder = decimal % 2 ;
      st.push(remainder);
      decimal/= 2;
    }

    // Read the stack
    string binary = "";
    while(!st.empty())
    {
        binary += to_string(st.top());
        st.pop();
    }
    return binary;
}


int main()
{
    // Define a stack

    stack<char> st;

    int decimal;
    cout<<"Enter the any decimal number:";
    cin>>decimal;

    string binary = decimal_to_binary(decimal);
    cout<<"The Binary of "<<decimal<<" is:"<<stoi(binary)<<endl;
    return 0;
}
