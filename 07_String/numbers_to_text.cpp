// If you have numbers like integers or float , and wana
// glues them into a strings use ---> to_string()


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase = "My Salary is ";
    int salary = 100000;

    string sentence = phrase + to_string(salary);

    cout<<sentence<<endl;

    return 0;
}
