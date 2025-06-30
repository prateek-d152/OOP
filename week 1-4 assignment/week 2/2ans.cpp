//2. Array Operations 
// Write a C++ program to:
// - Declare an array of 10 integers.
// - Take input from the user.
// - Sort the array using sort() from <algorithm>.
// - Display the sorted array.

#include <iostream>
#include <algorithm> 

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    std::cout << "Enter 10 integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    std::sort(arr, arr + SIZE);

    std::cout << "Sorted array: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
