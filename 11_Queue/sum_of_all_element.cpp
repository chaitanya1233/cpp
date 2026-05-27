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


    // Logic to find sum of all elements in queue.

    int sum_ele = 0;

    while(!q.empty())
    {
        sum_ele += q.front();
        q.pop();
    }

    cout<<"Sum of the queue elemnts is:"<<sum_ele<<endl;

    return 0;
}


