
// Write a tiny program that asks a user for two things:

// Their favorite food (which might be two words, like "Ice Cream").

// The number of portions they want to order (always a positive whole number).

// Print back a confirmation like: "Ordering 3 portions of Ice Cream!"


#include <iostream>

using namespace std;

int main()
{

    string favourite_food;

    unsigned int portions; // Unsigned because you can't order negative food!

    // Take a input of favourite_food.

    cout<<"Which is your favourite food:";
    getline(cin,favourite_food);


    // Take the portion input.
    cout<<"How much portions you want?";
    cin>>portions;

    // printing back.

    cout<<"Ordering "<<portions<<"portions of "<<favourite_food;

    return 0;
}
