
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;



    // push() will insert element into queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Access the first element of the queue.
    cout<<"First element of the queue:"<<q.front()<<endl;

    // Access the last element of the queue.
    cout<<"Last element of the queue:"<<q.back()<<endl;

    //  Check if queue is empty or not
    cout<<"IS queue empty:"<<q.empty();

    // What is the size of the queue
    cout<<"Size of the queue is:"<<q.size()<<endl;


    return 0;
}
