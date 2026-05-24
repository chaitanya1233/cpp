#include <iostream>
#include <string>

using namespace std;

int main()
{

    // You are given the word "TEAM". Your goal is to use .at() to swap the characters around to transform the word into "MEAT".

    string name = "TEAM";

    // We want to rearrange them to spell M-E-A-T

    char letterT = name.at(0);
    char letterM = name.at(3);

    name.at(0) = letterM;
    name.at(3) = letterT;

    cout<<"Name after swapping characters is:"<<name<<endl;
    return 0;
}
