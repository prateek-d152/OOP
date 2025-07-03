#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    std::cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; ++i) {
        int value;
        std::cin >> value;
        numbers.push_back(value);
    }

    if (numbers.size() >= 3) {
        numbers.erase(numbers.begin() + 2);
    }

    std::cout << "Vector elements after removing the third element:\n";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
