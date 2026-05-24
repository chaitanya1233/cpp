
/*
Imagine you are parsing data from an online store. The system gives you this messy item string:

string itemData = "Gym_Weights:$1200";

Your task is to extract the numeric price portion (1200),

 convert it into an actual integer, give the user a $100 discount,

and print out the final numeric total.

*/


#include <iostream>
#include <string>

using namespace std;

int main()
{

    string itemData = "Gym_Weights:$1200";

    int discount = 100;  // In dollers($)


    // Extract the numerical portion.

    int start_index = itemData.find("1200");
    cout<<start_index<<endl;

    string numeric_string = itemData.substr(start_index,4);
    cout<<"Numeric string is:"<<numeric_string<<endl;

    // convert the numeric string into integer.

    int price = stoi(numeric_string);
    int discounted_price = price - discount;

    cout<<"The final discounted price is:"<<discounted_price<<endl;
    return 0;
}
