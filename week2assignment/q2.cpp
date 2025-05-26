#include <iostream>
#include <algorithm>

int main() {
    int arr[10];

    std::cout << "Enter 10 integers:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
    }

    std::sort(arr, arr + 10);

    std::cout << "Sorted array: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
