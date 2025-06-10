 //
// 5. Function and Loop - Prime Number Checker
// Write a C++ program with a function bool isPrime(int n) that returns true if n is prime.
// - Take input from the user.
// - Use the function to check and display whether the number is prime.

#include <iostream>
#include <cmath> 

bool isPrime(int n) {
    if (n <= 1) return false;           
    if (n == 2) return true;            
    if (n % 2 == 0) return false;       

    for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
