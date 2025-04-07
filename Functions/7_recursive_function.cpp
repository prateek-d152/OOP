#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 1)              // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 1) {
        cout << "Invalid input. Enter a number greater than 0.";
    } else {
        int result = factorial(number);
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}
