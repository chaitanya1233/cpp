#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // Take a input of how many elements you want in vector
    int n;
    cout<<"How many elements you want in vector?";
    cin>>n;
    cout<<endl;

    // Define the integer vector.

    vector<int> v;

    // Loop to take input of the elements in vector
    for(int i;i<n;i++)
    {
        int x;
        cout<<"Enter element at "<<i<<" index:";
        cin>>x;
        v.push_back(x);
    }


    // traverse the vector.
    cout<<"Vector is:";
    for(int ele:v)
    {
      cout<<ele<<" ";
    }
    return 0;
}
