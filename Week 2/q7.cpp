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

    std::cout << "Sum of array elements: " << total << std::endl;

    return 0;
}
