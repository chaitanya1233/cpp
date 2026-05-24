#include <iostream>

using namespace std;

int main(){

    int num = 92;

    if (num > 0){
        cout<<"Number is positive."<<endl;
    }
    if(num==0){
        cout<<"Number is equals to 0."<<endl;
    }
    else{
        cout<<"number is Negative."<<endl;
    }


return 0;
}


/*
Why it's happening
Here is exactly how the computer reads your code when num = 92:

First Check: It sees if (num > 0). Since 92 is greater than 0, it prints "Number is positive.".

Second Check: Because the first if ends there, the computer moves to the next line and sees a brand new, totally separate if(num==0) statement. Since 92 does not equal 0, it skips that block and jumps straight to its connected else block.

The Trap: That else block belongs only to if(num==0). So it prints "number is Negative.".

The Fix: Link them with else if
To fix this, you just need to chain the conditions together using else if. This tells the computer: "Only check the next condition if the previous one was false."
*/


