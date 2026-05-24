// c++ provides a function called stoi(),
// Which converts a string formatted number  into a integer value.


#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tax = 100;
    string value = "540";

    int total = tax + stoi(value);
    cout<<"The total value is:"<<total<<endl;

    return 0;
}


