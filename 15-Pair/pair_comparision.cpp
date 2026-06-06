/*

 ?  How does comparision works :

     # Rule 1

       - Compare first values. ex.
            [
            {1,2},
            {2,4}
            ]
             1 vs 2
             1 < 2
             so , {1,2} < {2,4}

     # Rule 2

        - If first values are equal: compare second values
        ex.
            [
            {1,2},
            {1,4}
            ]

            2 vs 4
            2 < 4
            so {1,2} < {1,4}
*/

#include <iostream>
#include <vector>

using namespace std;


int main()
{

    vector<pair<int,int>> vp;

    // insert some pairs.
    pair<int ,int> a = {1,20};
    pair<int ,int> b = {2,30};

    vp.push_back(a);
    vp.push_back(b);

    // Compare pair a and pair b

    cout<<"Is pair a greater than b :"<<(a>b);
    return 0;
}
