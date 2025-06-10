//4. Vector Functions
// Write a C++ program to:
// - Create a vector of integers.
// - Insert 5 values using push_back().
// - Remove the third element using erase().
// - Display all elements using iterators.

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    std::cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; ++i) {
        int val;
        std::cin >> val;
        numbers.push_back(val);
    }

    if (numbers.size() >= 3) {
        numbers.erase(numbers.begin() + 2);
    } else {
        std::cout << "Not enough elements to erase the third one.\n";
    }

    std::cout << "Vector elements:\n";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
