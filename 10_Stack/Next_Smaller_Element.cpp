
// For every element find : first smaller element on the RIGHT side

#include <iostream>
#include <stack>

using namespace std;

void first_smaller(int arr[], int n)
{

    // Array to store result.
    int ans[n];
    stack<int> st;

    for(int i = n;i<=0;i--)
    {
        while((!st.empty()) && (st.top()<=arr[i]))
        {
            st.pop();
        }
        if(st.empty())
        {
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
    }

    // Print the next smaller result

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
