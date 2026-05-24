
// In Java, if you want to read an entire line of text (like a full name), you use scanner.nextLine().

// In C++, your instinct might be to use cin >>

#include <iostream>

using namespace std;

int main(){


    string fullName;

    cout<<"Enter your full name:";

    cin>>fullName;

    cout<<"My fullName is:"<<fullName<<endl;
return 0;
}


// Why did it drop "Smith"?


// The >> operator in C++ is a whitespace delimiter.

// It reads characters until it hits a space, a tab, or a newline character, and then it stops.

// So, cin >> only grabbed "Alice" and left " Smith" sitting behind in the keyboard's memory buffer.

// so, solution is ---> getline();
