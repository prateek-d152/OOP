#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main() {
    std::vector<int> numbers = {10, 20, 30};

    try {
        std::cout << "Accessing index 5: ";
        std::cout << numbers.at(5);  // throws out_of_range
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of Range Error: " << e.what() << "\n";
    }

    return 0;
}
