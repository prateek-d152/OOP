#include <iostream>
#include <string>

int main() {
    std::string fullName;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName); 

    std::cout << "Number of characters: " << fullName.length() << std::endl;

    size_t spacePos = fullName.find(' ');
    if (spacePos != std::string::npos) {
        std::cout << "Position of first space: " << spacePos << std::endl;

        std::string firstName = fullName.substr(0, spacePos);
        std::string modifiedName = firstName + " XYZ";
        std::cout << "Modified name: " << modifiedName << std::endl;
    } else {
        std::cout << "No space found. Please enter both first and last names." << std::endl;
    }

    return 0;
}
