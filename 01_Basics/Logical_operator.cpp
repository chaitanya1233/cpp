#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // Logical AND (&&)
    // Returns true (1) only if both conditions are true
    cout << "Is 'a' greater than 5 AND less than 15: "
         << ((a > 5) && (a < 15)) << endl;

    // Logical OR (||)
    // Returns true (1) if at least one condition is true
    cout << "Is 'a' less than 5 OR 'b' greater than 15: "
         << ((a < 5) || (b > 15)) << endl;

    // Logical NOT (!)
    // Negates the result of a condition
    cout << "NOT (a > 5): "
         << (!(a > 5)) << endl;

    // Logical OR : || : If one of the condition is true, then only is True.'

    cout<<"Is a is greater than b || is b is greater than a:"<<((a>b)||(b>a))<<endl;
    return 0;
}
