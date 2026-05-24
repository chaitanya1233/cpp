

// Write a for loop that iterates from 1 to 20. Print each number, except if the number is a multiple of 3.

// If it is a multiple of 3, skip it entirely using the continue keyword.


// Expected Output format: 1 2 4 5 7 8 10...



#include <iostream>

using namespace std;

int main(){

    for(int i =1;i<=20;i++){
        if(i%3){
           cout<<i<<endl;
        }
        else{
            continue;
        }
    }

return 0;
}





