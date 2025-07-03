#include <iostream>
#include <algorithm>

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    std::cout << "Enter 10 integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> numbers[i];
    }

    std::sort(numbers, numbers + SIZE);

    std::cout << "Sorted array:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
