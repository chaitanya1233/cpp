

/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/



#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    // Printing square pattern.
    for(int i =1;i<=n;i++)
    {
        // loop  for spaces
            // Loop for stars
            for(int j = 1;j<=n;j++){
                cout<<j<<" ";
            }
        cout<<endl;
    }

    return 0;
}
