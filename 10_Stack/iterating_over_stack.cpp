#include <iostream>
#include <stack>

using namespace std;

int main()
{

    // Define a stack
    stack <int> st;


    // 1. push(x); ---> Insert element

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);


    /* Stacks do NOT support:

        indexing
        iterators

     So traversal is done by popping.
    */

    while(!st.empty())
    {
        cout<<st.top()<<" ";

        st.pop();

    }


    return 0;
}

