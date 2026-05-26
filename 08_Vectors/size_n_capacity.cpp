// size determines the size of the vector
// capacity determines how many elements the vector can store.


#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int>  v;

    // Initial size and capacity of vector. --> when no element is inserted yet.

    cout<<"Initial size of vector is:"<<v.size()<<endl;     // default is : 0
    cout<<"Initial capacity of vector is:"<<v.capacity()<<endl; // default is : 0


    // Lets add some elements.
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // After adding 3 elements , let's check size and capacity.

    cout<<"Size after insertion of 3 elements:"<<v.size()<<endl;
    cout<<"Capacity after insertion of 3 elements:"<<v.capacity()<<endl;

    v.push_back(40);

    cout<<"Size after insertion of 4 elements:"<<v.size()<<endl;
    cout<<"Capacity after insertion of 4 elements:"<<v.capacity()<<endl;

    v.push_back(50);

    cout<<"Size after insertion of 5 elements:"<<v.size()<<endl;
    cout<<"Capacity after insertion of 5 elements:"<<v.capacity()<<endl;


    // When size hits the capacity of the vector , capacity of the vector automatically doubbles the original capacity.

    return 0;
}
