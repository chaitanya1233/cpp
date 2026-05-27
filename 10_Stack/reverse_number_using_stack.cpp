// Reverse a number using stack

#include <iostream>
#include <stack>
#include <string>


using namespace std;

string reverse_number(int num)
{

    // Define a stack
    stack<int> st;

    // Convert a integer number into string_number

    string str_num = to_string(num);

    // Loop to push element in stack

    for(char ch : str_num)
    {
        st.push(ch);
    }

    // Iterate over stack to get out reverssed number
    string ele = "";
    while(!st.empty())
    {
         ele += st.top();
        st.pop();
    }
   return ele;
}

int main()
{

    int num = 1234;

    // Logic to reverse the number.
    int rev_num = stoi(reverse_number(num));
    cout<<"The reversed number is:"<<rev_num;

    return 0;
}
