#include <iostream>
#include <vector>


using namespace std;

int main()
{

 // Define vector with some values.

    vector<int>  v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    // Logic to reverse vector ---> Result should be : 50 40 30 20 10

    int n = v1.size();
    for(int i = 0;i<(n/2)-1;i++)
    {

      int temp  = v1[i];
      v1[i] = v1[n-i-1];
       v1[n-i-1] = temp;
    }

    cout<<"The reversed vector is:"<<endl;

    for(int x : v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}

