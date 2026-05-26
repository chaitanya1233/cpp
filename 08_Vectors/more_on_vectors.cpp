#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // Define vector without initialization
    vector<int> v;


    //  Define vector with initialization
    vector<int> v1(3,5); //--> This creates [5,5,5]

    // Hear , v1(3,5) represents:
    // - create a vector of 5 three times.

    // Let's verify the outout.

    cout<<"V1 vector is:";
    for(int x:v1)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    // if you wana remove  the last element --> pop_back()


    v1.pop_back();

    cout<<"V1 vector after pop_back():";
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    return 0;
}

