/*
#include <iostream>

using namespace std;

int main()
{

    // Assignment Operators Assign values to variables, e.g., =, +=, -=, *=, /=

     int a  =  10;
     int b;
     cout<<"Assign value of a to b:"<<(b=a)<<endl;


     cout<<"Is address of the a and b are equal:"<<(&a == &b)<<endl;  // Both are distinct objects.

      // Add 5 to the variable a

      a += 5;
      cout<<"Value of the a after increment:"<<a<<endl;

      // Value of a after decrement by 6
      cout<<"Value of a  after decrement by 6:"<<(a-=6)<<endl;

      // Value of the a after mul and div by 2

      cout<<"Multipication Asssignment:"<<(a*=5)<<endl;

      cout<<"Division Assignment:"<<(a/=2)<<endl;


return 0;
}

*/


#include <iostream>
using namespace std;

int main(){

    //Logical Operators Combine or negate conditions: Logical AND (&&) Logical OR (||) Logical NOT (!)


    // 1. Logical AN(&&) : return two values 1,0
      // 1 --> When both conditions are True
      // 0 --> when one of condition is False

    int a = 10;
    int b = 20;

    cout<<"Is the number is greater than 5 and less than 15:"<<(a>5)&&(a<15)<<endl;

return 0;
}

