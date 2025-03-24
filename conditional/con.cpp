#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Taking input from the user
    cout << "Enter a number: ";
    cin >> number;

    // 1. If-Else Example
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    // 2. Switch-Case Example
 char grade;
    cout << "\nEnter your grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade) {
        case 'A': cout << "Excellent!" << endl; break;
        case 'B': cout << "Good job!" << endl; break;
        case 'C': cout << "Well done!" << endl; break;
        case 'D': cout << "You passed." << endl; break;
        case 'F': cout << "Better luck next time!" << endl; break;
        default: cout << "Invalid grade entered!" << endl;
    }


    // 3. Ternary Operator Example
    int a, b;
    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    int max = (a > b) ? a : b;
    cout << "The larger number is: " << max << endl;

    return 0;
}
