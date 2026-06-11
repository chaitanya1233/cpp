#include <iostream>

using namespace std;

int main(){

    // Miscellaneous Operators Includes sizeof (to get size of a type), address-of (&), dereference (*), and comma operator (,).


    //.1 sizeof() --> To get the size of the type.

    int a = 100;
    cout<<"Size of the integer is:"<<sizeof(a)<<endl;

    float b = 2.34;
    cout<<"Size of the float is:"<<sizeof(b)<<endl;

    char c = 'A';
    cout<<"Size of the char is:"<<sizeof(c)<<endl;

    char name[10] = "Chaitanya";

    cout<<name<<endl;
    cout<<"size of the array:"<<sizeof(name)<<endl;

    long l = 19932;
    cout<<"Size of the long type is:"<<sizeof(l)<<endl;

    short s = 211;
    cout<<"Size of the short is:"<<sizeof(s)<<endl;

    double d = 2.33;
    cout<<"Size of the double is:"<<sizeof(d)<<endl;



    // 2. address-of operator : & ....> Returns hexadecimal value.

    cout<<"What is the address of the a:"<<(&a)<<endl;

    // defreference (*)

    // comma operator --> (,)
return 0;
}


