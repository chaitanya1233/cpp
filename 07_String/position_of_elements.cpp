#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Chaitanya";

    cout<<"Element at position 0 is:"<<name.at(0)<<endl;
    cout<<"Element at last position is:"<<name.at((name.length()-1))<<endl;

    return 0;

}
