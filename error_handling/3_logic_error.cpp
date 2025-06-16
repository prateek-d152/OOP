#include <iostream>
#include <stdexcept>
using namespace std;

int calculateRetirementYears(int age) {
    if (age < 0 || age > 120) {
        throw logic_error("Invalid age: must be between 0 and 120");
    }
    return 65 - age;
}


int main() {
    try {
        int age;
        cout << "Enter your age: ";
        cin >> age;

        int yearsLeft = calculateRetirementYears(age);
        if (yearsLeft <= 0) {
            cout << "You are already eligible for retirement!\n";
        } else {
            cout << "Years left until retirement: " << yearsLeft << "\n";
        }

    } catch (const logic_error& e) {
        std::cerr << "Logic Error: " << e.what() << "\n";
    }
}
