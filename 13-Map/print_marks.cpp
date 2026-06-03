#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int> marks;

    marks["Chetan"] = 95;
    marks["Rahul"] = 88;

    // How do you print Rahul's marks using find()?
    auto it = marks.find("Rahul");

    // print the marks
    cout<<it->second;

    return 0;
}
