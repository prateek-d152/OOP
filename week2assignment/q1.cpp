#include <iostream>
#include <string>

int main() {
    std::string fullName;


    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);


    std::cout << "Number of characters: " << fullName.length() << std::endl;

    size_t spacePos = fullName.find(' ');
    if (spacePos != std::string::npos) {
        std::cout << "Position of the first space: " << spacePos << std::endl;
    } else {
        std::cout << "No space found in the name." << std::endl;
    }

    if (spacePos != std::string::npos) {
        std::string modifiedName = fullName.substr(0, spacePos + 1) + "XYZ";
        std::cout << "Modified name: " << modifiedName << std::endl;
    } else {
        std::cout << "Modified name: XYZ" << std::endl; 
    }

    return 0;
}
