#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    // Insert some elements
    q.push(10);
    q.push(20);
    q.push(30);


    // Queue does not support index based accessing , loops or iterators.

    // iterator over loop using empty()

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}


