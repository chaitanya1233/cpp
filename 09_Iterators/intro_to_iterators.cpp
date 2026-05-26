#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*
    An iterator is used to point to elements inside containers like:

        vector
        set
        map
        list
    it is like a smarter pointer.
   */


    // How to define iterator.

    vector<int>  v1 = {10,20,30,40,50};

    // Normally vectors can be acessed using indexs .


    // But not all do support index based accessing.

/*
    Example: STL's which do not provide index based accessing

        set
        map
        list

    So C++ gives a universal way to traverse containers:
    → Iterators
*/

    // How to define iterator.

    vector<int>::iterator it;   // it can point to elements of vector<int>


    it =  v1.begin();  // returns iterator pointing to first element.

    cout<<*it<<" ";  //  Iterator stores address-like reference so *(pointer)

    it++;

    cout<<*it;
    return 0;
}

