#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Operations
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: " << (float)num1 / num2 << endl;
        cout << "Modulus: " << num1 % num2 << endl;
    } else {
        cout << "Division and Modulus by zero is not allowed!" << endl;
    }

    return 0;
}
