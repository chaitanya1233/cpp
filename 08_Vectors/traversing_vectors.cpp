// There are mainly two ways to traverse an vector.
    // 1. for loop
    // 2. range based loop


#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int>  v1;


    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    // Method 1 : for loop
    cout<<"For loop:";
    for(int i;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    // Method 2 : Range based loop

    cout<<"Range based loop:";
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    return 0;
}
