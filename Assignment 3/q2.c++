#include <iostream>
using namespace std;

void incrementByValue(int x) {
    x += 5;
}

void incrementByReference(int &x) {
    x += 5;
}

int main() {
    int num = 10;

    incrementByValue(num);
    cout << "After incrementByValue, num = " << num << endl; // Value remains 10

    incrementByReference(num);
    cout << "After incrementByReference, num = " << num << endl; // Value becomes 15

    // Pass by value doesn't change the original value.
    // Pass by reference modifies the original variable.
    return 0;
}
