#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(){

    vector<int> v = {1,2,31,4,5,6,7,8,9,101};

    int even_count = 0;

    for(auto it=v.begin();it!=v.end();it++)
    {
        if(*it%2==0)
        {
            even_count++;
        }
        else{
            continue;
        }
    }
    cout<<"Even values in a vector are:"<<even_count;
    return 0;
}
