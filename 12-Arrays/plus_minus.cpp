#include <iostream>
#include <vector>
#include <iomanip>  // Required for setprecision and fixed


using namespace std;

void plus_minus(vector<int> arr)
{
     float pos = 0;
    float neg = 0;
    float zeros = 0;
    int n =  arr.size();
    for(int i = 0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i] == 0)
        {
            zeros++;
        }
        else
        {
            neg++;
        }
    }

    cout<<pos<<":"<<neg<<":"<<zeros<<" "<<endl;

    cout<<fixed<<setprecision(6)<<pos/n<<endl;
    cout<<fixed<<setprecision(6)<<neg/n<<endl;
    cout<<fixed<<setprecision(6)<<zeros/n<<endl;


}

int main()
{
        vector<int> arr = {-4,3,-9,0,4,1};


        plus_minus(arr);

    return 0;

}
