#include <iostream>

// Recursive function to calculate sum
int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;

    int result = sum(number);
    std::cout << "Sum of numbers from 1 to " << number << " is: " << result << std::endl;

    return 0;
}
