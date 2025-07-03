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
