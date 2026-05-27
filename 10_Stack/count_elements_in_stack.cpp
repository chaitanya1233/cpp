#include <iostream>
#include <stack>

using namespace std;

int main()
{

    // Define a stack
    stack <int> st;

    int ele_count = 0;
    // Insert element in the stack

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    st.push(34);
    st.push(24);
    st.pop();


    // Logic to ccout elements in stack

    while(!st.empty())
    {
        st.pop();
        ele_count++;
    }
    cout<<"Element count in the stack is:"<<ele_count;

    return 0;
}

