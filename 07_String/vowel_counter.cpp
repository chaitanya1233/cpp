// You'll take a sentence and loop through every single character.

// If the character is a vowel ('a', 'e', 'i', 'o', 'u'), you increment a counter variable.


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence = "coding strings is fun";
    int counter = 0;

    for(char c : sentence){
        if(c == 'a' || c== 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            counter++;
        }
        else{
            continue;
        }
    }
    cout<<"The number of vowels in the given sentence are :"<<counter<<endl;
    return 0;
}
