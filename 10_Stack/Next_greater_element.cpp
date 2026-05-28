

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

using namespace std;


void next_greater_element(int arr[],int n)
{
    stack<int> st;

    // Push all the elements to the stack
    for(int i = 0;i<n;i++)
    {
        int next = -1;
        for(int j = i+1;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
          }
          cout<<next<<" ";
        }
}

// Loop over stack


int main()
{
    // Define array
    int arr[] = {2,1,5,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    next_greater_element(arr,n);

    return 0;
}


// --> This solution gives O(n2) time complexity.


