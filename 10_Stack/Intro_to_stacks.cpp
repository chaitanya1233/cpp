#include <iostream>

// Stack header file
#include <stack>

using namespace std;

int main()
{
    /*
    A stack is a linear data structure that follows:

        ==> LIFO = Last In First Out meaning , last inserted element will go out first.

        Example :

               . Browser back button
               . Undo operation
               . Call stack in functions
               . Expression evaluation
               . Parentheses matching

   -->    Stack Visualization:

                  Push 10
                    [10]

                    Push 20
                    [20]
                    [10]

                    Push 30
                    [30]
                    [20]
                    [10]

                    Pop
                    [20]
                    [10]
    */


    // Creating a stack
    stack<int> st;


    return 0;
}
