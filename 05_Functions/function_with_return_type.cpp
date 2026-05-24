#include <iostream>
#include <string>
#include <format> // Required for std::format

int main() {
    std::string name = "Chaitanya";
    int age = 21;

    // Works just like Python's "Hello {}".format(name)
    std::string message = std::format("Hello, my name is {} and I am {} years old.", name, age);

    std::cout << message << std::endl;
    return 0;
}
