/*
Imagine you want to write a tiny C++ program that asks a user for their checking account balance.

Since account balances can be negative (overdraft), should you use a standard double or an unsigned double?

And if you check if (balance), what happens if their balance is exactly 0?
*/

#include <iostream>
using namespace std;

int main()
{
    // I will go for double, since the balance can be both poisitve or negative.

    double balance = 0;

    cout<<"The current balance is:"<<balance<<endl;

    if (balance){
        cout<<"Have enough money to invest."<<endl;
    }
    else if (balance == 0){
        cout<<"There is no balance in account."<<endl;
    }
    else{
        cout<<"Please check your indetity first...";
    }

    return 0;
}


