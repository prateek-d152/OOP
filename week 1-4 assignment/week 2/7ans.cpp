//7. Sum of Array Elements using Function
// Write a C++ program that:
// - Declares an array of 5 integers.
// - Uses a function `int sumArray(int arr[], int size)` to calculate the sum.
// - Displays the total sum of the array elements.

#include <iostream>

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    std::cout << "Enter 5 integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> numbers[i];
    }

    int total = sumArray(numbers, SIZE);
    std::cout << "Total sum: " << total << std::endl;

    return 0;
}

