#include <iostream>
#include <string>

int main() {
    char letter[5] = "abcd";
    std::string word = "Hello";

    std::cout << "Size of char: " << sizeof(letter) << " byte\n";
    std::cout << "Size of string: " << sizeof(word) << " bytes\n";

    std::string a;
    std::cout << "Printing a: " << a << std::endl; 

    return 0;
}