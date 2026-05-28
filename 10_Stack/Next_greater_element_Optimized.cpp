
/*

Problem 1 — Next Greater Element (Stack)
Difficulty

Intermediate

Problem Statement

Given an array:

2 1 5 3 4

For every element, find:

first greater element on the RIGHT side

Output:

5 5 -1 4 -1


Explanation:

Element	Next Greater
2	5
1	5
5	-1
3	4
4	-1

Hint

Use:

stack
traverse from RIGHT to LEFT

Because stack helps track possible greater elements.

*/




#include <iostream>
#include <stack>
#include <vector>



using namespace std;

void next_greater(vector<int> &arr)
{
    int n = arr.size();
    int ans[n];
    stack<int> st;

    int next = -1;


    for(int i = n-1;i>=0;i--)
    {

         // remove smaller or equal elements.
         while(!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        // if stack is empty : No greater element

        if(st.empty())
        {
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }

    // Loop over ans
    for(int x: ans)
    {
        cout<<x<<" ";
    }
}

int main()
{
    vector<int> arr = {2,1,5,3,4};


    next_greater(arr);

    return 0;
}
