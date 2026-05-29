
// For every element find : first smaller element on the RIGHT side

#include <iostream>
#include <stack>

using namespace std;

void first_smaller(int arr[], int n)
{

    // Array to store result.
    int ans[n];

   // Initialize stack to store next small smaller number.
    stack<int> st;


    // Initial array before opration
    cout<<"Initial array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Logic to find next smaller number.
    // Traverse from RIGHT to LEFT
     for(int i = n-1;i>=0;i--)
     {
        // Remove the element from the stack if it is greater than the current element
        // Meaning stack only stores the smallest number.

        while(!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }

        // If stack is empty :ANS = -1
        if(st.empty())
        {
            ans[i] = -1;
        }

        // If stack is not empty : Meaning our stack has smallest element right on top.

        else{
            ans[i] = st.top();   // ANS = top element.
        }

        // Push the element to stack.
        st.push(arr[i]);

    }

    // Print the next smaller result
    cout<<"Output array is:";
    for(int x:ans)
    {
        cout<<x<<" ";
    }

}
int main()
{

    int arr[] = {4,8,5,2,25};
    int n = sizeof(arr)/sizeof(arr[0]);

    first_smaller(arr,n);
    return 0;
}
