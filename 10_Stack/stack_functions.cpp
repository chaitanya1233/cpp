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


    //2. st.pop(); ---> remove top element

    st.pop(); // it will remove top element of the stack i.e 40

    // Stack will be
    // [30]
    // [20]
    // [10]

     // 3. top(); --> It will retun the top element of the stack.
     cout<<"Top element of the stack is:"<<st.top()<<endl;

     // 4. empty()  ---> Checks if stack is empty or not.

     // If empty it will return 1 --> True
     // else 0 --> False

      cout<<"Is stack empty:"<<st.empty()<<endl;

    // 5. size(); ---> To check size of stack i.e Number of elements currently present in stack.
    cout<<"Size of the stack is:"<<st.size();

    return 0;

}
