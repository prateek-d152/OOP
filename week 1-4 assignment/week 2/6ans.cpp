 //6. Reverse a String (Using Loops)
// Write a C++ program that:
// - Takes a string as input.
// - Reverses the string using a loop.
// - Displays the reversed string.

#include <iostream>
#include <string>

int main() {
    std::string input, reversed = "";

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    for (int i = input.length() - 1; i >= 0; --i) {
        reversed += input[i];
    }

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}
