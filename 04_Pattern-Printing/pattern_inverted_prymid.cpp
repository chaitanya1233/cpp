#include <iostream>

using namespace std;

int main()
{

    // Print the inverted perymid.

    // Method 1 : Without_formula

    int n;
    cout<<"Enter the limit:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
      for (int j = 1; j <= i - 1; j++) {
        cout << " ";
      }
       for(int j = n;j>=i;j--)
       {
           cout<<"*";

       }
      cout<<endl;
    }




    return 0;
}

