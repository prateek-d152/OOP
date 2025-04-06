#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int sum = add(num1, num2);

    cout << "Sum = " << sum << endl;

    return 0;
}

int add(int a, int b) {
    return a + b;
}
