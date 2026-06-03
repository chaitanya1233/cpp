#include  <iostream>
#include <map>

using namespace std;

int main()
{

    // Create a map of 4 students

    map<int, string> students;

    // Insert data in studnets map
    students.insert({1,"alice"});
    students.insert({2,"Dany"});
    students.insert({3,"Licifier"});
    students.insert({4,"Maze"});

    // Erase the student id = 1
    students.erase(1);

    // Check if it is present or not
    for(auto x: students)
    {
        if(students.find(1) != students.end())
        {
            cout<<"Found...";
            break;
        }
        else
        {
            cout<<"Data deleted successfully..";
            break;
        }
    }
    return 0;
}
