#include <iostream>
#include <vector>

using namespace std;

bool search_element(vector<int> v1,int ele)
{
    bool flag = 0;
    for(int i = 0;i<v1.size();i++)
    {
        if(v1[i] == ele)
        {
            flag = 1;
            cout<<"At index "<<i<<" ";
            break;
        }
        else
        {
            continue;
        }
    }

}

int main()
{

    // Define vector with some values.

    vector<int>  v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);


    // Logic to search perticular element in an vector

    int ele;

    cout<<"Enter element you are searching for:";
    cin>>ele;

    // Function call.
    bool flag = search_element(v1,ele);


    // Check if the element was found.
    if(flag == 1)
    {
        cout<<"we found element!";
    }
    else{
        cout<<"Element not found!";
    }
    return 0;
}
