#include <iostream>
#include <queue>

using namespace std;

int main()
{
    /*
       - Queue follows :FIFO --> First in First out

       - First inseted element comes out first.

            ex , Peoples standing in a row

        - Queue Visualization :

        Push 10 → [10]

        Push 20 → [10 20]

        Push 30 → [10 20 30]

        Pop → removes 10

    */



    //  Creating a queue
    queue<int> q;



    // Push()  --> Insert element

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // pop() --> Remove element

    q.pop();


    // Loop over queue. --> Index based accessing is not possible in queue.

    // Iterators is not supported to queue.

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}
