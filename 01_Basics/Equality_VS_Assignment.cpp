

// Question: Will this program print "ALERT: System is failing!" or "System stable."?

//  Hint: Look closely at the symbol inside the if statement.


#include <iostream>

using namespace std;

int main(){
    int continuousErrors = -1;


    if (continuousErrors=5){
        cout<<"ALERT:System is failing!"<<endl;
    }
    else{
        cout<<"System is safe.";
    }
return 0;
}

// That is the absolute classic "Assignment vs. Equality" trap, and you spotted it instantly.

// Because you used a single equals sign (=), C++ assigned 5 to continuousErrors. Then,

// because 5 is a non-zero number, C++ evaluated the whole condition as true and triggered the alert.

// In Java, the compiler would have saved you by screaming: "Type mismatch: cannot convert from int to boolean."

// But C++ trusts you completely�even when you make a mistake!

