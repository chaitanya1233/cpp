#include <iostream>
#include <stack>

using namespace std;


bool is_balanced_parentheses(string s)
{

    stack<char> st;
    for(char ch : s)
    {
        // Check if ch =='('
        if(ch == '(')
        {
            // Push to the stack
            st.push(ch);
        }
        else if(ch == ')'){

        // check If stack is empty
            if(st.empty())
            {
                return 0;

            }
            st.pop();
        }
    }

    // Check if the stack is balanced or not.
    if(st.empty())
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    /*
    Very famous interview problem.

      - Input
        (()())

      - Output:
        Balanced

      - Logic

        Whenever:

        ( appears → push
        ) appears → pop

        If stack becomes invalid:
        → unbalanced

    */


    string s = "(()())";

    bool balanced = is_balanced_parentheses(s);

    if(balanced == 1)
    {
        cout<<"Balanced!";
    }
    else{
        cout<<"Unbalanced!";
    }
    return 0;
}
