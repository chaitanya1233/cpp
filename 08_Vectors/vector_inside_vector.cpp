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


    // Define a another vector.

    vector<vector <int>> v2;

    // store v1 inside v2.
    v2.push_back(v1);

    // Traverse across the the 2D vector.

    for(int i = 0; i<v2.size();i++)
    {
        for(int j= 0;j<v2[i].size();j++)
        {
            cout<<v2[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}
