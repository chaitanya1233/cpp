/*
# EXAMPLE 1 :

Input :
   n = 3

Output :

    ***
    ***
    ***
--------------------------

# EXAMPLE 2 :

Input :
   n = 6

Output :

    ******
    ******
    ******
    ******
    ******
    ******

*/

#include<iostream>
using namespace std;

int main()
{

    int n = 3;

    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}



