#include <iostream>

using namespace std;


int main()
{
    int n = 6;

    // For rows
    for(int i = 1;i<=n;i++)

    {
        // Spaces
        for(int j = 0;j<=n-i-1;j++)
        {
            cout<<" ";
        }

        // Starts
        for(int j = 1 ;j<=i;j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }

    return 0;
}
