
/*
2. The while Loop (The Patient One)

Use a while loop when you don't know exactly how many times the loop will run,

 but you know what condition must be true for it to keep going. It checks the condition before entering the loop.

Syntax:

while (condition) {
    // Code to be executed
    // (Don't forget to change something here so the condition eventually becomes false!)
}

*/

//Example:

// Imagine you're making a game, and you want it to run as long as the player hasn't typed 'Q' to quit:



#include <iostream>

int main() {
    char choice = 'Y';

    while (choice != 'Q') {
        std::cout << "Playing the game... Press 'Q' to quit: ";
        std::cin >> choice;
    }

    std::cout << "Game Over!" << std::endl;
    return 0;
}

