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
    q.push(50);


    // Logic to find size = number of elements in queue.

    int count_ele = 0;

    while(!q.empty())
    {
        count_ele++;
        q.pop();
    }

    cout<<"Size of the queue is:"<<count_ele<<endl;

    return 0;
}


