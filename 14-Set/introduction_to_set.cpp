// -> Map cares aboout key-values
// -> If values / frequency is not a consern then set is best to go for..

// -> Stores unique values (Non-repeating values)

// -> They only talk about keys.

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s; // Declaring a empty set

    // Insert some values to set

    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(20);

    // Resultant set will be : {5,10,20}

    return 0;
}
