#include <iostream>

using namespace std;

int main()
{
      // *
    //   **
    //   ***
    //   ****

    //Analysis: Total rows = $N$. For row i (starting at 1), we print exactly i stars.
    // Formula: Columns run from $1$ to $i$.
    int n;
    cout<<"Please enter limit:";
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
          cout<<"*";
        }
      cout<<endl;
    }

    return 0;
}
