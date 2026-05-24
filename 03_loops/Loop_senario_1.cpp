


// Question 1: The Countdown (Basic for Loop)Scenario: You need to simulate a rocket launch countdown.Task:


    //Write a program that asks the user for a positive starting integer $N$. Use a loop to count down from $N$ to 1, p

    // rinting each number on a new line. After 1, print "Liftoff!".LeetCode Twist: Ensure your loop handles an input

    // of 0 gracefully without going into a negative infinite loop.


#include <iostream>

using namespace std;

int main(){
    int countdown = 5;

    while(countdown != 0)
    {
        countdown -= 1;
        cout<<countdown<<endl;
        if (countdown == 0){
            cout<<"TakeOFF";
            break;
        }
    }

return 0;
}
